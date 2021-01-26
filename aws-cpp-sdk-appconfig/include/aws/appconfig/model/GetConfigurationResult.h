/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace AppConfig
{
namespace Model
{
  class AWS_APPCONFIG_API GetConfigurationResult
  {
  public:
    GetConfigurationResult();
    //We have to define these because Microsoft doesn't auto generate them
    GetConfigurationResult(GetConfigurationResult&&);
    GetConfigurationResult& operator=(GetConfigurationResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetConfigurationResult(const GetConfigurationResult&) = delete;
    GetConfigurationResult& operator=(const GetConfigurationResult&) = delete;


    GetConfigurationResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    GetConfigurationResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The content of the configuration or the configuration data.</p>
     */
    inline Aws::IOStream& GetContent() { return m_content.GetUnderlyingStream(); }

    /**
     * <p>The content of the configuration or the configuration data.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_content = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The configuration version.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const{ return m_configurationVersion; }

    /**
     * <p>The configuration version.</p>
     */
    inline void SetConfigurationVersion(const Aws::String& value) { m_configurationVersion = value; }

    /**
     * <p>The configuration version.</p>
     */
    inline void SetConfigurationVersion(Aws::String&& value) { m_configurationVersion = std::move(value); }

    /**
     * <p>The configuration version.</p>
     */
    inline void SetConfigurationVersion(const char* value) { m_configurationVersion.assign(value); }

    /**
     * <p>The configuration version.</p>
     */
    inline GetConfigurationResult& WithConfigurationVersion(const Aws::String& value) { SetConfigurationVersion(value); return *this;}

    /**
     * <p>The configuration version.</p>
     */
    inline GetConfigurationResult& WithConfigurationVersion(Aws::String&& value) { SetConfigurationVersion(std::move(value)); return *this;}

    /**
     * <p>The configuration version.</p>
     */
    inline GetConfigurationResult& WithConfigurationVersion(const char* value) { SetConfigurationVersion(value); return *this;}


    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline GetConfigurationResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline GetConfigurationResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline GetConfigurationResult& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

  Aws::Utils::Stream::ResponseStream m_content;

    Aws::String m_configurationVersion;

    Aws::String m_contentType;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
