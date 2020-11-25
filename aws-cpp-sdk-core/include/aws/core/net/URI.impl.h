/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSSet.h>

#include <cstdlib>
#include <cctype>
#include <cassert>
#include <algorithm>
#include <iomanip>

namespace Aws
{
namespace Net
{

extern const char* SEPARATOR;
        
void InsertValueOrderedParameter(QueryStringParameterCollection& queryParams, const Aws::String& key, const Aws::String& value);

template<typename Scheme, typename Traits>
URI<Scheme, Traits>::URI()
{
    SetScheme({});
}

template<typename Scheme, typename Traits>
URI<Scheme, Traits>::URI(const Aws::String& uri)
{
    ParseURIParts(uri);
}

template<typename Scheme, typename Traits>
URI<Scheme, Traits>::URI(const char* uri)
{
    ParseURIParts(uri);
}

template<typename Scheme, typename Traits>
URI<Scheme, Traits>& URI<Scheme, Traits>::operator =(const Aws::String& uri)
{
    this->ParseURIParts(uri);
    return *this;
}

template<typename Scheme, typename Traits>
URI<Scheme, Traits>& URI<Scheme, Traits>::operator =(const char* uri)
{
    this->ParseURIParts(uri);
    return *this;
}

template<typename Scheme, typename Traits>
bool URI<Scheme, Traits>::operator ==(const URI& other) const
{
    return CompareURIParts(other);
}

template<typename Scheme, typename Traits>
bool URI<Scheme, Traits>::operator ==(const Aws::String& other) const
{
    return CompareURIParts(other);
}

template<typename Scheme, typename Traits>
bool URI<Scheme, Traits>::operator ==(const char* other) const
{
    return CompareURIParts(other);
}

template<typename Scheme, typename Traits>
bool URI<Scheme, Traits>::operator !=(const URI& other) const
{
    return !(*this == other);
}

template<typename Scheme, typename Traits>
bool URI<Scheme, Traits>::operator !=(const Aws::String& other) const
{
    return !(*this == other);
}

template<typename Scheme, typename Traits>
bool URI<Scheme, Traits>::operator !=(const char* other) const
{
    return !(*this == other);
}

template<typename Scheme, typename Traits>
Aws::String URI<Scheme, Traits>::URLEncodePathRFC3986(const Aws::String& path)
{
    if(path.empty())
    {
        return path;
    }

    const Aws::Vector<Aws::String> pathParts = Utils::StringUtils::Split(path, '/');
    Aws::StringStream ss;
    ss << std::hex << std::uppercase;

    // escape characters appearing in a URL path according to RFC 3986
    for (const auto& segment : pathParts)
    {
        ss << '/';
        for(unsigned char c : segment) // alnum results in UB if the value of c is not unsigned char & is not EOF
        {
            // §2.3 unreserved characters
            if (Utils::StringUtils::IsAlnum(c))
            {
                ss << c;
                continue;
            }
            switch(c)
            {
                // §2.3 unreserved characters
                case '-': case '_': case '.': case '~':
                // The path section of the URL allow reserved characters to appear unescaped
                // RFC 3986 §2.2 Reserved characters
                // NOTE: this implementation does not accurately implement the RFC on purpose to accommodate for
                // discrepancies in the implementations of URL encoding between AWS services for legacy reasons.
                case '$': case '&': case ',':
                case ':': case '=': case '@':
                    ss << c;
                    break;
                default:
                    ss << '%' << std::setfill('0') << std::setw(2) << (int)((unsigned char)c) << std::setw(0);
            }
        }
    }

    //if the last character was also a slash, then add that back here.
    if (path.back() == '/')
    {
        ss << '/';
    }

    return ss.str();
}

template<typename Scheme, typename Traits>
Aws::String URI<Scheme, Traits>::URLEncodePath(const Aws::String& path)
{
    Aws::Vector<Aws::String> pathParts = Utils::StringUtils::Split(path, '/');
    Aws::StringStream ss;

    for (Aws::Vector<Aws::String>::iterator iter = pathParts.begin(); iter != pathParts.end(); ++iter)
    {
        ss << '/' << Utils::StringUtils::URLEncode(iter->c_str());
    }

    //if the last character was also a slash, then add that back here.
    if (path.length() > 0 && path[path.length() - 1] == '/')
    {
        ss << '/';
    }

    if (path.length() > 0 && path[0] != '/')
    {
        return ss.str().substr(1);
    }
    else
    {
        return ss.str();
    }
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::SetPath(const Aws::String& value)
{
    const Aws::Vector<Aws::String> pathParts = Utils::StringUtils::Split(value, '/');
    Aws::String path;
    path.reserve(value.length() + 1/* in case we have to append slash before the path. */);

    for (const auto& segment : pathParts)
    {
        path.push_back('/');
        path.append(segment);
    }

    if (value.back() == '/')
    {
        path.push_back('/');
    }
    m_path = std::move(path);
}

template<typename Scheme, typename Traits>
QueryStringParameterCollection URI<Scheme, Traits>::GetQueryStringParameters(bool decode) const
{
    Aws::String queryString = GetQueryString();

    QueryStringParameterCollection parameterCollection;

    //if we actually have a query string
    if (queryString.size() > 0)
    {
        size_t currentPos = 1, locationOfNextDelimiter = 1;

        //while we have params left to parse
        while (currentPos < queryString.size())
        {
            //find next key/value pair
            locationOfNextDelimiter = queryString.find('&', currentPos);

            Aws::String keyValuePair;

            //if this isn't the last parameter
            if (locationOfNextDelimiter != Aws::String::npos)
            {
                keyValuePair = queryString.substr(currentPos, locationOfNextDelimiter - currentPos);
            }
            //if it is the last parameter
            else
            {
                keyValuePair = queryString.substr(currentPos);
            }

            //split on =
            size_t locationOfEquals = keyValuePair.find('=');
            Aws::String key = keyValuePair.substr(0, locationOfEquals);
            Aws::String value = keyValuePair.substr(locationOfEquals + 1);

            if(decode)
            {
                InsertValueOrderedParameter(parameterCollection, Utils::StringUtils::URLDecode(key.c_str()), Utils::StringUtils::URLDecode(value.c_str()));
            }
            else
            {
                InsertValueOrderedParameter(parameterCollection, key, value);
            }

            currentPos += keyValuePair.size() + 1;
        }
    }

    return parameterCollection;
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::CanonicalizeQueryString()
{
    QueryStringParameterCollection sortedParameters = GetQueryStringParameters(false);
    Aws::StringStream queryStringStream;

    bool first = true;

    if(sortedParameters.size() > 0)
    {
        queryStringStream << "?";
    }

    if(m_queryString.find('=') != std::string::npos)
    {
        for (QueryStringParameterCollection::iterator iter = sortedParameters.begin();
             iter != sortedParameters.end(); ++iter)
        {
            if (!first)
            {
                queryStringStream << "&";
            }

            first = false;
            queryStringStream << iter->first.c_str() << "=" << iter->second.c_str();
        }

        m_queryString = queryStringStream.str();
    }
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::AddQueryStringParameter(const char* key, const Aws::String& value)
{
    if (m_queryString.size() <= 0)
    {
        m_queryString.append("?");
    }
    else
    {
        m_queryString.append("&");
    }

    m_queryString.append(Utils::StringUtils::URLEncode(key) + "=" + Utils::StringUtils::URLEncode(value.c_str()));
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::AddQueryStringParameter(const Aws::Map<Aws::String, Aws::String>& queryStringPairs)
{
    for(const auto& entry: queryStringPairs)
    {
        AddQueryStringParameter(entry.first.c_str(), entry.second);
    }
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::SetQueryString(const Aws::String& str)
{
    m_queryString = "";

    if (str.empty()) return;

    if (str.front() != '?')
    {
        m_queryString.append("?").append(str);
    }
    else
    {
       m_queryString = str;
    }
}

template<typename Scheme, typename Traits>
Aws::String URI<Scheme, Traits>::GetURIString(bool includeQueryString) const
{
    assert(m_authority.size() > 0);

    Aws::StringStream ss;
    ss << Traits::ToString(m_scheme) << SEPARATOR << m_authority;

    if (m_port != Traits::DefaultPort(m_scheme))
    {
        ss << ":" << m_port;
    }

    if(m_path != "/")
    {
        ss << URLEncodePathRFC3986(m_path);
    }

    if(includeQueryString)
    {
        ss << m_queryString;
    }

    return ss.str();
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::ParseURIParts(const Aws::String& uri)
{
    ExtractAndSetScheme(uri);
    ExtractAndSetAuthority(uri);
    ExtractAndSetPort(uri);
    ExtractAndSetPath(uri);
    ExtractAndSetQueryString(uri);
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::ExtractAndSetScheme(const Aws::String& uri)
{
    size_t posOfSeparator = uri.find(SEPARATOR);

    if (posOfSeparator != Aws::String::npos)
    {
        Aws::String schemePortion = uri.substr(0, posOfSeparator);
        SetScheme(Traits::FromString(schemePortion.c_str()));
    } 
    else 
    {
        SetScheme({});
    }
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::ExtractAndSetAuthority(const Aws::String& uri)
{
    size_t authorityStart = uri.find(SEPARATOR);

    if (authorityStart == Aws::String::npos)
    {
        authorityStart = 0;
    }
    else
    {
        authorityStart += 3;
    }

    size_t posOfEndOfAuthorityPort = uri.find(':', authorityStart);
    size_t posOfEndOfAuthoritySlash = uri.find('/', authorityStart);
    size_t posOfEndOfAuthorityQuery = uri.find('?', authorityStart);
    size_t posEndOfAuthority = (std::min)({posOfEndOfAuthorityPort, posOfEndOfAuthoritySlash, posOfEndOfAuthorityQuery});
    if (posEndOfAuthority == Aws::String::npos)
    {
        posEndOfAuthority = uri.length();
    }

    SetAuthority(uri.substr(authorityStart, posEndOfAuthority - authorityStart));
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::ExtractAndSetPort(const Aws::String& uri)
{
    size_t authorityStart = uri.find(SEPARATOR);

    if(authorityStart == Aws::String::npos)
    {
        authorityStart = 0;
    }
    else
    {
        authorityStart += 3;
    }

    size_t positionOfPortDelimiter = uri.find(':', authorityStart);

    bool hasPort = positionOfPortDelimiter != Aws::String::npos;

    if ((uri.find('/', authorityStart) < positionOfPortDelimiter) || (uri.find('?', authorityStart) < positionOfPortDelimiter))
    {
        hasPort = false;
    }

    if (hasPort)
    {
        Aws::String strPort;

        size_t i = positionOfPortDelimiter + 1;
        char currentDigit = uri[i];

        while (std::isdigit(currentDigit))
        {
            strPort += currentDigit;
            currentDigit = uri[++i];
        }

        SetPort(static_cast<uint16_t>(atoi(strPort.c_str())));
    }
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::ExtractAndSetPath(const Aws::String& uri)
{
    size_t authorityStart = uri.find(SEPARATOR);

    if (authorityStart == Aws::String::npos)
    {
        authorityStart = 0;
    }
    else
    {
        authorityStart += 3;
    }

    size_t pathEnd = uri.find('?');

    if (pathEnd == Aws::String::npos)
    {
        pathEnd = uri.length();
    }

    Aws::String authorityAndPath = uri.substr(authorityStart, pathEnd - authorityStart);

    size_t pathStart = authorityAndPath.find('/');

    if (pathStart != Aws::String::npos)
    {
        SetPath(authorityAndPath.substr(pathStart, pathEnd - pathStart));
    }
    else
    {
        SetPath("/");
    }
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::ExtractAndSetQueryString(const Aws::String& uri)
{
    size_t queryStart = uri.find('?');

    if (queryStart != Aws::String::npos)
    {
        m_queryString = uri.substr(queryStart);
    }
}

template<typename Scheme, typename Traits>
Aws::String URI<Scheme, Traits>::GetFormParameters() const
{
    if(m_queryString.length() == 0)
    {
        return "";
    }
    else
    {
        return m_queryString.substr(1);
    }
}

template<typename Scheme, typename Traits>
bool URI<Scheme, Traits>::CompareURIParts(const URI& other) const
{
    return m_scheme == other.m_scheme && m_authority == other.m_authority && m_path == other.m_path && m_queryString == other.m_queryString;
}

template<typename Scheme, typename Traits>
void URI<Scheme, Traits>::SetScheme(Scheme value) {
    if (m_port == 0 || m_port == Traits::DefaultPort(m_scheme)) {
        m_port = Traits::DefaultPort(value);
    }
    m_scheme = value;
}

} // namespace Net
} // namespace Aws