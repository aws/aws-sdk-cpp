/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/CommandExecution.h>
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
  class ListCommandExecutionsForSandboxResult
  {
  public:
    AWS_CODEBUILD_API ListCommandExecutionsForSandboxResult() = default;
    AWS_CODEBUILD_API ListCommandExecutionsForSandboxResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListCommandExecutionsForSandboxResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the requested command executions.</p>
     */
    inline const Aws::Vector<CommandExecution>& GetCommandExecutions() const { return m_commandExecutions; }
    template<typename CommandExecutionsT = Aws::Vector<CommandExecution>>
    void SetCommandExecutions(CommandExecutionsT&& value) { m_commandExecutionsHasBeenSet = true; m_commandExecutions = std::forward<CommandExecutionsT>(value); }
    template<typename CommandExecutionsT = Aws::Vector<CommandExecution>>
    ListCommandExecutionsForSandboxResult& WithCommandExecutions(CommandExecutionsT&& value) { SetCommandExecutions(std::forward<CommandExecutionsT>(value)); return *this;}
    template<typename CommandExecutionsT = CommandExecution>
    ListCommandExecutionsForSandboxResult& AddCommandExecutions(CommandExecutionsT&& value) { m_commandExecutionsHasBeenSet = true; m_commandExecutions.emplace_back(std::forward<CommandExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the next token to get paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCommandExecutionsForSandboxResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCommandExecutionsForSandboxResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommandExecution> m_commandExecutions;
    bool m_commandExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
