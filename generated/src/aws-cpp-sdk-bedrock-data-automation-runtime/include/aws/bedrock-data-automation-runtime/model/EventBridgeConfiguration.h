/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>

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
   * <p>Event bridge configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/EventBridgeConfiguration">AWS
   * API Reference</a></p>
   */
  class EventBridgeConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API EventBridgeConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API EventBridgeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API EventBridgeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Event bridge flag.</p>
     */
    inline bool GetEventBridgeEnabled() const { return m_eventBridgeEnabled; }
    inline bool EventBridgeEnabledHasBeenSet() const { return m_eventBridgeEnabledHasBeenSet; }
    inline void SetEventBridgeEnabled(bool value) { m_eventBridgeEnabledHasBeenSet = true; m_eventBridgeEnabled = value; }
    inline EventBridgeConfiguration& WithEventBridgeEnabled(bool value) { SetEventBridgeEnabled(value); return *this;}
    ///@}
  private:

    bool m_eventBridgeEnabled{false};
    bool m_eventBridgeEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
