/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations for a prompt from Prompt management to use in a
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptFlowNodeResourceConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptFlowNodeResourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptFlowNodeResourceConfiguration() = default;
    AWS_BEDROCKAGENT_API PromptFlowNodeResourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptFlowNodeResourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the prompt from Prompt management.</p>
     */
    inline const Aws::String& GetPromptArn() const { return m_promptArn; }
    inline bool PromptArnHasBeenSet() const { return m_promptArnHasBeenSet; }
    template<typename PromptArnT = Aws::String>
    void SetPromptArn(PromptArnT&& value) { m_promptArnHasBeenSet = true; m_promptArn = std::forward<PromptArnT>(value); }
    template<typename PromptArnT = Aws::String>
    PromptFlowNodeResourceConfiguration& WithPromptArn(PromptArnT&& value) { SetPromptArn(std::forward<PromptArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_promptArn;
    bool m_promptArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
