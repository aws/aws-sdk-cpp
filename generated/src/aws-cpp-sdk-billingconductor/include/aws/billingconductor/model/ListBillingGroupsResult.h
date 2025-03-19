/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingGroupListElement.h>
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
namespace BillingConductor
{
namespace Model
{
  class ListBillingGroupsResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsResult() = default;
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>BillingGroupListElement</code> retrieved. </p>
     */
    inline const Aws::Vector<BillingGroupListElement>& GetBillingGroups() const { return m_billingGroups; }
    template<typename BillingGroupsT = Aws::Vector<BillingGroupListElement>>
    void SetBillingGroups(BillingGroupsT&& value) { m_billingGroupsHasBeenSet = true; m_billingGroups = std::forward<BillingGroupsT>(value); }
    template<typename BillingGroupsT = Aws::Vector<BillingGroupListElement>>
    ListBillingGroupsResult& WithBillingGroups(BillingGroupsT&& value) { SetBillingGroups(std::forward<BillingGroupsT>(value)); return *this;}
    template<typename BillingGroupsT = BillingGroupListElement>
    ListBillingGroupsResult& AddBillingGroups(BillingGroupsT&& value) { m_billingGroupsHasBeenSet = true; m_billingGroups.emplace_back(std::forward<BillingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBillingGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBillingGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BillingGroupListElement> m_billingGroups;
    bool m_billingGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
