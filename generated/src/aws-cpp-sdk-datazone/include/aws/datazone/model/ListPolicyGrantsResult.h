/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/PolicyGrantMember.h>
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
namespace DataZone
{
namespace Model
{
  class ListPolicyGrantsResult
  {
  public:
    AWS_DATAZONE_API ListPolicyGrantsResult();
    AWS_DATAZONE_API ListPolicyGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListPolicyGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of this action - the listed grants.</p>
     */
    inline const Aws::Vector<PolicyGrantMember>& GetGrantList() const{ return m_grantList; }
    inline void SetGrantList(const Aws::Vector<PolicyGrantMember>& value) { m_grantList = value; }
    inline void SetGrantList(Aws::Vector<PolicyGrantMember>&& value) { m_grantList = std::move(value); }
    inline ListPolicyGrantsResult& WithGrantList(const Aws::Vector<PolicyGrantMember>& value) { SetGrantList(value); return *this;}
    inline ListPolicyGrantsResult& WithGrantList(Aws::Vector<PolicyGrantMember>&& value) { SetGrantList(std::move(value)); return *this;}
    inline ListPolicyGrantsResult& AddGrantList(const PolicyGrantMember& value) { m_grantList.push_back(value); return *this; }
    inline ListPolicyGrantsResult& AddGrantList(PolicyGrantMember&& value) { m_grantList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of grants is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of grants, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListPolicyGrants</code> to list the next set of grants.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPolicyGrantsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPolicyGrantsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPolicyGrantsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPolicyGrantsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPolicyGrantsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPolicyGrantsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyGrantMember> m_grantList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
