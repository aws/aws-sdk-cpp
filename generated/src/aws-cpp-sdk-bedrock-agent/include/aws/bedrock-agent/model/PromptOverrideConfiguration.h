/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/PromptConfiguration.h>
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
   * <p>Contains configurations to override prompts in different parts of an agent
   * sequence. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
   * prompts</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptOverrideConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptOverrideConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptOverrideConfiguration();
    AWS_BEDROCKAGENT_API PromptOverrideConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptOverrideConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence. If you specify this field, at least one
     * of the <code>promptConfigurations</code> must contain a <code>parserMode</code>
     * value that is set to <code>OVERRIDDEN</code>.</p>
     */
    inline const Aws::String& GetOverrideLambda() const{ return m_overrideLambda; }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence. If you specify this field, at least one
     * of the <code>promptConfigurations</code> must contain a <code>parserMode</code>
     * value that is set to <code>OVERRIDDEN</code>.</p>
     */
    inline bool OverrideLambdaHasBeenSet() const { return m_overrideLambdaHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence. If you specify this field, at least one
     * of the <code>promptConfigurations</code> must contain a <code>parserMode</code>
     * value that is set to <code>OVERRIDDEN</code>.</p>
     */
    inline void SetOverrideLambda(const Aws::String& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = value; }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence. If you specify this field, at least one
     * of the <code>promptConfigurations</code> must contain a <code>parserMode</code>
     * value that is set to <code>OVERRIDDEN</code>.</p>
     */
    inline void SetOverrideLambda(Aws::String&& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = std::move(value); }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence. If you specify this field, at least one
     * of the <code>promptConfigurations</code> must contain a <code>parserMode</code>
     * value that is set to <code>OVERRIDDEN</code>.</p>
     */
    inline void SetOverrideLambda(const char* value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda.assign(value); }

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence. If you specify this field, at least one
     * of the <code>promptConfigurations</code> must contain a <code>parserMode</code>
     * value that is set to <code>OVERRIDDEN</code>.</p>
     */
    inline PromptOverrideConfiguration& WithOverrideLambda(const Aws::String& value) { SetOverrideLambda(value); return *this;}

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence. If you specify this field, at least one
     * of the <code>promptConfigurations</code> must contain a <code>parserMode</code>
     * value that is set to <code>OVERRIDDEN</code>.</p>
     */
    inline PromptOverrideConfiguration& WithOverrideLambda(Aws::String&& value) { SetOverrideLambda(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function to use when parsing the raw foundation model
     * output in parts of the agent sequence. If you specify this field, at least one
     * of the <code>promptConfigurations</code> must contain a <code>parserMode</code>
     * value that is set to <code>OVERRIDDEN</code>.</p>
     */
    inline PromptOverrideConfiguration& WithOverrideLambda(const char* value) { SetOverrideLambda(value); return *this;}


    /**
     * <p>Contains configurations to override a prompt template in one part of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline const Aws::Vector<PromptConfiguration>& GetPromptConfigurations() const{ return m_promptConfigurations; }

    /**
     * <p>Contains configurations to override a prompt template in one part of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline bool PromptConfigurationsHasBeenSet() const { return m_promptConfigurationsHasBeenSet; }

    /**
     * <p>Contains configurations to override a prompt template in one part of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline void SetPromptConfigurations(const Aws::Vector<PromptConfiguration>& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations = value; }

    /**
     * <p>Contains configurations to override a prompt template in one part of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline void SetPromptConfigurations(Aws::Vector<PromptConfiguration>&& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations = std::move(value); }

    /**
     * <p>Contains configurations to override a prompt template in one part of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline PromptOverrideConfiguration& WithPromptConfigurations(const Aws::Vector<PromptConfiguration>& value) { SetPromptConfigurations(value); return *this;}

    /**
     * <p>Contains configurations to override a prompt template in one part of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline PromptOverrideConfiguration& WithPromptConfigurations(Aws::Vector<PromptConfiguration>&& value) { SetPromptConfigurations(std::move(value)); return *this;}

    /**
     * <p>Contains configurations to override a prompt template in one part of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline PromptOverrideConfiguration& AddPromptConfigurations(const PromptConfiguration& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations.push_back(value); return *this; }

    /**
     * <p>Contains configurations to override a prompt template in one part of an agent
     * sequence. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
     * prompts</a>.</p>
     */
    inline PromptOverrideConfiguration& AddPromptConfigurations(PromptConfiguration&& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_overrideLambda;
    bool m_overrideLambdaHasBeenSet = false;

    Aws::Vector<PromptConfiguration> m_promptConfigurations;
    bool m_promptConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
