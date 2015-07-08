/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/core/http/URI.h>

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <stdlib.h>
#include <cctype>
#include <cassert>
#include <algorithm>

using namespace Aws::Http;
using namespace Aws::Utils;

namespace Aws
{
namespace Http
{

const char* SEPARATOR = "://";

} // namespace Http
} // namespace Aws

URI::URI() : scheme(Scheme::HTTP), port(HTTP_DEFAULT_PORT)
{
}

URI::URI(const Aws::String& uri) : scheme(Scheme::HTTP), port(HTTP_DEFAULT_PORT)
{
    ParseURIParts(uri);
}

URI::URI(const char* uri) : scheme(Scheme::HTTP), port(HTTP_DEFAULT_PORT)
{
    ParseURIParts(uri);
}

URI& URI::operator =(const Aws::String& uri)
{
    this->ParseURIParts(uri);
    return *this;
}

URI& URI::operator =(const char* uri)
{
    this->ParseURIParts(uri);
    return *this;
}

bool URI::operator ==(const URI& other) const
{
    return CompareURIParts(other);
}

bool URI::operator ==(const Aws::String& other) const
{
    return CompareURIParts(other);
}

bool URI::operator ==(const char* other) const
{
    return CompareURIParts(other);
}

bool URI::operator !=(const URI& other) const
{
    return !(*this == other);
}

bool URI::operator !=(const Aws::String& other) const
{
    return !(*this == other);
}

bool URI::operator !=(const char* other) const
{
    return !(*this == other);
}

void URI::SetScheme(Scheme value)
{
    assert(value == Scheme::HTTP || value == Scheme::HTTPS);

    if (value == Scheme::HTTP)
    {
        port = port == HTTPS_DEFAULT_PORT || port == 0 ? HTTP_DEFAULT_PORT : port;
        scheme = value;
    }
    else if (value == Scheme::HTTPS)
    {
        port = port == HTTP_DEFAULT_PORT || port == 0 ? HTTPS_DEFAULT_PORT : port;
        scheme = value;
    }
}

void URI::SetPath(const Aws::String& value, bool shouldEncode)
{
    //we need to url encode the path parts (mainly to take care of spaces that a user might put here)
    if (shouldEncode)
    {
        Aws::Vector<Aws::String> pathParts = StringUtils::Split(value, '/');
        Aws::StringStream ss;

        for (Aws::Vector<Aws::String>::iterator iter = pathParts.begin(); iter != pathParts.end(); ++iter)
        {
            ss << '/' << StringUtils::URLEncode(iter->c_str());
        }

        //if the last character was also a slash, then add that back here.
        if (value[value.length() - 1] == '/')
        {
            ss << '/';
        }

        path = ss.str();
    }
    else
    {
        path = value;
    }
}

Aws::String URI::GetUnEncodedPath() const
{
    return StringUtils::URLDecode(path.c_str());
}

QueryStringParameterCollection URI::GetQueryStringParameters(bool decode) const
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
                parameterCollection[StringUtils::URLDecode(key.c_str())] = StringUtils::URLDecode(value.c_str());
            }
            else
            {
                parameterCollection[key] = value;
            }
            currentPos += keyValuePair.size() + 1;
        }
    }

    return parameterCollection;
}

void URI::CanonicalizeQueryString()
{
    QueryStringParameterCollection sortedParameters = GetQueryStringParameters(false);
    Aws::StringStream queryStringStream;

    bool first = true;

    if(sortedParameters.size() > 0)
    {
        queryStringStream << "?";
    }

    if(queryString.find("=") != std::string::npos)
    {
        for (QueryStringParameterCollection::iterator iter = sortedParameters.begin();
             iter != sortedParameters.end(); ++iter)
        {
            if (!first)
            {
                queryStringStream << "&";
            }

            first = false;
            queryStringStream << iter->first << "=" << iter->second;
        }

        queryString = queryStringStream.str();
    }
}

void URI::AddQueryStringParameter(const char* key, const Aws::String& value)
{
    if (queryString.size() <= 0)
    {
        queryString.append("?");
    }
    else
    {
        queryString.append("&");
    }

    queryString.append(StringUtils::URLEncode(key) + "=" + StringUtils::URLEncode(value.c_str()));
}

Aws::String URI::GetURIString(bool includeQueryString) const
{
    assert(authority.size() > 0);

    Aws::StringStream ss;
    ss << SchemeMapper::ToString(scheme) << SEPARATOR << authority;

    if (scheme == Scheme::HTTP && port != HTTP_DEFAULT_PORT)
    {
        ss << ":" << port;
    }
    else if (scheme == Scheme::HTTPS && port != HTTPS_DEFAULT_PORT)
    {
        ss << ":" << port;
    }

    if(path != "/")
    {
        ss << path;
    }

    if(includeQueryString)
        ss << queryString;

    return ss.str();
}

void URI::ParseURIParts(const Aws::String& uri)
{
    ExtractAndSetScheme(uri);
    ExtractAndSetAuthority(uri);
    ExtractAndSetPort(uri);
    ExtractAndSetPath(uri);
    ExtractAndSetQueryString(uri);
}

void URI::ExtractAndSetScheme(const Aws::String& uri)
{
    size_t posOfSeparator = uri.find(SEPARATOR);

    if (posOfSeparator != Aws::String::npos)
    {
        Aws::String schemePortion = uri.substr(0, posOfSeparator);
        SetScheme(SchemeMapper::FromString(schemePortion.c_str()));
    }
    else
    {
        SetScheme(Scheme::HTTP);
    }
}

void URI::ExtractAndSetAuthority(const Aws::String& uri)
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
    size_t posEndOfAuthority = std::min({posOfEndOfAuthorityPort, posOfEndOfAuthoritySlash, posOfEndOfAuthorityQuery});
    if (posEndOfAuthority == Aws::String::npos)
    {
        posEndOfAuthority = uri.length();
    }

    SetAuthority(uri.substr(authorityStart, posEndOfAuthority - authorityStart));
}

void URI::ExtractAndSetPort(const Aws::String& uri)
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

void URI::ExtractAndSetPath(const Aws::String& uri)
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
        SetPath(authorityAndPath.substr(pathStart, pathEnd - pathStart), false);
    }
    else
    {
        SetPath("/");
    }
}

void URI::ExtractAndSetQueryString(const Aws::String& uri)
{
    size_t queryStart = uri.find('?');

    if (queryStart != Aws::String::npos)
    {
        queryString = uri.substr(queryStart);
    }
}

Aws::String URI::GetFormParameters() const
{
    if(queryString.length() == 0)
    {
        return "";
    }
    else
    {
        return queryString.substr(1);
    }
}

bool URI::CompareURIParts(const URI& other) const
{
    return scheme == other.scheme && authority == other.authority && path == other.path && queryString == other.queryString;
}
