/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/model/VideoSegmentConfiguration.h>
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
   * <p>Video asset processing configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/VideoAssetProcessingConfiguration">AWS
   * API Reference</a></p>
   */
  class VideoAssetProcessingConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API VideoAssetProcessingConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API VideoAssetProcessingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API VideoAssetProcessingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Delimits the segment of the input that will be processed</p>
     */
    inline const VideoSegmentConfiguration& GetSegmentConfiguration() const { return m_segmentConfiguration; }
    inline bool SegmentConfigurationHasBeenSet() const { return m_segmentConfigurationHasBeenSet; }
    template<typename SegmentConfigurationT = VideoSegmentConfiguration>
    void SetSegmentConfiguration(SegmentConfigurationT&& value) { m_segmentConfigurationHasBeenSet = true; m_segmentConfiguration = std::forward<SegmentConfigurationT>(value); }
    template<typename SegmentConfigurationT = VideoSegmentConfiguration>
    VideoAssetProcessingConfiguration& WithSegmentConfiguration(SegmentConfigurationT&& value) { SetSegmentConfiguration(std::forward<SegmentConfigurationT>(value)); return *this;}
    ///@}
  private:

    VideoSegmentConfiguration m_segmentConfiguration;
    bool m_segmentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
