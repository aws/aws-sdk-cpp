/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Used to configure a frequency-based vehicle signal fetch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/TimeBasedSignalFetchConfig">AWS
   * API Reference</a></p>
   */
  class TimeBasedSignalFetchConfig
  {
  public:
    AWS_IOTFLEETWISE_API TimeBasedSignalFetchConfig() = default;
    AWS_IOTFLEETWISE_API TimeBasedSignalFetchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API TimeBasedSignalFetchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The frequency with which the signal fetch will be executed.</p>
     */
    inline long long GetExecutionFrequencyMs() const { return m_executionFrequencyMs; }
    inline bool ExecutionFrequencyMsHasBeenSet() const { return m_executionFrequencyMsHasBeenSet; }
    inline void SetExecutionFrequencyMs(long long value) { m_executionFrequencyMsHasBeenSet = true; m_executionFrequencyMs = value; }
    inline TimeBasedSignalFetchConfig& WithExecutionFrequencyMs(long long value) { SetExecutionFrequencyMs(value); return *this;}
    ///@}
  private:

    long long m_executionFrequencyMs{0};
    bool m_executionFrequencyMsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
