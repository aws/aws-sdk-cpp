/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseQuery.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrievalConfiguration.h>
#include <aws/bedrock-agent-runtime/model/GuardrailConfiguration.h>
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
    AWS_BEDROCKAGENTRUNTIME_API RetrieveRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Retrieve"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base to query.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    RetrieveRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the query to send the knowledge base.</p>
     */
    inline const KnowledgeBaseQuery& GetRetrievalQuery() const { return m_retrievalQuery; }
    inline bool RetrievalQueryHasBeenSet() const { return m_retrievalQueryHasBeenSet; }
    template<typename RetrievalQueryT = KnowledgeBaseQuery>
    void SetRetrievalQuery(RetrievalQueryT&& value) { m_retrievalQueryHasBeenSet = true; m_retrievalQuery = std::forward<RetrievalQueryT>(value); }
    template<typename RetrievalQueryT = KnowledgeBaseQuery>
    RetrieveRequest& WithRetrievalQuery(RetrievalQueryT&& value) { SetRetrievalQuery(std::forward<RetrievalQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for the knowledge base query and retrieval process.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetRetrievalConfiguration() const { return m_retrievalConfiguration; }
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }
    template<typename RetrievalConfigurationT = KnowledgeBaseRetrievalConfiguration>
    void SetRetrievalConfiguration(RetrievalConfigurationT&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::forward<RetrievalConfigurationT>(value); }
    template<typename RetrievalConfigurationT = KnowledgeBaseRetrievalConfiguration>
    RetrieveRequest& WithRetrievalConfiguration(RetrievalConfigurationT&& value) { SetRetrievalConfiguration(std::forward<RetrievalConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Guardrail settings.</p>
     */
    inline const GuardrailConfiguration& GetGuardrailConfiguration() const { return m_guardrailConfiguration; }
    inline bool GuardrailConfigurationHasBeenSet() const { return m_guardrailConfigurationHasBeenSet; }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    void SetGuardrailConfiguration(GuardrailConfigurationT&& value) { m_guardrailConfigurationHasBeenSet = true; m_guardrailConfiguration = std::forward<GuardrailConfigurationT>(value); }
    template<typename GuardrailConfigurationT = GuardrailConfiguration>
    RetrieveRequest& WithGuardrailConfiguration(GuardrailConfigurationT&& value) { SetGuardrailConfiguration(std::forward<GuardrailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there are more results than can fit in the response, the response returns
     * a <code>nextToken</code>. Use this token in the <code>nextToken</code> field of
     * another request to retrieve the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    RetrieveRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    KnowledgeBaseQuery m_retrievalQuery;
    bool m_retrievalQueryHasBeenSet = false;

    KnowledgeBaseRetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;

    GuardrailConfiguration m_guardrailConfiguration;
    bool m_guardrailConfigurationHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
