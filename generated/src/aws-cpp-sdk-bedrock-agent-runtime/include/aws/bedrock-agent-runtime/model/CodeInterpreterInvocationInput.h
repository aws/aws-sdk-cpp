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
    AWS_BEDROCKAGENTRUNTIME_API CodeInterpreterInvocationInput();
    AWS_BEDROCKAGENTRUNTIME_API CodeInterpreterInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API CodeInterpreterInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code for the code interpreter to use.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline CodeInterpreterInvocationInput& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline CodeInterpreterInvocationInput& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline CodeInterpreterInvocationInput& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Files that are uploaded for code interpreter to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFiles() const{ return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    inline void SetFiles(const Aws::Vector<Aws::String>& value) { m_filesHasBeenSet = true; m_files = value; }
    inline void SetFiles(Aws::Vector<Aws::String>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }
    inline CodeInterpreterInvocationInput& WithFiles(const Aws::Vector<Aws::String>& value) { SetFiles(value); return *this;}
    inline CodeInterpreterInvocationInput& WithFiles(Aws::Vector<Aws::String>&& value) { SetFiles(std::move(value)); return *this;}
    inline CodeInterpreterInvocationInput& AddFiles(const Aws::String& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }
    inline CodeInterpreterInvocationInput& AddFiles(Aws::String&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }
    inline CodeInterpreterInvocationInput& AddFiles(const char* value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }
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
