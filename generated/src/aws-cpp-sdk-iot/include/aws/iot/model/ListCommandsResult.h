/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CommandSummary.h>
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
  class ListCommandsResult
  {
  public:
    AWS_IOT_API ListCommandsResult() = default;
    AWS_IOT_API ListCommandsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListCommandsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of commands.</p>
     */
    inline const Aws::Vector<CommandSummary>& GetCommands() const { return m_commands; }
    template<typename CommandsT = Aws::Vector<CommandSummary>>
    void SetCommands(CommandsT&& value) { m_commandsHasBeenSet = true; m_commands = std::forward<CommandsT>(value); }
    template<typename CommandsT = Aws::Vector<CommandSummary>>
    ListCommandsResult& WithCommands(CommandsT&& value) { SetCommands(std::forward<CommandsT>(value)); return *this;}
    template<typename CommandsT = CommandSummary>
    ListCommandsResult& AddCommands(CommandsT&& value) { m_commandsHasBeenSet = true; m_commands.emplace_back(std::forward<CommandsT>(value)); return *this; }
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
    ListCommandsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCommandsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommandSummary> m_commands;
    bool m_commandsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
