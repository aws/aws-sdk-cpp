/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/InputImage.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseQueryType.h>
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
 * <p>Contains the query made to the knowledge base.</p> <p>This data type is used
 * in the following API operations:</p> <ul> <li> <p> <a
 * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_RequestSyntax">Retrieve
 * request</a> – in the <code>retrievalQuery</code> field</p> </li> </ul><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseQuery">AWS
 * API Reference</a></p>
 */
class KnowledgeBaseQuery {
 public:
  AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseQuery() = default;
  AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseQuery(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An image to include in the knowledge base query for multimodal retrieval.</p>
   */
  inline const InputImage& GetImage() const { return m_image; }
  inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
  template <typename ImageT = InputImage>
  void SetImage(ImageT&& value) {
    m_imageHasBeenSet = true;
    m_image = std::forward<ImageT>(value);
  }
  template <typename ImageT = InputImage>
  KnowledgeBaseQuery& WithImage(ImageT&& value) {
    SetImage(std::forward<ImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text of the query made to the knowledge base.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  KnowledgeBaseQuery& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of query being performed.</p>
   */
  inline KnowledgeBaseQueryType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(KnowledgeBaseQueryType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline KnowledgeBaseQuery& WithType(KnowledgeBaseQueryType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  InputImage m_image;

  Aws::String m_text;

  KnowledgeBaseQueryType m_type{KnowledgeBaseQueryType::NOT_SET};
  bool m_imageHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
