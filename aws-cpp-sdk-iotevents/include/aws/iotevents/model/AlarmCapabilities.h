/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/InitializationConfiguration.h>
#include <aws/iotevents/model/AcknowledgeFlow.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains the configuration information of alarm state changes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AlarmCapabilities">AWS
   * API Reference</a></p>
   */
  class AlarmCapabilities
  {
  public:
    AWS_IOTEVENTS_API AlarmCapabilities();
    AWS_IOTEVENTS_API AlarmCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the default alarm state. The configuration applies to all alarms
     * that were created based on this alarm model.</p>
     */
    inline const InitializationConfiguration& GetInitializationConfiguration() const{ return m_initializationConfiguration; }

    /**
     * <p>Specifies the default alarm state. The configuration applies to all alarms
     * that were created based on this alarm model.</p>
     */
    inline bool InitializationConfigurationHasBeenSet() const { return m_initializationConfigurationHasBeenSet; }

    /**
     * <p>Specifies the default alarm state. The configuration applies to all alarms
     * that were created based on this alarm model.</p>
     */
    inline void SetInitializationConfiguration(const InitializationConfiguration& value) { m_initializationConfigurationHasBeenSet = true; m_initializationConfiguration = value; }

    /**
     * <p>Specifies the default alarm state. The configuration applies to all alarms
     * that were created based on this alarm model.</p>
     */
    inline void SetInitializationConfiguration(InitializationConfiguration&& value) { m_initializationConfigurationHasBeenSet = true; m_initializationConfiguration = std::move(value); }

    /**
     * <p>Specifies the default alarm state. The configuration applies to all alarms
     * that were created based on this alarm model.</p>
     */
    inline AlarmCapabilities& WithInitializationConfiguration(const InitializationConfiguration& value) { SetInitializationConfiguration(value); return *this;}

    /**
     * <p>Specifies the default alarm state. The configuration applies to all alarms
     * that were created based on this alarm model.</p>
     */
    inline AlarmCapabilities& WithInitializationConfiguration(InitializationConfiguration&& value) { SetInitializationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to get notified for alarm state changes.</p>
     */
    inline const AcknowledgeFlow& GetAcknowledgeFlow() const{ return m_acknowledgeFlow; }

    /**
     * <p>Specifies whether to get notified for alarm state changes.</p>
     */
    inline bool AcknowledgeFlowHasBeenSet() const { return m_acknowledgeFlowHasBeenSet; }

    /**
     * <p>Specifies whether to get notified for alarm state changes.</p>
     */
    inline void SetAcknowledgeFlow(const AcknowledgeFlow& value) { m_acknowledgeFlowHasBeenSet = true; m_acknowledgeFlow = value; }

    /**
     * <p>Specifies whether to get notified for alarm state changes.</p>
     */
    inline void SetAcknowledgeFlow(AcknowledgeFlow&& value) { m_acknowledgeFlowHasBeenSet = true; m_acknowledgeFlow = std::move(value); }

    /**
     * <p>Specifies whether to get notified for alarm state changes.</p>
     */
    inline AlarmCapabilities& WithAcknowledgeFlow(const AcknowledgeFlow& value) { SetAcknowledgeFlow(value); return *this;}

    /**
     * <p>Specifies whether to get notified for alarm state changes.</p>
     */
    inline AlarmCapabilities& WithAcknowledgeFlow(AcknowledgeFlow&& value) { SetAcknowledgeFlow(std::move(value)); return *this;}

  private:

    InitializationConfiguration m_initializationConfiguration;
    bool m_initializationConfigurationHasBeenSet = false;

    AcknowledgeFlow m_acknowledgeFlow;
    bool m_acknowledgeFlowHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
