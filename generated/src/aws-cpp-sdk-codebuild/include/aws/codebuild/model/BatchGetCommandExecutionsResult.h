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
  class BatchGetCommandExecutionsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetCommandExecutionsResult() = default;
    AWS_CODEBUILD_API BatchGetCommandExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetCommandExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the requested command executions.</p>
     */
    inline const Aws::Vector<CommandExecution>& GetCommandExecutions() const { return m_commandExecutions; }
    template<typename CommandExecutionsT = Aws::Vector<CommandExecution>>
    void SetCommandExecutions(CommandExecutionsT&& value) { m_commandExecutionsHasBeenSet = true; m_commandExecutions = std::forward<CommandExecutionsT>(value); }
    template<typename CommandExecutionsT = Aws::Vector<CommandExecution>>
    BatchGetCommandExecutionsResult& WithCommandExecutions(CommandExecutionsT&& value) { SetCommandExecutions(std::forward<CommandExecutionsT>(value)); return *this;}
    template<typename CommandExecutionsT = CommandExecution>
    BatchGetCommandExecutionsResult& AddCommandExecutions(CommandExecutionsT&& value) { m_commandExecutionsHasBeenSet = true; m_commandExecutions.emplace_back(std::forward<CommandExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of command executions for which information could not be found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommandExecutionsNotFound() const { return m_commandExecutionsNotFound; }
    template<typename CommandExecutionsNotFoundT = Aws::Vector<Aws::String>>
    void SetCommandExecutionsNotFound(CommandExecutionsNotFoundT&& value) { m_commandExecutionsNotFoundHasBeenSet = true; m_commandExecutionsNotFound = std::forward<CommandExecutionsNotFoundT>(value); }
    template<typename CommandExecutionsNotFoundT = Aws::Vector<Aws::String>>
    BatchGetCommandExecutionsResult& WithCommandExecutionsNotFound(CommandExecutionsNotFoundT&& value) { SetCommandExecutionsNotFound(std::forward<CommandExecutionsNotFoundT>(value)); return *this;}
    template<typename CommandExecutionsNotFoundT = Aws::String>
    BatchGetCommandExecutionsResult& AddCommandExecutionsNotFound(CommandExecutionsNotFoundT&& value) { m_commandExecutionsNotFoundHasBeenSet = true; m_commandExecutionsNotFound.emplace_back(std::forward<CommandExecutionsNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCommandExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommandExecution> m_commandExecutions;
    bool m_commandExecutionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_commandExecutionsNotFound;
    bool m_commandExecutionsNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
