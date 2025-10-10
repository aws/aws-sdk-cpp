/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Trigger configuration based on tokens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/TokenBasedTriggerInput">AWS
   * API Reference</a></p>
   */
  class TokenBasedTriggerInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API TokenBasedTriggerInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API TokenBasedTriggerInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API TokenBasedTriggerInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number of tokens that trigger memory processing.</p>
     */
    inline int GetTokenCount() const { return m_tokenCount; }
    inline bool TokenCountHasBeenSet() const { return m_tokenCountHasBeenSet; }
    inline void SetTokenCount(int value) { m_tokenCountHasBeenSet = true; m_tokenCount = value; }
    inline TokenBasedTriggerInput& WithTokenCount(int value) { SetTokenCount(value); return *this;}
    ///@}
  private:

    int m_tokenCount{0};
    bool m_tokenCountHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
