/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/RetrievalResultContentType.h>
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
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContent();
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A data URI with base64-encoded content from the data source. The URI is in
     * the following format: returned in the following format:
     * <code>data:image/jpeg;base64,${base64-encoded string}</code>.</p>
     */
    inline const Aws::String& GetByteContent() const{ return m_byteContent; }
    inline bool ByteContentHasBeenSet() const { return m_byteContentHasBeenSet; }
    inline void SetByteContent(const Aws::String& value) { m_byteContentHasBeenSet = true; m_byteContent = value; }
    inline void SetByteContent(Aws::String&& value) { m_byteContentHasBeenSet = true; m_byteContent = std::move(value); }
    inline void SetByteContent(const char* value) { m_byteContentHasBeenSet = true; m_byteContent.assign(value); }
    inline RetrievalResultContent& WithByteContent(const Aws::String& value) { SetByteContent(value); return *this;}
    inline RetrievalResultContent& WithByteContent(Aws::String&& value) { SetByteContent(std::move(value)); return *this;}
    inline RetrievalResultContent& WithByteContent(const char* value) { SetByteContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about the rows with the cells to return in
     * retrieval.</p>
     */
    inline const Aws::Vector<RetrievalResultContentColumn>& GetRow() const{ return m_row; }
    inline bool RowHasBeenSet() const { return m_rowHasBeenSet; }
    inline void SetRow(const Aws::Vector<RetrievalResultContentColumn>& value) { m_rowHasBeenSet = true; m_row = value; }
    inline void SetRow(Aws::Vector<RetrievalResultContentColumn>&& value) { m_rowHasBeenSet = true; m_row = std::move(value); }
    inline RetrievalResultContent& WithRow(const Aws::Vector<RetrievalResultContentColumn>& value) { SetRow(value); return *this;}
    inline RetrievalResultContent& WithRow(Aws::Vector<RetrievalResultContentColumn>&& value) { SetRow(std::move(value)); return *this;}
    inline RetrievalResultContent& AddRow(const RetrievalResultContentColumn& value) { m_rowHasBeenSet = true; m_row.push_back(value); return *this; }
    inline RetrievalResultContent& AddRow(RetrievalResultContentColumn&& value) { m_rowHasBeenSet = true; m_row.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cited text from the data source.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline RetrievalResultContent& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline RetrievalResultContent& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline RetrievalResultContent& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of content in the retrieval result.</p>
     */
    inline const RetrievalResultContentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RetrievalResultContentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RetrievalResultContentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RetrievalResultContent& WithType(const RetrievalResultContentType& value) { SetType(value); return *this;}
    inline RetrievalResultContent& WithType(RetrievalResultContentType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_byteContent;
    bool m_byteContentHasBeenSet = false;

    Aws::Vector<RetrievalResultContentColumn> m_row;
    bool m_rowHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    RetrievalResultContentType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
