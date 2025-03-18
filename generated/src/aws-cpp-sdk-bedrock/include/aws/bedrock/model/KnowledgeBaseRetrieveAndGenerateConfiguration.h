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
    AWS_BEDROCK_API KnowledgeBaseRetrieveAndGenerateConfiguration() = default;
    AWS_BEDROCK_API KnowledgeBaseRetrieveAndGenerateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API KnowledgeBaseRetrieveAndGenerateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the foundation model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> used to generate responses.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details for retrieving text chunks.</p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetRetrievalConfiguration() const { return m_retrievalConfiguration; }
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }
    template<typename RetrievalConfigurationT = KnowledgeBaseRetrievalConfiguration>
    void SetRetrievalConfiguration(RetrievalConfigurationT&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::forward<RetrievalConfigurationT>(value); }
    template<typename RetrievalConfigurationT = KnowledgeBaseRetrievalConfiguration>
    KnowledgeBaseRetrieveAndGenerateConfiguration& WithRetrievalConfiguration(RetrievalConfigurationT&& value) { SetRetrievalConfiguration(std::forward<RetrievalConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations details for response generation based on retrieved
     * text chunks.</p>
     */
    inline const GenerationConfiguration& GetGenerationConfiguration() const { return m_generationConfiguration; }
    inline bool GenerationConfigurationHasBeenSet() const { return m_generationConfigurationHasBeenSet; }
    template<typename GenerationConfigurationT = GenerationConfiguration>
    void SetGenerationConfiguration(GenerationConfigurationT&& value) { m_generationConfigurationHasBeenSet = true; m_generationConfiguration = std::forward<GenerationConfigurationT>(value); }
    template<typename GenerationConfigurationT = GenerationConfiguration>
    KnowledgeBaseRetrieveAndGenerateConfiguration& WithGenerationConfiguration(GenerationConfigurationT&& value) { SetGenerationConfiguration(std::forward<GenerationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details for the model to process the prompt prior to
     * retrieval and response generation.</p>
     */
    inline const OrchestrationConfiguration& GetOrchestrationConfiguration() const { return m_orchestrationConfiguration; }
    inline bool OrchestrationConfigurationHasBeenSet() const { return m_orchestrationConfigurationHasBeenSet; }
    template<typename OrchestrationConfigurationT = OrchestrationConfiguration>
    void SetOrchestrationConfiguration(OrchestrationConfigurationT&& value) { m_orchestrationConfigurationHasBeenSet = true; m_orchestrationConfiguration = std::forward<OrchestrationConfigurationT>(value); }
    template<typename OrchestrationConfigurationT = OrchestrationConfiguration>
    KnowledgeBaseRetrieveAndGenerateConfiguration& WithOrchestrationConfiguration(OrchestrationConfigurationT&& value) { SetOrchestrationConfiguration(std::forward<OrchestrationConfigurationT>(value)); return *this;}
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
