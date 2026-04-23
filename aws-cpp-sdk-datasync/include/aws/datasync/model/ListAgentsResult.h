/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/AgentListEntry.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>ListAgentsResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListAgentsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API ListAgentsResult
  {
  public:
    ListAgentsResult();
    ListAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of agents in your account.</p>
     */
    inline const Aws::Vector<AgentListEntry>& GetAgents() const{ return m_agents; }

    /**
     * <p>A list of agents in your account.</p>
     */
    inline void SetAgents(const Aws::Vector<AgentListEntry>& value) { m_agents = value; }

    /**
     * <p>A list of agents in your account.</p>
     */
    inline void SetAgents(Aws::Vector<AgentListEntry>&& value) { m_agents = std::move(value); }

    /**
     * <p>A list of agents in your account.</p>
     */
    inline ListAgentsResult& WithAgents(const Aws::Vector<AgentListEntry>& value) { SetAgents(value); return *this;}

    /**
     * <p>A list of agents in your account.</p>
     */
    inline ListAgentsResult& WithAgents(Aws::Vector<AgentListEntry>&& value) { SetAgents(std::move(value)); return *this;}

    /**
     * <p>A list of agents in your account.</p>
     */
    inline ListAgentsResult& AddAgents(const AgentListEntry& value) { m_agents.push_back(value); return *this; }

    /**
     * <p>A list of agents in your account.</p>
     */
    inline ListAgentsResult& AddAgents(AgentListEntry&& value) { m_agents.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of agents.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of agents.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of agents.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of agents.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of agents.</p>
     */
    inline ListAgentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of agents.</p>
     */
    inline ListAgentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of agents.</p>
     */
    inline ListAgentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AgentListEntry> m_agents;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
