/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/PeriodicStateTemplateUpdateStrategy.h>
#include <aws/iotfleetwise/model/OnChangeStateTemplateUpdateStrategy.h>
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
   * <p>The update strategy for the state template. Vehicles associated with the
   * state template can stream telemetry data with either an <code>onChange</code> or
   * <code>periodic</code> update strategy. </p>  <p>Access to certain
   * Amazon Web Services IoT FleetWise features is currently gated. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/StateTemplateUpdateStrategy">AWS
   * API Reference</a></p>
   */
  class StateTemplateUpdateStrategy
  {
  public:
    AWS_IOTFLEETWISE_API StateTemplateUpdateStrategy() = default;
    AWS_IOTFLEETWISE_API StateTemplateUpdateStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StateTemplateUpdateStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const PeriodicStateTemplateUpdateStrategy& GetPeriodic() const { return m_periodic; }
    inline bool PeriodicHasBeenSet() const { return m_periodicHasBeenSet; }
    template<typename PeriodicT = PeriodicStateTemplateUpdateStrategy>
    void SetPeriodic(PeriodicT&& value) { m_periodicHasBeenSet = true; m_periodic = std::forward<PeriodicT>(value); }
    template<typename PeriodicT = PeriodicStateTemplateUpdateStrategy>
    StateTemplateUpdateStrategy& WithPeriodic(PeriodicT&& value) { SetPeriodic(std::forward<PeriodicT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OnChangeStateTemplateUpdateStrategy& GetOnChange() const { return m_onChange; }
    inline bool OnChangeHasBeenSet() const { return m_onChangeHasBeenSet; }
    template<typename OnChangeT = OnChangeStateTemplateUpdateStrategy>
    void SetOnChange(OnChangeT&& value) { m_onChangeHasBeenSet = true; m_onChange = std::forward<OnChangeT>(value); }
    template<typename OnChangeT = OnChangeStateTemplateUpdateStrategy>
    StateTemplateUpdateStrategy& WithOnChange(OnChangeT&& value) { SetOnChange(std::forward<OnChangeT>(value)); return *this;}
    ///@}
  private:

    PeriodicStateTemplateUpdateStrategy m_periodic;
    bool m_periodicHasBeenSet = false;

    OnChangeStateTemplateUpdateStrategy m_onChange;
    bool m_onChangeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
