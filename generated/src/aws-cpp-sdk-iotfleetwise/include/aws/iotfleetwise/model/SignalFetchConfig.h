/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/TimeBasedSignalFetchConfig.h>
#include <aws/iotfleetwise/model/ConditionBasedSignalFetchConfig.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The configuration of the signal fetch operation.</p>  <p>Access to
   * certain Amazon Web Services IoT FleetWise features is currently gated. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/SignalFetchConfig">AWS
   * API Reference</a></p>
   */
  class SignalFetchConfig
  {
  public:
    AWS_IOTFLEETWISE_API SignalFetchConfig() = default;
    AWS_IOTFLEETWISE_API SignalFetchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API SignalFetchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of a time-based signal fetch operation.</p>
     */
    inline const TimeBasedSignalFetchConfig& GetTimeBased() const { return m_timeBased; }
    inline bool TimeBasedHasBeenSet() const { return m_timeBasedHasBeenSet; }
    template<typename TimeBasedT = TimeBasedSignalFetchConfig>
    void SetTimeBased(TimeBasedT&& value) { m_timeBasedHasBeenSet = true; m_timeBased = std::forward<TimeBasedT>(value); }
    template<typename TimeBasedT = TimeBasedSignalFetchConfig>
    SignalFetchConfig& WithTimeBased(TimeBasedT&& value) { SetTimeBased(std::forward<TimeBasedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a condition-based signal fetch operation.</p>
     */
    inline const ConditionBasedSignalFetchConfig& GetConditionBased() const { return m_conditionBased; }
    inline bool ConditionBasedHasBeenSet() const { return m_conditionBasedHasBeenSet; }
    template<typename ConditionBasedT = ConditionBasedSignalFetchConfig>
    void SetConditionBased(ConditionBasedT&& value) { m_conditionBasedHasBeenSet = true; m_conditionBased = std::forward<ConditionBasedT>(value); }
    template<typename ConditionBasedT = ConditionBasedSignalFetchConfig>
    SignalFetchConfig& WithConditionBased(ConditionBasedT&& value) { SetConditionBased(std::forward<ConditionBasedT>(value)); return *this;}
    ///@}
  private:

    TimeBasedSignalFetchConfig m_timeBased;
    bool m_timeBasedHasBeenSet = false;

    ConditionBasedSignalFetchConfig m_conditionBased;
    bool m_conditionBasedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
