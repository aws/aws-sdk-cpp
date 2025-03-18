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
    AWS_GREENGRASS_API SecretsManagerSecretResourceData() = default;
    AWS_GREENGRASS_API SecretsManagerSecretResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API SecretsManagerSecretResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the Secrets Manager secret to make available on the core. The value
     * of the secret's latest version (represented by the ''AWSCURRENT'' staging label)
     * is included by default.
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    SecretsManagerSecretResourceData& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. The staging labels whose values you want to make available on the
     * core, in addition to ''AWSCURRENT''.
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalStagingLabelsToDownload() const { return m_additionalStagingLabelsToDownload; }
    inline bool AdditionalStagingLabelsToDownloadHasBeenSet() const { return m_additionalStagingLabelsToDownloadHasBeenSet; }
    template<typename AdditionalStagingLabelsToDownloadT = Aws::Vector<Aws::String>>
    void SetAdditionalStagingLabelsToDownload(AdditionalStagingLabelsToDownloadT&& value) { m_additionalStagingLabelsToDownloadHasBeenSet = true; m_additionalStagingLabelsToDownload = std::forward<AdditionalStagingLabelsToDownloadT>(value); }
    template<typename AdditionalStagingLabelsToDownloadT = Aws::Vector<Aws::String>>
    SecretsManagerSecretResourceData& WithAdditionalStagingLabelsToDownload(AdditionalStagingLabelsToDownloadT&& value) { SetAdditionalStagingLabelsToDownload(std::forward<AdditionalStagingLabelsToDownloadT>(value)); return *this;}
    template<typename AdditionalStagingLabelsToDownloadT = Aws::String>
    SecretsManagerSecretResourceData& AddAdditionalStagingLabelsToDownload(AdditionalStagingLabelsToDownloadT&& value) { m_additionalStagingLabelsToDownloadHasBeenSet = true; m_additionalStagingLabelsToDownload.emplace_back(std::forward<AdditionalStagingLabelsToDownloadT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalStagingLabelsToDownload;
    bool m_additionalStagingLabelsToDownloadHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
