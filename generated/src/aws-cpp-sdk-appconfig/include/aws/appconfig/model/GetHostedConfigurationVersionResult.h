/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace AppConfig
{
namespace Model
{
  class GetHostedConfigurationVersionResult
  {
  public:
    AWS_APPCONFIG_API GetHostedConfigurationVersionResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_APPCONFIG_API GetHostedConfigurationVersionResult(GetHostedConfigurationVersionResult&&);
    AWS_APPCONFIG_API GetHostedConfigurationVersionResult& operator=(GetHostedConfigurationVersionResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetHostedConfigurationVersionResult(const GetHostedConfigurationVersionResult&) = delete;
    GetHostedConfigurationVersionResult& operator=(const GetHostedConfigurationVersionResult&) = delete;


    AWS_APPCONFIG_API GetHostedConfigurationVersionResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_APPCONFIG_API GetHostedConfigurationVersionResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline GetHostedConfigurationVersionResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline GetHostedConfigurationVersionResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline GetHostedConfigurationVersionResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The configuration profile ID.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const{ return m_configurationProfileId; }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetConfigurationProfileId(const Aws::String& value) { m_configurationProfileId = value; }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetConfigurationProfileId(Aws::String&& value) { m_configurationProfileId = std::move(value); }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetConfigurationProfileId(const char* value) { m_configurationProfileId.assign(value); }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline GetHostedConfigurationVersionResult& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline GetHostedConfigurationVersionResult& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline GetHostedConfigurationVersionResult& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}


    /**
     * <p>The configuration version.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The configuration version.</p>
     */
    inline void SetVersionNumber(int value) { m_versionNumber = value; }

    /**
     * <p>The configuration version.</p>
     */
    inline GetHostedConfigurationVersionResult& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}


    /**
     * <p>A description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the configuration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the configuration.</p>
     */
    inline GetHostedConfigurationVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the configuration.</p>
     */
    inline GetHostedConfigurationVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the configuration.</p>
     */
    inline GetHostedConfigurationVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The content of the configuration or the configuration data.</p>
     */
    inline Aws::IOStream& GetContent() { return m_content.GetUnderlyingStream(); }

    /**
     * <p>The content of the configuration or the configuration data.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_content = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline GetHostedConfigurationVersionResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline GetHostedConfigurationVersionResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline GetHostedConfigurationVersionResult& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_configurationProfileId;

    int m_versionNumber;

    Aws::String m_description;

  Aws::Utils::Stream::ResponseStream m_content;

    Aws::String m_contentType;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
