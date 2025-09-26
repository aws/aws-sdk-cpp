/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/PromptConfiguration.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains configurations to override prompts in different parts of an agent
   * sequence. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
   * prompts</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PromptOverrideConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptOverrideConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PromptOverrideConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API PromptOverrideConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PromptOverrideConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations to override a prompt template in one part of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>. </p>
     */
    inline const Aws::Vector<PromptConfiguration>& GetPromptConfigurations() const { return m_promptConfigurations; }
    inline bool PromptConfigurationsHasBeenSet() const { return m_promptConfigurationsHasBeenSet; }
    template<typename PromptConfigurationsT = Aws::Vector<PromptConfiguration>>
    void SetPromptConfigurations(PromptConfigurationsT&& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations = std::forward<PromptConfigurationsT>(value); }
    template<typename PromptConfigurationsT = Aws::Vector<PromptConfiguration>>
    PromptOverrideConfiguration& WithPromptConfigurations(PromptConfigurationsT&& value) { SetPromptConfigurations(std::forward<PromptConfigurationsT>(value)); return *this;}
    template<typename PromptConfigurationsT = PromptConfiguration>
    PromptOverrideConfiguration& AddPromptConfigurations(PromptConfigurationsT&& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations.emplace_back(std::forward<PromptConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence. If you specify this field, at least one
     * of the <code>promptConfigurations</code> must contain a <code>parserMode</code>
     * value that is set to <code>OVERRIDDEN</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/lambda-parser.html">Parser
     * Lambda function in Amazon Bedrock Agents</a>. </p>
     */
    inline const Aws::String& GetOverrideLambda() const { return m_overrideLambda; }
    inline bool OverrideLambdaHasBeenSet() const { return m_overrideLambdaHasBeenSet; }
    template<typename OverrideLambdaT = Aws::String>
    void SetOverrideLambda(OverrideLambdaT&& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = std::forward<OverrideLambdaT>(value); }
    template<typename OverrideLambdaT = Aws::String>
    PromptOverrideConfiguration& WithOverrideLambda(OverrideLambdaT&& value) { SetOverrideLambda(std::forward<OverrideLambdaT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PromptConfiguration> m_promptConfigurations;
    bool m_promptConfigurationsHasBeenSet = false;

    Aws::String m_overrideLambda;
    bool m_overrideLambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
