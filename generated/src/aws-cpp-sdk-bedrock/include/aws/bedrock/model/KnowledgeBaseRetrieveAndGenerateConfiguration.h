/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/KnowledgeBaseRetrievalConfiguration.h>
#include <aws/bedrock/model/GenerationConfiguration.h>
#include <aws/bedrock/model/OrchestrationConfiguration.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains configuration details for retrieving information from a knowledge
   * base and generating responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/KnowledgeBaseRetrieveAndGenerateConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseRetrieveAndGenerateConfiguration
  {
  public:
    AWS_BEDROCK_API KnowledgeBaseRetrieveAndGenerateConfiguration();
    AWS_BEDROCK_API KnowledgeBaseRetrieveAndGenerateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API KnowledgeBaseRetrieveAndGenerateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base.</p>
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
     * <p>The Amazon Resource Name (ARN) of the foundation model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> used to generate responses.</p>
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
     * <p>Contains configuration details for retrieving text chunks.</p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetRetrievalConfiguration() const{ return m_retrievalConfiguration; }
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }
    inline void SetRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = value; }
    inline void SetRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::move(value); }
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { SetRetrievalConfiguration(value); return *this;}
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { SetRetrievalConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations details for response generation based on retrieved
     * text chunks.</p>
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
     * <p>Contains configuration details for the model to process the prompt prior to
     * retrieval and response generation.</p>
     */
    inline const OrchestrationConfiguration& GetOrchestrationConfiguration() const{ return m_orchestrationConfiguration; }
    inline bool OrchestrationConfigurationHasBeenSet() const { return m_orchestrationConfigurationHasBeenSet; }
    inline void SetOrchestrationConfiguration(const OrchestrationConfiguration& value) { m_orchestrationConfigurationHasBeenSet = true; m_orchestrationConfiguration = value; }
    inline void SetOrchestrationConfiguration(OrchestrationConfiguration&& value) { m_orchestrationConfigurationHasBeenSet = true; m_orchestrationConfiguration = std::move(value); }
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithOrchestrationConfiguration(const OrchestrationConfiguration& value) { SetOrchestrationConfiguration(value); return *this;}
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithOrchestrationConfiguration(OrchestrationConfiguration&& value) { SetOrchestrationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    KnowledgeBaseRetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;

    GenerationConfiguration m_generationConfiguration;
    bool m_generationConfigurationHasBeenSet = false;

    OrchestrationConfiguration m_orchestrationConfiguration;
    bool m_orchestrationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
