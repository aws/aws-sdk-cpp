/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CommandExecutionSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListCommandExecutionsResult
  {
  public:
    AWS_IOT_API ListCommandExecutionsResult() = default;
    AWS_IOT_API ListCommandExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListCommandExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of command executions.</p>
     */
    inline const Aws::Vector<CommandExecutionSummary>& GetCommandExecutions() const { return m_commandExecutions; }
    template<typename CommandExecutionsT = Aws::Vector<CommandExecutionSummary>>
    void SetCommandExecutions(CommandExecutionsT&& value) { m_commandExecutionsHasBeenSet = true; m_commandExecutions = std::forward<CommandExecutionsT>(value); }
    template<typename CommandExecutionsT = Aws::Vector<CommandExecutionSummary>>
    ListCommandExecutionsResult& WithCommandExecutions(CommandExecutionsT&& value) { SetCommandExecutions(std::forward<CommandExecutionsT>(value)); return *this;}
    template<typename CommandExecutionsT = CommandExecutionSummary>
    ListCommandExecutionsResult& AddCommandExecutions(CommandExecutionsT&& value) { m_commandExecutionsHasBeenSet = true; m_commandExecutions.emplace_back(std::forward<CommandExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCommandExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCommandExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommandExecutionSummary> m_commandExecutions;
    bool m_commandExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
