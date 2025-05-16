/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation-runtime/model/AssetProcessingConfiguration.h>
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
namespace BedrockDataAutomationRuntime
{
namespace Model
{

  /**
   * <p>Input configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/InputConfiguration">AWS
   * API Reference</a></p>
   */
  class InputConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InputConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>S3 uri.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    InputConfiguration& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Asset processing configuration</p>
     */
    inline const AssetProcessingConfiguration& GetAssetProcessingConfiguration() const { return m_assetProcessingConfiguration; }
    inline bool AssetProcessingConfigurationHasBeenSet() const { return m_assetProcessingConfigurationHasBeenSet; }
    template<typename AssetProcessingConfigurationT = AssetProcessingConfiguration>
    void SetAssetProcessingConfiguration(AssetProcessingConfigurationT&& value) { m_assetProcessingConfigurationHasBeenSet = true; m_assetProcessingConfiguration = std::forward<AssetProcessingConfigurationT>(value); }
    template<typename AssetProcessingConfigurationT = AssetProcessingConfiguration>
    InputConfiguration& WithAssetProcessingConfiguration(AssetProcessingConfigurationT&& value) { SetAssetProcessingConfiguration(std::forward<AssetProcessingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    AssetProcessingConfiguration m_assetProcessingConfiguration;
    bool m_assetProcessingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
