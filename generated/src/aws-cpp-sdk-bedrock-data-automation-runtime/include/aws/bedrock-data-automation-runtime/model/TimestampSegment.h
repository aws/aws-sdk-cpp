/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>

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
   * <p>Timestamp segment</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/TimestampSegment">AWS
   * API Reference</a></p>
   */
  class TimestampSegment
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API TimestampSegment() = default;
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API TimestampSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API TimestampSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Start timestamp in milliseconds</p>
     */
    inline long long GetStartTimeMillis() const { return m_startTimeMillis; }
    inline bool StartTimeMillisHasBeenSet() const { return m_startTimeMillisHasBeenSet; }
    inline void SetStartTimeMillis(long long value) { m_startTimeMillisHasBeenSet = true; m_startTimeMillis = value; }
    inline TimestampSegment& WithStartTimeMillis(long long value) { SetStartTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End timestamp in milliseconds</p>
     */
    inline long long GetEndTimeMillis() const { return m_endTimeMillis; }
    inline bool EndTimeMillisHasBeenSet() const { return m_endTimeMillisHasBeenSet; }
    inline void SetEndTimeMillis(long long value) { m_endTimeMillisHasBeenSet = true; m_endTimeMillis = value; }
    inline TimestampSegment& WithEndTimeMillis(long long value) { SetEndTimeMillis(value); return *this;}
    ///@}
  private:

    long long m_startTimeMillis{0};
    bool m_startTimeMillisHasBeenSet = false;

    long long m_endTimeMillis{0};
    bool m_endTimeMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
