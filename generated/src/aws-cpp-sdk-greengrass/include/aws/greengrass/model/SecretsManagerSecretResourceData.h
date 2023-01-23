/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Attributes that define a secret resource, which references a secret from AWS
   * Secrets Manager. AWS IoT Greengrass stores a local, encrypted copy of the secret
   * on the Greengrass core, where it can be securely accessed by connectors and
   * Lambda functions.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/SecretsManagerSecretResourceData">AWS
   * API Reference</a></p>
   */
  class SecretsManagerSecretResourceData
  {
  public:
    AWS_GREENGRASS_API SecretsManagerSecretResourceData();
    AWS_GREENGRASS_API SecretsManagerSecretResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API SecretsManagerSecretResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the Secrets Manager secret to make available on the core. The value
     * of the secret's latest version (represented by the ''AWSCURRENT'' staging label)
     * is included by default.
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * The ARN of the Secrets Manager secret to make available on the core. The value
     * of the secret's latest version (represented by the ''AWSCURRENT'' staging label)
     * is included by default.
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * The ARN of the Secrets Manager secret to make available on the core. The value
     * of the secret's latest version (represented by the ''AWSCURRENT'' staging label)
     * is included by default.
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * The ARN of the Secrets Manager secret to make available on the core. The value
     * of the secret's latest version (represented by the ''AWSCURRENT'' staging label)
     * is included by default.
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * The ARN of the Secrets Manager secret to make available on the core. The value
     * of the secret's latest version (represented by the ''AWSCURRENT'' staging label)
     * is included by default.
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * The ARN of the Secrets Manager secret to make available on the core. The value
     * of the secret's latest version (represented by the ''AWSCURRENT'' staging label)
     * is included by default.
     */
    inline SecretsManagerSecretResourceData& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * The ARN of the Secrets Manager secret to make available on the core. The value
     * of the secret's latest version (represented by the ''AWSCURRENT'' staging label)
     * is included by default.
     */
    inline SecretsManagerSecretResourceData& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * The ARN of the Secrets Manager secret to make available on the core. The value
     * of the secret's latest version (represented by the ''AWSCURRENT'' staging label)
     * is included by default.
     */
    inline SecretsManagerSecretResourceData& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalStagingLabelsToDownload() const{ return m_additionalStagingLabelsToDownload; }

    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline bool AdditionalStagingLabelsToDownloadHasBeenSet() const { return m_additionalStagingLabelsToDownloadHasBeenSet; }

    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline void SetAdditionalStagingLabelsToDownload(const Aws::Vector<Aws::String>& value) { m_additionalStagingLabelsToDownloadHasBeenSet = true; m_additionalStagingLabelsToDownload = value; }

    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline void SetAdditionalStagingLabelsToDownload(Aws::Vector<Aws::String>&& value) { m_additionalStagingLabelsToDownloadHasBeenSet = true; m_additionalStagingLabelsToDownload = std::move(value); }

    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline SecretsManagerSecretResourceData& WithAdditionalStagingLabelsToDownload(const Aws::Vector<Aws::String>& value) { SetAdditionalStagingLabelsToDownload(value); return *this;}

    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline SecretsManagerSecretResourceData& WithAdditionalStagingLabelsToDownload(Aws::Vector<Aws::String>&& value) { SetAdditionalStagingLabelsToDownload(std::move(value)); return *this;}

    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline SecretsManagerSecretResourceData& AddAdditionalStagingLabelsToDownload(const Aws::String& value) { m_additionalStagingLabelsToDownloadHasBeenSet = true; m_additionalStagingLabelsToDownload.push_back(value); return *this; }

    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline SecretsManagerSecretResourceData& AddAdditionalStagingLabelsToDownload(Aws::String&& value) { m_additionalStagingLabelsToDownloadHasBeenSet = true; m_additionalStagingLabelsToDownload.push_back(std::move(value)); return *this; }

    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline SecretsManagerSecretResourceData& AddAdditionalStagingLabelsToDownload(const char* value) { m_additionalStagingLabelsToDownloadHasBeenSet = true; m_additionalStagingLabelsToDownload.push_back(value); return *this; }

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalStagingLabelsToDownload;
    bool m_additionalStagingLabelsToDownloadHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
