/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/KnowledgeBaseConfig.h>
#include <aws/bedrock/model/EvaluationPrecomputedRagSourceConfig.h>
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
   * <p>Contains configuration details for retrieval of information and response
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RAGConfig">AWS
   * API Reference</a></p>
   */
  class RAGConfig
  {
  public:
    AWS_BEDROCK_API RAGConfig() = default;
    AWS_BEDROCK_API RAGConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RAGConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configuration details for knowledge base retrieval and response
     * generation.</p>
     */
    inline const KnowledgeBaseConfig& GetKnowledgeBaseConfig() const { return m_knowledgeBaseConfig; }
    inline bool KnowledgeBaseConfigHasBeenSet() const { return m_knowledgeBaseConfigHasBeenSet; }
    template<typename KnowledgeBaseConfigT = KnowledgeBaseConfig>
    void SetKnowledgeBaseConfig(KnowledgeBaseConfigT&& value) { m_knowledgeBaseConfigHasBeenSet = true; m_knowledgeBaseConfig = std::forward<KnowledgeBaseConfigT>(value); }
    template<typename KnowledgeBaseConfigT = KnowledgeBaseConfig>
    RAGConfig& WithKnowledgeBaseConfig(KnowledgeBaseConfigT&& value) { SetKnowledgeBaseConfig(std::forward<KnowledgeBaseConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details about the RAG source used to generate
     * inference response data for a Knowledge Base evaluation job.</p>
     */
    inline const EvaluationPrecomputedRagSourceConfig& GetPrecomputedRagSourceConfig() const { return m_precomputedRagSourceConfig; }
    inline bool PrecomputedRagSourceConfigHasBeenSet() const { return m_precomputedRagSourceConfigHasBeenSet; }
    template<typename PrecomputedRagSourceConfigT = EvaluationPrecomputedRagSourceConfig>
    void SetPrecomputedRagSourceConfig(PrecomputedRagSourceConfigT&& value) { m_precomputedRagSourceConfigHasBeenSet = true; m_precomputedRagSourceConfig = std::forward<PrecomputedRagSourceConfigT>(value); }
    template<typename PrecomputedRagSourceConfigT = EvaluationPrecomputedRagSourceConfig>
    RAGConfig& WithPrecomputedRagSourceConfig(PrecomputedRagSourceConfigT&& value) { SetPrecomputedRagSourceConfig(std::forward<PrecomputedRagSourceConfigT>(value)); return *this;}
    ///@}
  private:

    KnowledgeBaseConfig m_knowledgeBaseConfig;
    bool m_knowledgeBaseConfigHasBeenSet = false;

    EvaluationPrecomputedRagSourceConfig m_precomputedRagSourceConfig;
    bool m_precomputedRagSourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
