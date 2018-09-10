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
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/PolicySummary.h>
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
namespace FMS
{
namespace Model
{
  class AWS_FMS_API ListPoliciesResult
  {
  public:
    ListPoliciesResult();
    ListPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>PolicySummary</code> objects.</p>
     */
    inline const Aws::Vector<PolicySummary>& GetPolicyList() const{ return m_policyList; }

    /**
     * <p>An array of <code>PolicySummary</code> objects.</p>
     */
    inline void SetPolicyList(const Aws::Vector<PolicySummary>& value) { m_policyList = value; }

    /**
     * <p>An array of <code>PolicySummary</code> objects.</p>
     */
    inline void SetPolicyList(Aws::Vector<PolicySummary>&& value) { m_policyList = std::move(value); }

    /**
     * <p>An array of <code>PolicySummary</code> objects.</p>
     */
    inline ListPoliciesResult& WithPolicyList(const Aws::Vector<PolicySummary>& value) { SetPolicyList(value); return *this;}

    /**
     * <p>An array of <code>PolicySummary</code> objects.</p>
     */
    inline ListPoliciesResult& WithPolicyList(Aws::Vector<PolicySummary>&& value) { SetPolicyList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>PolicySummary</code> objects.</p>
     */
    inline ListPoliciesResult& AddPolicyList(const PolicySummary& value) { m_policyList.push_back(value); return *this; }

    /**
     * <p>An array of <code>PolicySummary</code> objects.</p>
     */
    inline ListPoliciesResult& AddPolicyList(PolicySummary&& value) { m_policyList.push_back(std::move(value)); return *this; }


    /**
     * <p>If you have more <code>PolicySummary</code> objects than the number that you
     * specified for <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more <code>PolicySummary</code> objects,
     * submit another <code>ListPolicies</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you have more <code>PolicySummary</code> objects than the number that you
     * specified for <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more <code>PolicySummary</code> objects,
     * submit another <code>ListPolicies</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you have more <code>PolicySummary</code> objects than the number that you
     * specified for <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more <code>PolicySummary</code> objects,
     * submit another <code>ListPolicies</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you have more <code>PolicySummary</code> objects than the number that you
     * specified for <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more <code>PolicySummary</code> objects,
     * submit another <code>ListPolicies</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you have more <code>PolicySummary</code> objects than the number that you
     * specified for <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more <code>PolicySummary</code> objects,
     * submit another <code>ListPolicies</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline ListPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you have more <code>PolicySummary</code> objects than the number that you
     * specified for <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more <code>PolicySummary</code> objects,
     * submit another <code>ListPolicies</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline ListPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>PolicySummary</code> objects than the number that you
     * specified for <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more <code>PolicySummary</code> objects,
     * submit another <code>ListPolicies</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline ListPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PolicySummary> m_policyList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
