/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Information about the detector state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DetectorStateSummary">AWS
   * API Reference</a></p>
   */
  class DetectorStateSummary
  {
  public:
    AWS_IOTEVENTSDATA_API DetectorStateSummary() = default;
    AWS_IOTEVENTSDATA_API DetectorStateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API DetectorStateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the state.</p>
     */
    inline const Aws::String& GetStateName() const { return m_stateName; }
    inline bool StateNameHasBeenSet() const { return m_stateNameHasBeenSet; }
    template<typename StateNameT = Aws::String>
    void SetStateName(StateNameT&& value) { m_stateNameHasBeenSet = true; m_stateName = std::forward<StateNameT>(value); }
    template<typename StateNameT = Aws::String>
    DetectorStateSummary& WithStateName(StateNameT&& value) { SetStateName(std::forward<StateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateName;
    bool m_stateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
