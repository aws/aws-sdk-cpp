/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/model/TimestampSegment.h>
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
   * <p>Delimits the segment of the input that will be processed</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/VideoSegmentConfiguration">AWS
   * API Reference</a></p>
   */
  class VideoSegmentConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API VideoSegmentConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API VideoSegmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API VideoSegmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp segment</p>
     */
    inline const TimestampSegment& GetTimestampSegment() const { return m_timestampSegment; }
    inline bool TimestampSegmentHasBeenSet() const { return m_timestampSegmentHasBeenSet; }
    template<typename TimestampSegmentT = TimestampSegment>
    void SetTimestampSegment(TimestampSegmentT&& value) { m_timestampSegmentHasBeenSet = true; m_timestampSegment = std::forward<TimestampSegmentT>(value); }
    template<typename TimestampSegmentT = TimestampSegment>
    VideoSegmentConfiguration& WithTimestampSegment(TimestampSegmentT&& value) { SetTimestampSegment(std::forward<TimestampSegmentT>(value)); return *this;}
    ///@}
  private:

    TimestampSegment m_timestampSegment;
    bool m_timestampSegmentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
