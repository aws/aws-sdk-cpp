/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/ProgrammingLanguage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore/model/InputContentBlock.h>
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
   * <p>The collection of arguments that specify the operation to perform and its
   * parameters when invoking a tool in Amazon Bedrock. Different tools require
   * different arguments, and this structure provides a flexible way to pass the
   * appropriate arguments to each tool type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ToolArguments">AWS
   * API Reference</a></p>
   */
  class ToolArguments
  {
  public:
    AWS_BEDROCKAGENTCORE_API ToolArguments() = default;
    AWS_BEDROCKAGENTCORE_API ToolArguments(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API ToolArguments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code to execute in a code interpreter session. This is the source code in
     * the specified programming language that will be executed by the code
     * interpreter.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    ToolArguments& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The programming language of the code to execute. This tells the code
     * interpreter which language runtime to use for execution. Common values include
     * 'python', 'javascript', and 'r'.</p>
     */
    inline ProgrammingLanguage GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(ProgrammingLanguage value) { m_languageHasBeenSet = true; m_language = value; }
    inline ToolArguments& WithLanguage(ProgrammingLanguage value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to clear the context for the tool.</p>
     */
    inline bool GetClearContext() const { return m_clearContext; }
    inline bool ClearContextHasBeenSet() const { return m_clearContextHasBeenSet; }
    inline void SetClearContext(bool value) { m_clearContextHasBeenSet = true; m_clearContext = value; }
    inline ToolArguments& WithClearContext(bool value) { SetClearContext(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command to execute with the tool.</p>
     */
    inline const Aws::String& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::String>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::String>
    ToolArguments& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path for the tool operation.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    ToolArguments& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paths for the tool operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const { return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    template<typename PathsT = Aws::Vector<Aws::String>>
    void SetPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths = std::forward<PathsT>(value); }
    template<typename PathsT = Aws::Vector<Aws::String>>
    ToolArguments& WithPaths(PathsT&& value) { SetPaths(std::forward<PathsT>(value)); return *this;}
    template<typename PathsT = Aws::String>
    ToolArguments& AddPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths.emplace_back(std::forward<PathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The content for the tool operation.</p>
     */
    inline const Aws::Vector<InputContentBlock>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<InputContentBlock>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<InputContentBlock>>
    ToolArguments& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = InputContentBlock>
    ToolArguments& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The directory path for the tool operation.</p>
     */
    inline const Aws::String& GetDirectoryPath() const { return m_directoryPath; }
    inline bool DirectoryPathHasBeenSet() const { return m_directoryPathHasBeenSet; }
    template<typename DirectoryPathT = Aws::String>
    void SetDirectoryPath(DirectoryPathT&& value) { m_directoryPathHasBeenSet = true; m_directoryPath = std::forward<DirectoryPathT>(value); }
    template<typename DirectoryPathT = Aws::String>
    ToolArguments& WithDirectoryPath(DirectoryPathT&& value) { SetDirectoryPath(std::forward<DirectoryPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the task for the tool operation.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    ToolArguments& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    ProgrammingLanguage m_language{ProgrammingLanguage::NOT_SET};
    bool m_languageHasBeenSet = false;

    bool m_clearContext{false};
    bool m_clearContextHasBeenSet = false;

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    Aws::Vector<InputContentBlock> m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_directoryPath;
    bool m_directoryPathHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
