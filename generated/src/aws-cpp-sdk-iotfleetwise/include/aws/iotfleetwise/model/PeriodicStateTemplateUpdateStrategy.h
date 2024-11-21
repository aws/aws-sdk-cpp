/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/TimePeriod.h>
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
   * <p>Vehicles associated with the state template will stream telemetry data during
   * a specified time period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/PeriodicStateTemplateUpdateStrategy">AWS
   * API Reference</a></p>
   */
  class PeriodicStateTemplateUpdateStrategy
  {
  public:
    AWS_IOTFLEETWISE_API PeriodicStateTemplateUpdateStrategy();
    AWS_IOTFLEETWISE_API PeriodicStateTemplateUpdateStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API PeriodicStateTemplateUpdateStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const TimePeriod& GetStateTemplateUpdateRate() const{ return m_stateTemplateUpdateRate; }
    inline bool StateTemplateUpdateRateHasBeenSet() const { return m_stateTemplateUpdateRateHasBeenSet; }
    inline void SetStateTemplateUpdateRate(const TimePeriod& value) { m_stateTemplateUpdateRateHasBeenSet = true; m_stateTemplateUpdateRate = value; }
    inline void SetStateTemplateUpdateRate(TimePeriod&& value) { m_stateTemplateUpdateRateHasBeenSet = true; m_stateTemplateUpdateRate = std::move(value); }
    inline PeriodicStateTemplateUpdateStrategy& WithStateTemplateUpdateRate(const TimePeriod& value) { SetStateTemplateUpdateRate(value); return *this;}
    inline PeriodicStateTemplateUpdateStrategy& WithStateTemplateUpdateRate(TimePeriod&& value) { SetStateTemplateUpdateRate(std::move(value)); return *this;}
    ///@}
  private:

    TimePeriod m_stateTemplateUpdateRate;
    bool m_stateTemplateUpdateRateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
