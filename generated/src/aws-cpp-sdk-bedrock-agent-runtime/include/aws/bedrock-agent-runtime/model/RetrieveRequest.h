/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/GuardrailConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrievalConfiguration.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseQuery.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class RetrieveRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Retrieve"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Guardrail settings.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const{ return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    inline void SetGuardrailConfiguration(const GuardrailConfiguration& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = value; }
    inline void SetGuardrailConfiguration(GuardrailConfiguration&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::move(value); }
    inline RetrieveRequest& WithGuardrailConfiguration(const GuardrailConfiguration& value) { SetGuardrailConfiguration(value); return *this;}
    inline RetrieveRequest& WithGuardrailConfiguration(GuardrailConfiguration&& value) { SetGuardrailConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the knowledge base to query.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline RetrieveRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline RetrieveRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline RetrieveRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline RetrieveRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline RetrieveRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline RetrieveRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for the knowledge base query and retrieval process.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetRetrievalConfiguration() const{ return m_retrievalConfiguration; }
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }
    inline void SetRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = value; }
    inline void SetRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::move(value); }
    inline RetrieveRequest& WithRetrievalConfiguration(const KnowledgeBaseRetrievalConfiguration& value) { SetRetrievalConfiguration(value); return *this;}
    inline RetrieveRequest& WithRetrievalConfiguration(KnowledgeBaseRetrievalConfiguration&& value) { SetRetrievalConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the query to send the knowledge base.</p>
     */
    inline const KnowledgeBaseQuery& GetRetrievalQuery() const{ return m_retrievalQuery; }
    inline bool RetrievalQueryHasBeenSet() const { return m_retrievalQueryHasBeenSet; }
    inline void SetRetrievalQuery(const KnowledgeBaseQuery& value) { m_retrievalQueryHasBeenSet = true; m_retrievalQuery = value; }
    inline void SetRetrievalQuery(KnowledgeBaseQuery&& value) { m_retrievalQueryHasBeenSet = true; m_retrievalQuery = std::move(value); }
    inline RetrieveRequest& WithRetrievalQuery(const KnowledgeBaseQuery& value) { SetRetrievalQuery(value); return *this;}
    inline RetrieveRequest& WithRetrievalQuery(KnowledgeBaseQuery&& value) { SetRetrievalQuery(std::move(value)); return *this;}
    ///@}
  private:

    GuardrailConfiguration m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    KnowledgeBaseRetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;

    KnowledgeBaseQuery m_retrievalQuery;
    bool m_retrievalQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
