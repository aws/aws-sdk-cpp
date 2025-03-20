/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A summary of the RAG resources used in an Amazon Bedrock Knowledge Base
   * evaluation job. These resources can be Knowledge Bases in Amazon Bedrock or RAG
   * sources outside of Amazon Bedrock that you use to generate your own inference
   * response data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationRagConfigSummary">AWS
   * API Reference</a></p>
   */
  class EvaluationRagConfigSummary
  {
  public:
    AWS_BEDROCK_API EvaluationRagConfigSummary() = default;
    AWS_BEDROCK_API EvaluationRagConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationRagConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Knowledge Base resources used for a
     * Knowledge Base evaluation job where Amazon Bedrock invokes the Knowledge Base
     * for you.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBedrockKnowledgeBaseIdentifiers() const { return m_bedrockKnowledgeBaseIdentifiers; }
    inline bool BedrockKnowledgeBaseIdentifiersHasBeenSet() const { return m_bedrockKnowledgeBaseIdentifiersHasBeenSet; }
    template<typename BedrockKnowledgeBaseIdentifiersT = Aws::Vector<Aws::String>>
    void SetBedrockKnowledgeBaseIdentifiers(BedrockKnowledgeBaseIdentifiersT&& value) { m_bedrockKnowledgeBaseIdentifiersHasBeenSet = true; m_bedrockKnowledgeBaseIdentifiers = std::forward<BedrockKnowledgeBaseIdentifiersT>(value); }
    template<typename BedrockKnowledgeBaseIdentifiersT = Aws::Vector<Aws::String>>
    EvaluationRagConfigSummary& WithBedrockKnowledgeBaseIdentifiers(BedrockKnowledgeBaseIdentifiersT&& value) { SetBedrockKnowledgeBaseIdentifiers(std::forward<BedrockKnowledgeBaseIdentifiersT>(value)); return *this;}
    template<typename BedrockKnowledgeBaseIdentifiersT = Aws::String>
    EvaluationRagConfigSummary& AddBedrockKnowledgeBaseIdentifiers(BedrockKnowledgeBaseIdentifiersT&& value) { m_bedrockKnowledgeBaseIdentifiersHasBeenSet = true; m_bedrockKnowledgeBaseIdentifiers.emplace_back(std::forward<BedrockKnowledgeBaseIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A label that identifies the RAG sources used for a Knowledge Base evaluation
     * job where you provide your own inference response data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrecomputedRagSourceIdentifiers() const { return m_precomputedRagSourceIdentifiers; }
    inline bool PrecomputedRagSourceIdentifiersHasBeenSet() const { return m_precomputedRagSourceIdentifiersHasBeenSet; }
    template<typename PrecomputedRagSourceIdentifiersT = Aws::Vector<Aws::String>>
    void SetPrecomputedRagSourceIdentifiers(PrecomputedRagSourceIdentifiersT&& value) { m_precomputedRagSourceIdentifiersHasBeenSet = true; m_precomputedRagSourceIdentifiers = std::forward<PrecomputedRagSourceIdentifiersT>(value); }
    template<typename PrecomputedRagSourceIdentifiersT = Aws::Vector<Aws::String>>
    EvaluationRagConfigSummary& WithPrecomputedRagSourceIdentifiers(PrecomputedRagSourceIdentifiersT&& value) { SetPrecomputedRagSourceIdentifiers(std::forward<PrecomputedRagSourceIdentifiersT>(value)); return *this;}
    template<typename PrecomputedRagSourceIdentifiersT = Aws::String>
    EvaluationRagConfigSummary& AddPrecomputedRagSourceIdentifiers(PrecomputedRagSourceIdentifiersT&& value) { m_precomputedRagSourceIdentifiersHasBeenSet = true; m_precomputedRagSourceIdentifiers.emplace_back(std::forward<PrecomputedRagSourceIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_bedrockKnowledgeBaseIdentifiers;
    bool m_bedrockKnowledgeBaseIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_precomputedRagSourceIdentifiers;
    bool m_precomputedRagSourceIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
