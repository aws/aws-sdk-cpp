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
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API NotificationConfiguration();
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API NotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API NotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Event bridge configuration.</p>
     */
    inline const EventBridgeConfiguration& GetEventBridgeConfiguration() const{ return m_eventBridgeConfiguration; }
    inline bool EventBridgeConfigurationHasBeenSet() const { return m_eventBridgeConfigurationHasBeenSet; }
    inline void SetEventBridgeConfiguration(const EventBridgeConfiguration& value) { m_eventBridgeConfigurationHasBeenSet = true; m_eventBridgeConfiguration = value; }
    inline void SetEventBridgeConfiguration(EventBridgeConfiguration&& value) { m_eventBridgeConfigurationHasBeenSet = true; m_eventBridgeConfiguration = std::move(value); }
    inline NotificationConfiguration& WithEventBridgeConfiguration(const EventBridgeConfiguration& value) { SetEventBridgeConfiguration(value); return *this;}
    inline NotificationConfiguration& WithEventBridgeConfiguration(EventBridgeConfiguration&& value) { SetEventBridgeConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    EventBridgeConfiguration m_eventBridgeConfiguration;
    bool m_eventBridgeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
