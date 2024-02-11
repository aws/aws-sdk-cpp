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
  class CreateHostedConfigurationVersionResult
  {
  public:
    AWS_APPCONFIG_API CreateHostedConfigurationVersionResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_APPCONFIG_API CreateHostedConfigurationVersionResult(CreateHostedConfigurationVersionResult&&);
    AWS_APPCONFIG_API CreateHostedConfigurationVersionResult& operator=(CreateHostedConfigurationVersionResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    CreateHostedConfigurationVersionResult(const CreateHostedConfigurationVersionResult&) = delete;
    CreateHostedConfigurationVersionResult& operator=(const CreateHostedConfigurationVersionResult&) = delete;


    AWS_APPCONFIG_API CreateHostedConfigurationVersionResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_APPCONFIG_API CreateHostedConfigurationVersionResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



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
    inline CreateHostedConfigurationVersionResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


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
    inline CreateHostedConfigurationVersionResult& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}


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
    inline CreateHostedConfigurationVersionResult& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}


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
    inline CreateHostedConfigurationVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the configuration.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the configuration.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The content of the configuration or the configuration data.</p>
     */
    inline Aws::IOStream& GetContent() const { return m_content.GetUnderlyingStream(); }

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
    inline CreateHostedConfigurationVersionResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabel = value; }

    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabel = std::move(value); }

    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabel.assign(value); }

    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline CreateHostedConfigurationVersionResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateHostedConfigurationVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateHostedConfigurationVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateHostedConfigurationVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_configurationProfileId;

    int m_versionNumber;

    Aws::String m_description;

    Aws::Utils::Stream::ResponseStream m_content;

    Aws::String m_contentType;

    Aws::String m_versionLabel;

    Aws::String m_kmsKeyArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
