﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/Metadata.h>
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
   * <p>Contains the JSON-formatted string returned by the API invoked by the code
   * interpreter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/CodeInterpreterInvocationOutput">AWS
   * API Reference</a></p>
   */
  class CodeInterpreterInvocationOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CodeInterpreterInvocationOutput() = default;
    AWS_BEDROCKAGENTRUNTIME_API CodeInterpreterInvocationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API CodeInterpreterInvocationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the error returned from code execution.</p>
     */
    inline const Aws::String& GetExecutionError() const { return m_executionError; }
    inline bool ExecutionErrorHasBeenSet() const { return m_executionErrorHasBeenSet; }
    template<typename ExecutionErrorT = Aws::String>
    void SetExecutionError(ExecutionErrorT&& value) { m_executionErrorHasBeenSet = true; m_executionError = std::forward<ExecutionErrorT>(value); }
    template<typename ExecutionErrorT = Aws::String>
    CodeInterpreterInvocationOutput& WithExecutionError(ExecutionErrorT&& value) { SetExecutionError(std::forward<ExecutionErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the successful output returned from code execution</p>
     */
    inline const Aws::String& GetExecutionOutput() const { return m_executionOutput; }
    inline bool ExecutionOutputHasBeenSet() const { return m_executionOutputHasBeenSet; }
    template<typename ExecutionOutputT = Aws::String>
    void SetExecutionOutput(ExecutionOutputT&& value) { m_executionOutputHasBeenSet = true; m_executionOutput = std::forward<ExecutionOutputT>(value); }
    template<typename ExecutionOutputT = Aws::String>
    CodeInterpreterInvocationOutput& WithExecutionOutput(ExecutionOutputT&& value) { SetExecutionOutput(std::forward<ExecutionOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the execution of the code timed out.</p>
     */
    inline bool GetExecutionTimeout() const { return m_executionTimeout; }
    inline bool ExecutionTimeoutHasBeenSet() const { return m_executionTimeoutHasBeenSet; }
    inline void SetExecutionTimeout(bool value) { m_executionTimeoutHasBeenSet = true; m_executionTimeout = value; }
    inline CodeInterpreterInvocationOutput& WithExecutionTimeout(bool value) { SetExecutionTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains output files, if generated by code execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFiles() const { return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    template<typename FilesT = Aws::Vector<Aws::String>>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = Aws::Vector<Aws::String>>
    CodeInterpreterInvocationOutput& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    template<typename FilesT = Aws::String>
    CodeInterpreterInvocationOutput& AddFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files.emplace_back(std::forward<FilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the output from the code interpreter.</p>
     */
    inline const Metadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Metadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Metadata>
    CodeInterpreterInvocationOutput& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionError;
    bool m_executionErrorHasBeenSet = false;

    Aws::String m_executionOutput;
    bool m_executionOutputHasBeenSet = false;

    bool m_executionTimeout{false};
    bool m_executionTimeoutHasBeenSet = false;

    Aws::Vector<Aws::String> m_files;
    bool m_filesHasBeenSet = false;

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
