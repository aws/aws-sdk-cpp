/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AutomationStreamUpdate.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Contains information about an update to a stream.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/StreamUpdate">AWS
   * API Reference</a></p>
   */
  class StreamUpdate
  {
  public:
    AWS_BEDROCKAGENTCORE_API StreamUpdate() = default;
    AWS_BEDROCKAGENTCORE_API StreamUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API StreamUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The update to an automation stream.</p>
     */
    inline const AutomationStreamUpdate& GetAutomationStreamUpdate() const { return m_automationStreamUpdate; }
    inline bool AutomationStreamUpdateHasBeenSet() const { return m_automationStreamUpdateHasBeenSet; }
    template<typename AutomationStreamUpdateT = AutomationStreamUpdate>
    void SetAutomationStreamUpdate(AutomationStreamUpdateT&& value) { m_automationStreamUpdateHasBeenSet = true; m_automationStreamUpdate = std::forward<AutomationStreamUpdateT>(value); }
    template<typename AutomationStreamUpdateT = AutomationStreamUpdate>
    StreamUpdate& WithAutomationStreamUpdate(AutomationStreamUpdateT&& value) { SetAutomationStreamUpdate(std::forward<AutomationStreamUpdateT>(value)); return *this;}
    ///@}
  private:

    AutomationStreamUpdate m_automationStreamUpdate;
    bool m_automationStreamUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
