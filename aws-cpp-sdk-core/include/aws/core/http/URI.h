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

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/http/Scheme.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <stdint.h>

namespace Aws
{
namespace Http
{

extern AWS_CORE_API const char* SEPARATOR;
static const uint16_t HTTP_DEFAULT_PORT = 80;
static const uint16_t HTTPS_DEFAULT_PORT = 443;

typedef Aws::Map<Aws::String, Aws::String> QueryStringParameterCollection;

class AWS_CORE_API URI
{
public:
    /**
      * Defaults to http and port 80
      */
    URI();
    /**
      * Parses string and sets uri fields
      */
    URI(const Aws::String&);
    /**
      * Parses string and sets uri fields
      */
    URI(const char*);

    URI& operator = (const Aws::String&);
    URI& operator = (const char*);

    bool operator == (const URI&) const;
    bool operator == (const Aws::String&) const;
    bool operator == (const char*) const;
    bool operator != (const URI&) const;
    bool operator != (const Aws::String&) const;
    bool operator != (const char*) const;

    /**
    * scheme or protocol e.g. http, https, ftp
    */
    inline Scheme GetScheme() const { return scheme;}

    /**
    * Sets scheme, if the port is incompaitible with this scheme, the port will automatically be set as well.
    */
    void SetScheme(Scheme value);

    /**
    * Gets the domain portion of the uri
    */
    inline const Aws::String& GetAuthority() const { return authority; }

    /**
    * Sets the domain portion of the uri
    */
    inline void SetAuthority(const Aws::String& value) { authority = value; }

    /**
    * Gets the port portion of the uri, defaults to 22 for ftp, 80 for http and 443 for https
    */
    inline uint16_t GetPort() const { return port; }

    /**
    * Sets the port portion of the uri, normally you will not have to do this. If the scheme is set to ftp, http
    * or https then the default ports will be set.
    */
    inline void SetPort(uint16_t value) { port = value; }

    /**
    * Gets the path portion of the uri e.g. the portion after the first slash after the authority and prior to the
    * query string.
    */
    inline const Aws::String& GetPath() const { return path; }

    /**
    * Sets the path portion of the uri. URL encodes it if needed
    */
    void SetPath(const Aws::String& value, bool shouldEncode = true);

    /**
    * Gets the non-url-encoded PATH
    */
    Aws::String GetUnEncodedPath() const;

    /**
    * Gets the raw query string including the ?
    */
    inline const Aws::String& GetQueryString() const { return queryString; }

    Aws::String GetFormParameters() const;

    /**
    * Cannonicalizes the query string.
    */
    void CanonicalizeQueryString();

    /**
    * parses query string and returns url decoded key/value mappings from it. Spaces and all url encoded
    * values will not be encoded.
    */
    QueryStringParameterCollection GetQueryStringParameters(bool decode = true) const;

    /**
    * Adds query string parameter to underlying query string.
    */
    void AddQueryStringParameter(const char* key, const Aws::String& value);

    /**
    * Converts the URI to a String usable for its context. e.g. an http request.
    */
    Aws::String GetURIString(bool includeQueryString = true) const;

private:
    void ParseURIParts(const Aws::String& uri);
    void ExtractAndSetScheme(const Aws::String& uri);
    void ExtractAndSetAuthority(const Aws::String& uri);
    void ExtractAndSetPort(const Aws::String& uri);
    void ExtractAndSetPath(const Aws::String& uri);
    void ExtractAndSetQueryString(const Aws::String& uri);
    bool CompareURIParts(const URI& other) const;

    Scheme scheme;
    Aws::String authority;
    uint16_t port;
    Aws::String path;
    Aws::String queryString;
};

} // namespace Http
} // namespace Aws

