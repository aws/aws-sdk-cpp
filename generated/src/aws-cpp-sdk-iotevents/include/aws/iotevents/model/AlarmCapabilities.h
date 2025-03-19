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
    AWS_IOTEVENTS_API AlarmCapabilities() = default;
    AWS_IOTEVENTS_API AlarmCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the default alarm state. The configuration applies to all alarms
     * that were created based on this alarm model.</p>
     */
    inline const InitializationConfiguration& GetInitializationConfiguration() const { return m_initializationConfiguration; }
    inline bool InitializationConfigurationHasBeenSet() const { return m_initializationConfigurationHasBeenSet; }
    template<typename InitializationConfigurationT = InitializationConfiguration>
    void SetInitializationConfiguration(InitializationConfigurationT&& value) { m_initializationConfigurationHasBeenSet = true; m_initializationConfiguration = std::forward<InitializationConfigurationT>(value); }
    template<typename InitializationConfigurationT = InitializationConfiguration>
    AlarmCapabilities& WithInitializationConfiguration(InitializationConfigurationT&& value) { SetInitializationConfiguration(std::forward<InitializationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to get notified for alarm state changes.</p>
     */
    inline const AcknowledgeFlow& GetAcknowledgeFlow() const { return m_acknowledgeFlow; }
    inline bool AcknowledgeFlowHasBeenSet() const { return m_acknowledgeFlowHasBeenSet; }
    template<typename AcknowledgeFlowT = AcknowledgeFlow>
    void SetAcknowledgeFlow(AcknowledgeFlowT&& value) { m_acknowledgeFlowHasBeenSet = true; m_acknowledgeFlow = std::forward<AcknowledgeFlowT>(value); }
    template<typename AcknowledgeFlowT = AcknowledgeFlow>
    AlarmCapabilities& WithAcknowledgeFlow(AcknowledgeFlowT&& value) { SetAcknowledgeFlow(std::forward<AcknowledgeFlowT>(value)); return *this;}
    ///@}
  private:

    InitializationConfiguration m_initializationConfiguration;
    bool m_initializationConfigurationHasBeenSet = false;

    AcknowledgeFlow m_acknowledgeFlow;
    bool m_acknowledgeFlowHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
