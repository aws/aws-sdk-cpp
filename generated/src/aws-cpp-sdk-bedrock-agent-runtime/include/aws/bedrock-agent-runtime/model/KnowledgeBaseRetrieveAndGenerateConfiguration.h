/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GenerationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/OrchestrationConfiguration.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrievalConfiguration.h>
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
   * <p>Contains details about the resource being queried.</p> <p>This data type is
   * used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_RequestSyntax">Retrieve
   * request</a> – in the <code>knowledgeBaseConfiguration</code> field</p> </li>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_RequestSyntax">RetrieveAndGenerate
   * request</a> – in the <code>knowledgeBaseConfiguration</code> field</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseRetrieveAndGenerateConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseRetrieveAndGenerateConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrieveAndGenerateConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrieveAndGenerateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrieveAndGenerateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for response generation based on the knowledge base
     * query results.</p>
     */
    inline const GenerationConfiguration& GetGenerationConfiguration() const{ return m_generationConfiguration; }
    inline bool GenerationConfigurationHasBeenSet() const { return m_generationConfigurationHasBeenSet; }
    inline void SetGenerationConfiguration(const GenerationConfiguration& value) { m_generationConfigurationHasBeenSet = true; m_generationConfiguration = value; }
    inline void SetGenerationConfiguration(GenerationConfiguration&& value) { m_generationConfigurationHasBeenSet = true; m_generationConfiguration = std::move(value); }
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithGenerationConfiguration(const GenerationConfiguration& value) { SetGenerationConfiguration(value); return *this;}
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithGenerationConfiguration(GenerationConfiguration&& value) { SetGenerationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the knowledge base that is queried.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the foundation model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> used to generate a response.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for how the model processes the prompt prior to retrieval and
     * generation.</p>
     */
    inline const OrchestrationConfiguration& GetOrchestrationConfiguration() const{ return m_orchestrationConfiguration; }
    inline bool OrchestrationConfigurationHasBeenSet() const { return m_orchestrationConfigurationHasBeenSet; }
    inline void SetOrchestrationConfiguration(const OrchestrationConfiguration& value) { m_orchestrationConfigurationHasBeenSet = true; m_orchestrationConfiguration = value; }
    inline void SetOrchestrationConfiguration(OrchestrationConfiguration&& value) { m_orchestrationConfigurationHasBeenSet = true; m_orchestrationConfiguration = std::move(value); }
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithOrchestrationConfiguration(const OrchestrationConfiguration& value) { SetOrchestrationConfiguration(value); return *this;}
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithOrchestrationConfiguration(OrchestrationConfiguration&& value) { SetOrchestrationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for how to retrieve and return the knowledge base
     * query.</p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetRetrievalConfiguration() const{ return m_retrievalConfiguration; }
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }
    inline void SetRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = value; }
    inline void SetRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::move(value); }
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { SetRetrievalConfiguration(value); return *this;}
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { SetRetrievalConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    GenerationConfiguration m_generationConfiguration;
    bool m_generationConfigurationHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    OrchestrationConfiguration m_orchestrationConfiguration;
    bool m_orchestrationConfigurationHasBeenSet = false;

    KnowledgeBaseRetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
