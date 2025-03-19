/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/model/TriggerType.h>
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
   * <p>Contains the configuration information of alarm state changes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/StateChangeConfiguration">AWS
   * API Reference</a></p>
   */
  class StateChangeConfiguration
  {
  public:
    AWS_IOTEVENTSDATA_API StateChangeConfiguration() = default;
    AWS_IOTEVENTSDATA_API StateChangeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API StateChangeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The trigger type. If the value is <code>SNOOZE_TIMEOUT</code>, the snooze
     * duration ends and the alarm automatically changes to the <code>NORMAL</code>
     * state.</p>
     */
    inline TriggerType GetTriggerType() const { return m_triggerType; }
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }
    inline void SetTriggerType(TriggerType value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }
    inline StateChangeConfiguration& WithTriggerType(TriggerType value) { SetTriggerType(value); return *this;}
    ///@}
  private:

    TriggerType m_triggerType{TriggerType::NOT_SET};
    bool m_triggerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
