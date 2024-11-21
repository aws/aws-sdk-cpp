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
    AWS_IOT_API ListCommandsResult();
    AWS_IOT_API ListCommandsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListCommandsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of commands.</p>
     */
    inline const Aws::Vector<CommandSummary>& GetCommands() const{ return m_commands; }
    inline void SetCommands(const Aws::Vector<CommandSummary>& value) { m_commands = value; }
    inline void SetCommands(Aws::Vector<CommandSummary>&& value) { m_commands = std::move(value); }
    inline ListCommandsResult& WithCommands(const Aws::Vector<CommandSummary>& value) { SetCommands(value); return *this;}
    inline ListCommandsResult& WithCommands(Aws::Vector<CommandSummary>&& value) { SetCommands(std::move(value)); return *this;}
    inline ListCommandsResult& AddCommands(const CommandSummary& value) { m_commands.push_back(value); return *this; }
    inline ListCommandsResult& AddCommands(CommandSummary&& value) { m_commands.push_back(std::move(value)); return *this; }
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
    inline ListCommandsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCommandsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCommandsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCommandsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCommandsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCommandsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CommandSummary> m_commands;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
