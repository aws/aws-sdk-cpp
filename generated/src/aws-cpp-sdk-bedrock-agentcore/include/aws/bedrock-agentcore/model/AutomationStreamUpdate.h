/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AutomationStreamStatus.h>
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
   * <p>Contains information about an update to an automation stream.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AutomationStreamUpdate">AWS
   * API Reference</a></p>
   */
  class AutomationStreamUpdate
  {
  public:
    AWS_BEDROCKAGENTCORE_API AutomationStreamUpdate() = default;
    AWS_BEDROCKAGENTCORE_API AutomationStreamUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API AutomationStreamUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the automation stream.</p>
     */
    inline AutomationStreamStatus GetStreamStatus() const { return m_streamStatus; }
    inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }
    inline void SetStreamStatus(AutomationStreamStatus value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }
    inline AutomationStreamUpdate& WithStreamStatus(AutomationStreamStatus value) { SetStreamStatus(value); return *this;}
    ///@}
  private:

    AutomationStreamStatus m_streamStatus{AutomationStreamStatus::NOT_SET};
    bool m_streamStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
