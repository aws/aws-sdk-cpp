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



    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetHostedConfigurationVersionResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetHostedConfigurationVersionResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetHostedConfigurationVersionResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration profile ID.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const{ return m_configurationProfileId; }
    inline void SetConfigurationProfileId(const Aws::String& value) { m_configurationProfileId = value; }
    inline void SetConfigurationProfileId(Aws::String&& value) { m_configurationProfileId = std::move(value); }
    inline void SetConfigurationProfileId(const char* value) { m_configurationProfileId.assign(value); }
    inline GetHostedConfigurationVersionResult& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}
    inline GetHostedConfigurationVersionResult& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}
    inline GetHostedConfigurationVersionResult& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration version.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(int value) { m_versionNumber = value; }
    inline GetHostedConfigurationVersionResult& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetHostedConfigurationVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetHostedConfigurationVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetHostedConfigurationVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the configuration or the configuration data.</p>
     */
    inline Aws::IOStream& GetContent() const { return m_content.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_content = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline GetHostedConfigurationVersionResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline GetHostedConfigurationVersionResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline GetHostedConfigurationVersionResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabel = value; }
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabel = std::move(value); }
    inline void SetVersionLabel(const char* value) { m_versionLabel.assign(value); }
    inline GetHostedConfigurationVersionResult& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}
    inline GetHostedConfigurationVersionResult& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}
    inline GetHostedConfigurationVersionResult& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetHostedConfigurationVersionResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetHostedConfigurationVersionResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetHostedConfigurationVersionResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetHostedConfigurationVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetHostedConfigurationVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetHostedConfigurationVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
