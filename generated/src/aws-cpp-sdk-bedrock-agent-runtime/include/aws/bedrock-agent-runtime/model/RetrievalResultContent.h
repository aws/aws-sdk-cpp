/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultContentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultContentColumn.h>
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
   * <p>Contains information about a chunk of text from a data source in the
   * knowledge base. If the result is from a structured data source, the cell in the
   * database and the type of the value is also identified.</p> <p>This data type is
   * used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_ResponseSyntax">Retrieve
   * response</a> – in the <code>content</code> field</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_ResponseSyntax">RetrieveAndGenerate
   * response</a> – in the <code>content</code> field</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> – in the <code>content</code> field</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalResultContent">AWS
   * API Reference</a></p>
   */
  class RetrievalResultContent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContent() = default;
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of content in the retrieval result.</p>
     */
    inline RetrievalResultContentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RetrievalResultContentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RetrievalResultContent& WithType(RetrievalResultContentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cited text from the data source.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    RetrievalResultContent& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A data URI with base64-encoded content from the data source. The URI is in
     * the following format: returned in the following format:
     * <code>data:image/jpeg;base64,${base64-encoded string}</code>.</p>
     */
    inline const Aws::String& GetByteContent() const { return m_byteContent; }
    inline bool ByteContentHasBeenSet() const { return m_byteContentHasBeenSet; }
    template<typename ByteContentT = Aws::String>
    void SetByteContent(ByteContentT&& value) { m_byteContentHasBeenSet = true; m_byteContent = std::forward<ByteContentT>(value); }
    template<typename ByteContentT = Aws::String>
    RetrievalResultContent& WithByteContent(ByteContentT&& value) { SetByteContent(std::forward<ByteContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the rows with the cells to return in
     * retrieval.</p>
     */
    inline const Aws::Vector<RetrievalResultContentColumn>& GetRow() const { return m_row; }
    inline bool RowHasBeenSet() const { return m_rowHasBeenSet; }
    template<typename RowT = Aws::Vector<RetrievalResultContentColumn>>
    void SetRow(RowT&& value) { m_rowHasBeenSet = true; m_row = std::forward<RowT>(value); }
    template<typename RowT = Aws::Vector<RetrievalResultContentColumn>>
    RetrievalResultContent& WithRow(RowT&& value) { SetRow(std::forward<RowT>(value)); return *this;}
    template<typename RowT = RetrievalResultContentColumn>
    RetrievalResultContent& AddRow(RowT&& value) { m_rowHasBeenSet = true; m_row.emplace_back(std::forward<RowT>(value)); return *this; }
    ///@}
  private:

    RetrievalResultContentType m_type{RetrievalResultContentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_byteContent;
    bool m_byteContentHasBeenSet = false;

    Aws::Vector<RetrievalResultContentColumn> m_row;
    bool m_rowHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
