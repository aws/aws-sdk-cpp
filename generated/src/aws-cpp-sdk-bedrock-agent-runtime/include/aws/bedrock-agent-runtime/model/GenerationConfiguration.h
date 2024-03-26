/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/PromptTemplate.h>
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
   * <p>Contains configurations for response generation based on the knowledge base
   * query results.</p> <p>This data type is used in the following API
   * operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_RequestSyntax">RetrieveAndGenerate
   * request</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GenerationConfiguration">AWS
   * API Reference</a></p>
   */
  class GenerationConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GenerationConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API GenerationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GenerationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the template for the prompt that's sent to the model for response
     * generation.</p>
     */
    inline const PromptTemplate& GetPromptTemplate() const{ return m_promptTemplate; }

    /**
     * <p>Contains the template for the prompt that's sent to the model for response
     * generation.</p>
     */
    inline bool PromptTemplateHasBeenSet() const { return m_promptTemplateHasBeenSet; }

    /**
     * <p>Contains the template for the prompt that's sent to the model for response
     * generation.</p>
     */
    inline void SetPromptTemplate(const PromptTemplate& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = value; }

    /**
     * <p>Contains the template for the prompt that's sent to the model for response
     * generation.</p>
     */
    inline void SetPromptTemplate(PromptTemplate&& value) { m_promptTemplateHasBeenSet = true; m_promptTemplate = std::move(value); }

    /**
     * <p>Contains the template for the prompt that's sent to the model for response
     * generation.</p>
     */
    inline GenerationConfiguration& WithPromptTemplate(const PromptTemplate& value) { SetPromptTemplate(value); return *this;}

    /**
     * <p>Contains the template for the prompt that's sent to the model for response
     * generation.</p>
     */
    inline GenerationConfiguration& WithPromptTemplate(PromptTemplate&& value) { SetPromptTemplate(std::move(value)); return *this;}

  private:

    PromptTemplate m_promptTemplate;
    bool m_promptTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
