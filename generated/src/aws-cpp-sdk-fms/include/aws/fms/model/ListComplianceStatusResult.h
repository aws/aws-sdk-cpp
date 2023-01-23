/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/PolicyComplianceStatus.h>
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
  class ListComplianceStatusResult
  {
  public:
    AWS_FMS_API ListComplianceStatusResult();
    AWS_FMS_API ListComplianceStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListComplianceStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline const Aws::Vector<PolicyComplianceStatus>& GetPolicyComplianceStatusList() const{ return m_policyComplianceStatusList; }

    /**
     * <p>An array of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline void SetPolicyComplianceStatusList(const Aws::Vector<PolicyComplianceStatus>& value) { m_policyComplianceStatusList = value; }

    /**
     * <p>An array of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline void SetPolicyComplianceStatusList(Aws::Vector<PolicyComplianceStatus>&& value) { m_policyComplianceStatusList = std::move(value); }

    /**
     * <p>An array of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline ListComplianceStatusResult& WithPolicyComplianceStatusList(const Aws::Vector<PolicyComplianceStatus>& value) { SetPolicyComplianceStatusList(value); return *this;}

    /**
     * <p>An array of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline ListComplianceStatusResult& WithPolicyComplianceStatusList(Aws::Vector<PolicyComplianceStatus>&& value) { SetPolicyComplianceStatusList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline ListComplianceStatusResult& AddPolicyComplianceStatusList(const PolicyComplianceStatus& value) { m_policyComplianceStatusList.push_back(value); return *this; }

    /**
     * <p>An array of <code>PolicyComplianceStatus</code> objects.</p>
     */
    inline ListComplianceStatusResult& AddPolicyComplianceStatusList(PolicyComplianceStatus&& value) { m_policyComplianceStatusList.push_back(std::move(value)); return *this; }


    /**
     * <p>If you have more <code>PolicyComplianceStatus</code> objects than the number
     * that you specified for <code>MaxResults</code> in the request, the response
     * includes a <code>NextToken</code> value. To list more
     * <code>PolicyComplianceStatus</code> objects, submit another
     * <code>ListComplianceStatus</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you have more <code>PolicyComplianceStatus</code> objects than the number
     * that you specified for <code>MaxResults</code> in the request, the response
     * includes a <code>NextToken</code> value. To list more
     * <code>PolicyComplianceStatus</code> objects, submit another
     * <code>ListComplianceStatus</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you have more <code>PolicyComplianceStatus</code> objects than the number
     * that you specified for <code>MaxResults</code> in the request, the response
     * includes a <code>NextToken</code> value. To list more
     * <code>PolicyComplianceStatus</code> objects, submit another
     * <code>ListComplianceStatus</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you have more <code>PolicyComplianceStatus</code> objects than the number
     * that you specified for <code>MaxResults</code> in the request, the response
     * includes a <code>NextToken</code> value. To list more
     * <code>PolicyComplianceStatus</code> objects, submit another
     * <code>ListComplianceStatus</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you have more <code>PolicyComplianceStatus</code> objects than the number
     * that you specified for <code>MaxResults</code> in the request, the response
     * includes a <code>NextToken</code> value. To list more
     * <code>PolicyComplianceStatus</code> objects, submit another
     * <code>ListComplianceStatus</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline ListComplianceStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you have more <code>PolicyComplianceStatus</code> objects than the number
     * that you specified for <code>MaxResults</code> in the request, the response
     * includes a <code>NextToken</code> value. To list more
     * <code>PolicyComplianceStatus</code> objects, submit another
     * <code>ListComplianceStatus</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline ListComplianceStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>PolicyComplianceStatus</code> objects than the number
     * that you specified for <code>MaxResults</code> in the request, the response
     * includes a <code>NextToken</code> value. To list more
     * <code>PolicyComplianceStatus</code> objects, submit another
     * <code>ListComplianceStatus</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline ListComplianceStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PolicyComplianceStatus> m_policyComplianceStatusList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
