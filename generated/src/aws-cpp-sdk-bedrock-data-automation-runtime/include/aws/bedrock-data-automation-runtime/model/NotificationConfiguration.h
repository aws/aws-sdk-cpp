/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/model/EventBridgeConfiguration.h>
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
   * <p>Notification configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API NotificationConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API NotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API NotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Event bridge configuration.</p>
     */
    inline const EventBridgeConfiguration& GetEventBridgeConfiguration() const { return m_eventBridgeConfiguration; }
    inline bool EventBridgeConfigurationHasBeenSet() const { return m_eventBridgeConfigurationHasBeenSet; }
    template<typename EventBridgeConfigurationT = EventBridgeConfiguration>
    void SetEventBridgeConfiguration(EventBridgeConfigurationT&& value) { m_eventBridgeConfigurationHasBeenSet = true; m_eventBridgeConfiguration = std::forward<EventBridgeConfigurationT>(value); }
    template<typename EventBridgeConfigurationT = EventBridgeConfiguration>
    NotificationConfiguration& WithEventBridgeConfiguration(EventBridgeConfigurationT&& value) { SetEventBridgeConfiguration(std::forward<EventBridgeConfigurationT>(value)); return *this;}
    ///@}
  private:

    EventBridgeConfiguration m_eventBridgeConfiguration;
    bool m_eventBridgeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
