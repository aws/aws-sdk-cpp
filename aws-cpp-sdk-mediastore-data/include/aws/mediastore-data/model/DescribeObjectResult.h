/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaStoreData
{
namespace Model
{
  class AWS_MEDIASTOREDATA_API DescribeObjectResult
  {
  public:
    DescribeObjectResult();
    DescribeObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ETag that represents a unique instance of the object.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The ETag that represents a unique instance of the object.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The ETag that represents a unique instance of the object.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The ETag that represents a unique instance of the object.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The ETag that represents a unique instance of the object.</p>
     */
    inline DescribeObjectResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The ETag that represents a unique instance of the object.</p>
     */
    inline DescribeObjectResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The ETag that represents a unique instance of the object.</p>
     */
    inline DescribeObjectResult& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The content type of the object.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the object.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The content type of the object.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The content type of the object.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The content type of the object.</p>
     */
    inline DescribeObjectResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the object.</p>
     */
    inline DescribeObjectResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type of the object.</p>
     */
    inline DescribeObjectResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The length of the object in bytes.</p>
     */
    inline long long GetContentLength() const{ return m_contentLength; }

    /**
     * <p>The length of the object in bytes.</p>
     */
    inline void SetContentLength(long long value) { m_contentLength = value; }

    /**
     * <p>The length of the object in bytes.</p>
     */
    inline DescribeObjectResult& WithContentLength(long long value) { SetContentLength(value); return *this;}


    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline void SetCacheControl(const Aws::String& value) { m_cacheControl = value; }

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline void SetCacheControl(Aws::String&& value) { m_cacheControl = std::move(value); }

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline void SetCacheControl(const char* value) { m_cacheControl.assign(value); }

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline DescribeObjectResult& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline DescribeObjectResult& WithCacheControl(Aws::String&& value) { SetCacheControl(std::move(value)); return *this;}

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline DescribeObjectResult& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}


    /**
     * <p>The date and time that the object was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that the object was last modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }

    /**
     * <p>The date and time that the object was last modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date and time that the object was last modified.</p>
     */
    inline DescribeObjectResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that the object was last modified.</p>
     */
    inline DescribeObjectResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}

  private:

    Aws::String m_eTag;

    Aws::String m_contentType;

    long long m_contentLength;

    Aws::String m_cacheControl;

    Aws::Utils::DateTime m_lastModified;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
