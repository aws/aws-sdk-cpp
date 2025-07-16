/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore/model/ToolResultStructuredContent.h>
#include <aws/bedrock-agentcore/model/ContentBlock.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>The output produced by executing code in a code interpreter session in Amazon
   * Bedrock. This structure contains the results of code execution, including
   * textual output, structured data, and error information. Agents use these results
   * to generate responses that incorporate computation, data analysis, and
   * visualization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CodeInterpreterResult">AWS
   * API Reference</a></p>
   */
  class CodeInterpreterResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API CodeInterpreterResult() = default;
    AWS_BEDROCKAGENTCORE_API CodeInterpreterResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API CodeInterpreterResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The textual content of the execution result. This includes standard output
     * from the code execution, such as print statements, console output, and text
     * representations of results.</p>
     */
    inline const Aws::Vector<ContentBlock>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<ContentBlock>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<ContentBlock>>
    CodeInterpreterResult& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = ContentBlock>
    CodeInterpreterResult& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The structured content of the execution result. This includes additional
     * metadata about the execution, such as execution time, memory usage, and
     * structured representations of output data. The format depends on the specific
     * code interpreter and execution context.</p>
     */
    inline const ToolResultStructuredContent& GetStructuredContent() const { return m_structuredContent; }
    inline bool StructuredContentHasBeenSet() const { return m_structuredContentHasBeenSet; }
    template<typename StructuredContentT = ToolResultStructuredContent>
    void SetStructuredContent(StructuredContentT&& value) { m_structuredContentHasBeenSet = true; m_structuredContent = std::forward<StructuredContentT>(value); }
    template<typename StructuredContentT = ToolResultStructuredContent>
    CodeInterpreterResult& WithStructuredContent(StructuredContentT&& value) { SetStructuredContent(std::forward<StructuredContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the result represents an error. If true, the content
     * contains error messages or exception information. If false, the content contains
     * successful execution results.</p>
     */
    inline bool GetIsError() const { return m_isError; }
    inline bool IsErrorHasBeenSet() const { return m_isErrorHasBeenSet; }
    inline void SetIsError(bool value) { m_isErrorHasBeenSet = true; m_isError = value; }
    inline CodeInterpreterResult& WithIsError(bool value) { SetIsError(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContentBlock> m_content;
    bool m_contentHasBeenSet = false;

    ToolResultStructuredContent m_structuredContent;
    bool m_structuredContentHasBeenSet = false;

    bool m_isError{false};
    bool m_isErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
