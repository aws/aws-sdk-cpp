/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveSourceRetriever.h>
#include <aws/bedrock-agent-runtime/model/RetrievalContent.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>A result item from an agentic retrieval trace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveTraceResultItem">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveTraceResultItem {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveTraceResultItem() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveTraceResultItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveTraceResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The retrieved content.</p>
   */
  inline const RetrievalContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = RetrievalContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = RetrievalContent>
  AgenticRetrieveTraceResultItem& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata associated with the retrieved item.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::Utils::Document>>
  AgenticRetrieveTraceResultItem& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::Utils::Document>
  AgenticRetrieveTraceResultItem& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source retriever that produced this result.</p>
   */
  inline const AgenticRetrieveSourceRetriever& GetSourceRetriever() const { return m_sourceRetriever; }
  inline bool SourceRetrieverHasBeenSet() const { return m_sourceRetrieverHasBeenSet; }
  template <typename SourceRetrieverT = AgenticRetrieveSourceRetriever>
  void SetSourceRetriever(SourceRetrieverT&& value) {
    m_sourceRetrieverHasBeenSet = true;
    m_sourceRetriever = std::forward<SourceRetrieverT>(value);
  }
  template <typename SourceRetrieverT = AgenticRetrieveSourceRetriever>
  AgenticRetrieveTraceResultItem& WithSourceRetriever(SourceRetrieverT&& value) {
    SetSourceRetriever(std::forward<SourceRetrieverT>(value));
    return *this;
  }
  ///@}
 private:
  RetrievalContent m_content;

  Aws::Map<Aws::String, Aws::Utils::Document> m_metadata;

  AgenticRetrieveSourceRetriever m_sourceRetriever;
  bool m_contentHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_sourceRetrieverHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
