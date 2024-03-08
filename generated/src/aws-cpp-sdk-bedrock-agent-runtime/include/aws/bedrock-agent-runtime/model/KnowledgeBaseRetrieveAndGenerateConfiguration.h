/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains details about the resource being queried.</p><p><h3>See Also:</h3>  
   * <a
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


    /**
     * <p>The unique identifier of the knowledge base that is queried and the
     * foundation model used for generation.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base that is queried and the
     * foundation model used for generation.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base that is queried and the
     * foundation model used for generation.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base that is queried and the
     * foundation model used for generation.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base that is queried and the
     * foundation model used for generation.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base that is queried and the
     * foundation model used for generation.</p>
     */
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base that is queried and the
     * foundation model used for generation.</p>
     */
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base that is queried and the
     * foundation model used for generation.</p>
     */
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The ARN of the foundation model used to generate a response.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The ARN of the foundation model used to generate a response.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The ARN of the foundation model used to generate a response.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The ARN of the foundation model used to generate a response.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The ARN of the foundation model used to generate a response.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The ARN of the foundation model used to generate a response.</p>
     */
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The ARN of the foundation model used to generate a response.</p>
     */
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the foundation model used to generate a response.</p>
     */
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>Contains configurations for how to retrieve and return the knowledge base
     * query.</p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetRetrievalConfiguration() const{ return m_retrievalConfiguration; }

    /**
     * <p>Contains configurations for how to retrieve and return the knowledge base
     * query.</p>
     */
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }

    /**
     * <p>Contains configurations for how to retrieve and return the knowledge base
     * query.</p>
     */
    inline void SetRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = value; }

    /**
     * <p>Contains configurations for how to retrieve and return the knowledge base
     * query.</p>
     */
    inline void SetRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::move(value); }

    /**
     * <p>Contains configurations for how to retrieve and return the knowledge base
     * query.</p>
     */
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { SetRetrievalConfiguration(value); return *this;}

    /**
     * <p>Contains configurations for how to retrieve and return the knowledge base
     * query.</p>
     */
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { SetRetrievalConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    KnowledgeBaseRetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
