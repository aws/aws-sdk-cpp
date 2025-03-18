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
    AWS_DATAZONE_API ListPolicyGrantsResult() = default;
    AWS_DATAZONE_API ListPolicyGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListPolicyGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of this action - the listed grants.</p>
     */
    inline const Aws::Vector<PolicyGrantMember>& GetGrantList() const { return m_grantList; }
    template<typename GrantListT = Aws::Vector<PolicyGrantMember>>
    void SetGrantList(GrantListT&& value) { m_grantListHasBeenSet = true; m_grantList = std::forward<GrantListT>(value); }
    template<typename GrantListT = Aws::Vector<PolicyGrantMember>>
    ListPolicyGrantsResult& WithGrantList(GrantListT&& value) { SetGrantList(std::forward<GrantListT>(value)); return *this;}
    template<typename GrantListT = PolicyGrantMember>
    ListPolicyGrantsResult& AddGrantList(GrantListT&& value) { m_grantListHasBeenSet = true; m_grantList.emplace_back(std::forward<GrantListT>(value)); return *this; }
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPolicyGrantsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPolicyGrantsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyGrantMember> m_grantList;
    bool m_grantListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
