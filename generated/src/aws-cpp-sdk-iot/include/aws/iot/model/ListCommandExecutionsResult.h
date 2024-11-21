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
    AWS_IOT_API ListCommandExecutionsResult();
    AWS_IOT_API ListCommandExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListCommandExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of command executions.</p>
     */
    inline const Aws::Vector<CommandExecutionSummary>& GetCommandExecutions() const{ return m_commandExecutions; }
    inline void SetCommandExecutions(const Aws::Vector<CommandExecutionSummary>& value) { m_commandExecutions = value; }
    inline void SetCommandExecutions(Aws::Vector<CommandExecutionSummary>&& value) { m_commandExecutions = std::move(value); }
    inline ListCommandExecutionsResult& WithCommandExecutions(const Aws::Vector<CommandExecutionSummary>& value) { SetCommandExecutions(value); return *this;}
    inline ListCommandExecutionsResult& WithCommandExecutions(Aws::Vector<CommandExecutionSummary>&& value) { SetCommandExecutions(std::move(value)); return *this;}
    inline ListCommandExecutionsResult& AddCommandExecutions(const CommandExecutionSummary& value) { m_commandExecutions.push_back(value); return *this; }
    inline ListCommandExecutionsResult& AddCommandExecutions(CommandExecutionSummary&& value) { m_commandExecutions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCommandExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCommandExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCommandExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCommandExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCommandExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCommandExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CommandExecutionSummary> m_commandExecutions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
