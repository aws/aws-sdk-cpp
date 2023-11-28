/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/ActionGroupSummary.h>
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
namespace BedrockAgent
{
namespace Model
{
  /**
   * <p>List Action Groups Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentActionGroupsResponse">AWS
   * API Reference</a></p>
   */
  class ListAgentActionGroupsResult
  {
  public:
    AWS_BEDROCKAGENT_API ListAgentActionGroupsResult();
    AWS_BEDROCKAGENT_API ListAgentActionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListAgentActionGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<ActionGroupSummary>& GetActionGroupSummaries() const{ return m_actionGroupSummaries; }

    
    inline void SetActionGroupSummaries(const Aws::Vector<ActionGroupSummary>& value) { m_actionGroupSummaries = value; }

    
    inline void SetActionGroupSummaries(Aws::Vector<ActionGroupSummary>&& value) { m_actionGroupSummaries = std::move(value); }

    
    inline ListAgentActionGroupsResult& WithActionGroupSummaries(const Aws::Vector<ActionGroupSummary>& value) { SetActionGroupSummaries(value); return *this;}

    
    inline ListAgentActionGroupsResult& WithActionGroupSummaries(Aws::Vector<ActionGroupSummary>&& value) { SetActionGroupSummaries(std::move(value)); return *this;}

    
    inline ListAgentActionGroupsResult& AddActionGroupSummaries(const ActionGroupSummary& value) { m_actionGroupSummaries.push_back(value); return *this; }

    
    inline ListAgentActionGroupsResult& AddActionGroupSummaries(ActionGroupSummary&& value) { m_actionGroupSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListAgentActionGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAgentActionGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAgentActionGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAgentActionGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAgentActionGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAgentActionGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ActionGroupSummary> m_actionGroupSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
