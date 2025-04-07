/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/CommandExecution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{
  class StartCommandExecutionResult
  {
  public:
    AWS_CODEBUILD_API StartCommandExecutionResult() = default;
    AWS_CODEBUILD_API StartCommandExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API StartCommandExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the requested command executions.</p>
     */
    inline const CommandExecution& GetCommandExecution() const { return m_commandExecution; }
    template<typename CommandExecutionT = CommandExecution>
    void SetCommandExecution(CommandExecutionT&& value) { m_commandExecutionHasBeenSet = true; m_commandExecution = std::forward<CommandExecutionT>(value); }
    template<typename CommandExecutionT = CommandExecution>
    StartCommandExecutionResult& WithCommandExecution(CommandExecutionT&& value) { SetCommandExecution(std::forward<CommandExecutionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartCommandExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CommandExecution m_commandExecution;
    bool m_commandExecutionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
