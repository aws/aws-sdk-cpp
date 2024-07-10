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
    AWS_BEDROCKAGENT_API PromptFlowNodeResourceConfiguration();
    AWS_BEDROCKAGENT_API PromptFlowNodeResourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptFlowNodeResourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the prompt from Prompt management.</p>
     */
    inline const Aws::String& GetPromptArn() const{ return m_promptArn; }
    inline bool PromptArnHasBeenSet() const { return m_promptArnHasBeenSet; }
    inline void SetPromptArn(const Aws::String& value) { m_promptArnHasBeenSet = true; m_promptArn = value; }
    inline void SetPromptArn(Aws::String&& value) { m_promptArnHasBeenSet = true; m_promptArn = std::move(value); }
    inline void SetPromptArn(const char* value) { m_promptArnHasBeenSet = true; m_promptArn.assign(value); }
    inline PromptFlowNodeResourceConfiguration& WithPromptArn(const Aws::String& value) { SetPromptArn(value); return *this;}
    inline PromptFlowNodeResourceConfiguration& WithPromptArn(Aws::String&& value) { SetPromptArn(std::move(value)); return *this;}
    inline PromptFlowNodeResourceConfiguration& WithPromptArn(const char* value) { SetPromptArn(value); return *this;}
    ///@}
  private:

    Aws::String m_promptArn;
    bool m_promptArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
