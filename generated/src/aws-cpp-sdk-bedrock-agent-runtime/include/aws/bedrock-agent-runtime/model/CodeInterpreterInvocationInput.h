/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains information about the code interpreter being invoked.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/CodeInterpreterInvocationInput">AWS
   * API Reference</a></p>
   */
  class CodeInterpreterInvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CodeInterpreterInvocationInput() = default;
    AWS_BEDROCKAGENTRUNTIME_API CodeInterpreterInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API CodeInterpreterInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code for the code interpreter to use.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    CodeInterpreterInvocationInput& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Files that are uploaded for code interpreter to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFiles() const { return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    template<typename FilesT = Aws::Vector<Aws::String>>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = Aws::Vector<Aws::String>>
    CodeInterpreterInvocationInput& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    template<typename FilesT = Aws::String>
    CodeInterpreterInvocationInput& AddFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files.emplace_back(std::forward<FilesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::Vector<Aws::String> m_files;
    bool m_filesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
