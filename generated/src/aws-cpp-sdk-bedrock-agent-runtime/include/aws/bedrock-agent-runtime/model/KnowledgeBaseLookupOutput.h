/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/Metadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/RetrievedReference.h>
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
   * <p>Contains details about the results from looking up the knowledge
   * base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseLookupOutput">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseLookupOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseLookupOutput() = default;
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseLookupOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseLookupOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the knowledge base output.</p>
     */
    inline const Metadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Metadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Metadata>
    KnowledgeBaseLookupOutput& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains metadata about the sources cited for the generated response.</p>
     */
    inline const Aws::Vector<RetrievedReference>& GetRetrievedReferences() const { return m_retrievedReferences; }
    inline bool RetrievedReferencesHasBeenSet() const { return m_retrievedReferencesHasBeenSet; }
    template<typename RetrievedReferencesT = Aws::Vector<RetrievedReference>>
    void SetRetrievedReferences(RetrievedReferencesT&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences = std::forward<RetrievedReferencesT>(value); }
    template<typename RetrievedReferencesT = Aws::Vector<RetrievedReference>>
    KnowledgeBaseLookupOutput& WithRetrievedReferences(RetrievedReferencesT&& value) { SetRetrievedReferences(std::forward<RetrievedReferencesT>(value)); return *this;}
    template<typename RetrievedReferencesT = RetrievedReference>
    KnowledgeBaseLookupOutput& AddRetrievedReferences(RetrievedReferencesT&& value) { m_retrievedReferencesHasBeenSet = true; m_retrievedReferences.emplace_back(std::forward<RetrievedReferencesT>(value)); return *this; }
    ///@}
  private:

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Vector<RetrievedReference> m_retrievedReferences;
    bool m_retrievedReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
