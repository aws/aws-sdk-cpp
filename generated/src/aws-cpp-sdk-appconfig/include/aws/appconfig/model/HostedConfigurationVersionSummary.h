/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppConfig
{
namespace Model
{

  /**
   * <p>Information about the configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/HostedConfigurationVersionSummary">AWS
   * API Reference</a></p>
   */
  class HostedConfigurationVersionSummary
  {
  public:
    AWS_APPCONFIG_API HostedConfigurationVersionSummary();
    AWS_APPCONFIG_API HostedConfigurationVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API HostedConfigurationVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline HostedConfigurationVersionSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline HostedConfigurationVersionSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline HostedConfigurationVersionSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration profile ID.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const{ return m_configurationProfileId; }
    inline bool ConfigurationProfileIdHasBeenSet() const { return m_configurationProfileIdHasBeenSet; }
    inline void SetConfigurationProfileId(const Aws::String& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = value; }
    inline void SetConfigurationProfileId(Aws::String&& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = std::move(value); }
    inline void SetConfigurationProfileId(const char* value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId.assign(value); }
    inline HostedConfigurationVersionSummary& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}
    inline HostedConfigurationVersionSummary& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}
    inline HostedConfigurationVersionSummary& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration version.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline HostedConfigurationVersionSummary& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline HostedConfigurationVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline HostedConfigurationVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline HostedConfigurationVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A standard MIME type describing the format of the configuration content. For
     * more information, see <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.17">Content-Type</a>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline HostedConfigurationVersionSummary& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline HostedConfigurationVersionSummary& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline HostedConfigurationVersionSummary& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined label for an AppConfig hosted configuration version.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }
    inline HostedConfigurationVersionSummary& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}
    inline HostedConfigurationVersionSummary& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}
    inline HostedConfigurationVersionSummary& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the Key Management Service key that was used to
     * encrypt this specific version of the configuration data in the AppConfig hosted
     * configuration store.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline HostedConfigurationVersionSummary& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline HostedConfigurationVersionSummary& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline HostedConfigurationVersionSummary& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_configurationProfileId;
    bool m_configurationProfileIdHasBeenSet = false;

    int m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
