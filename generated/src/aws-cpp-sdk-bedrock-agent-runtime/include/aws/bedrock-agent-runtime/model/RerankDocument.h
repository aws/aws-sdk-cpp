/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/bedrock-agent-runtime/model/RerankTextDocument.h>
#include <aws/bedrock-agent-runtime/model/RerankDocumentType.h>
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
   * <p>Contains information about a document to rerank. Choose the <code>type</code>
   * to define and include the field that corresponds to the type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RerankDocument">AWS
   * API Reference</a></p>
   */
  class RerankDocument
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RerankDocument() = default;
    AWS_BEDROCKAGENTRUNTIME_API RerankDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RerankDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains a JSON document to rerank.</p>
     */
    inline Aws::Utils::DocumentView GetJsonDocument() const { return m_jsonDocument; }
    inline bool JsonDocumentHasBeenSet() const { return m_jsonDocumentHasBeenSet; }
    template<typename JsonDocumentT = Aws::Utils::Document>
    void SetJsonDocument(JsonDocumentT&& value) { m_jsonDocumentHasBeenSet = true; m_jsonDocument = std::forward<JsonDocumentT>(value); }
    template<typename JsonDocumentT = Aws::Utils::Document>
    RerankDocument& WithJsonDocument(JsonDocumentT&& value) { SetJsonDocument(std::forward<JsonDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about a text document to rerank.</p>
     */
    inline const RerankTextDocument& GetTextDocument() const { return m_textDocument; }
    inline bool TextDocumentHasBeenSet() const { return m_textDocumentHasBeenSet; }
    template<typename TextDocumentT = RerankTextDocument>
    void SetTextDocument(TextDocumentT&& value) { m_textDocumentHasBeenSet = true; m_textDocument = std::forward<TextDocumentT>(value); }
    template<typename TextDocumentT = RerankTextDocument>
    RerankDocument& WithTextDocument(TextDocumentT&& value) { SetTextDocument(std::forward<TextDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of document to rerank.</p>
     */
    inline RerankDocumentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RerankDocumentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RerankDocument& WithType(RerankDocumentType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_jsonDocument;
    bool m_jsonDocumentHasBeenSet = false;

    RerankTextDocument m_textDocument;
    bool m_textDocumentHasBeenSet = false;

    RerankDocumentType m_type{RerankDocumentType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
