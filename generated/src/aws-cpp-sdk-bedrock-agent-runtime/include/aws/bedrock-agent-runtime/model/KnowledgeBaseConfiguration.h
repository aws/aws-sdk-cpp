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
   * <p>Configurations to apply to a knowledge base attached to the agent during
   * query. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-session-state.html#session-state-kb">Knowledge
   * base retrieval configurations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for a knowledge base attached to the agent.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    KnowledgeBaseConfiguration& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations to apply to the knowledge base during query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline const KnowledgeBaseRetrievalConfiguration& GetRetrievalConfiguration() const { return m_retrievalConfiguration; }
    inline bool RetrievalConfigurationHasBeenSet() const { return m_retrievalConfigurationHasBeenSet; }
    template<typename RetrievalConfigurationT = KnowledgeBaseRetrievalConfiguration>
    void SetRetrievalConfiguration(RetrievalConfigurationT&& value) { m_retrievalConfigurationHasBeenSet = true; m_retrievalConfiguration = std::forward<RetrievalConfigurationT>(value); }
    template<typename RetrievalConfigurationT = KnowledgeBaseRetrievalConfiguration>
    KnowledgeBaseConfiguration& WithRetrievalConfiguration(RetrievalConfigurationT&& value) { SetRetrievalConfiguration(std::forward<RetrievalConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    KnowledgeBaseRetrievalConfiguration m_retrievalConfiguration;
    bool m_retrievalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
