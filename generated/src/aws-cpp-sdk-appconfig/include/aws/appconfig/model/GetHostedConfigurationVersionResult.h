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
    AWS_APPCONFIG_API GetHostedConfigurationVersionResult() = default;
    AWS_APPCONFIG_API GetHostedConfigurationVersionResult(GetHostedConfigurationVersionResult&&) = default;
    AWS_APPCONFIG_API GetHostedConfigurationVersionResult& operator=(GetHostedConfigurationVersionResult&&) = default;
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
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetHostedConfigurationVersionResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration profile ID.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const { return m_configurationProfileId; }
    template<typename ConfigurationProfileIdT = Aws::String>
    void SetConfigurationProfileId(ConfigurationProfileIdT&& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = std::forward<ConfigurationProfileIdT>(value); }
    template<typename ConfigurationProfileIdT = Aws::String>
    GetHostedConfigurationVersionResult& WithConfigurationProfileId(ConfigurationProfileIdT&& value) { SetConfigurationProfileId(std::forward<ConfigurationProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration version.</p>
     */
    inline int GetVersionNumber() const { return m_versionNumber; }
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline GetHostedConfigurationVersionResult& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetHostedConfigurationVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetHostedConfigurationVersionResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    GetHostedConfigurationVersionResult& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GetHostedConfigurationVersionResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetHostedConfigurationVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_configurationProfileId;
    bool m_configurationProfileIdHasBeenSet = false;

    int m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_content{};
    bool m_contentHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
