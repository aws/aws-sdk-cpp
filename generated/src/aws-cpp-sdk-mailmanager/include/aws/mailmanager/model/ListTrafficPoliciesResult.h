/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/TrafficPolicy.h>
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
namespace MailManager
{
namespace Model
{
  class ListTrafficPoliciesResult
  {
  public:
    AWS_MAILMANAGER_API ListTrafficPoliciesResult();
    AWS_MAILMANAGER_API ListTrafficPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListTrafficPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTrafficPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrafficPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrafficPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of traffic policies.</p>
     */
    inline const Aws::Vector<TrafficPolicy>& GetTrafficPolicies() const{ return m_trafficPolicies; }
    inline void SetTrafficPolicies(const Aws::Vector<TrafficPolicy>& value) { m_trafficPolicies = value; }
    inline void SetTrafficPolicies(Aws::Vector<TrafficPolicy>&& value) { m_trafficPolicies = std::move(value); }
    inline ListTrafficPoliciesResult& WithTrafficPolicies(const Aws::Vector<TrafficPolicy>& value) { SetTrafficPolicies(value); return *this;}
    inline ListTrafficPoliciesResult& WithTrafficPolicies(Aws::Vector<TrafficPolicy>&& value) { SetTrafficPolicies(std::move(value)); return *this;}
    inline ListTrafficPoliciesResult& AddTrafficPolicies(const TrafficPolicy& value) { m_trafficPolicies.push_back(value); return *this; }
    inline ListTrafficPoliciesResult& AddTrafficPolicies(TrafficPolicy&& value) { m_trafficPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTrafficPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTrafficPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTrafficPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<TrafficPolicy> m_trafficPolicies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
