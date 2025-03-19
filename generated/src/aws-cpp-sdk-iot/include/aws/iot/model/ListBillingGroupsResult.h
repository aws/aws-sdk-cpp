/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/GroupNameAndArn.h>
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
  class ListBillingGroupsResult
  {
  public:
    AWS_IOT_API ListBillingGroupsResult() = default;
    AWS_IOT_API ListBillingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListBillingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of billing groups.</p>
     */
    inline const Aws::Vector<GroupNameAndArn>& GetBillingGroups() const { return m_billingGroups; }
    template<typename BillingGroupsT = Aws::Vector<GroupNameAndArn>>
    void SetBillingGroups(BillingGroupsT&& value) { m_billingGroupsHasBeenSet = true; m_billingGroups = std::forward<BillingGroupsT>(value); }
    template<typename BillingGroupsT = Aws::Vector<GroupNameAndArn>>
    ListBillingGroupsResult& WithBillingGroups(BillingGroupsT&& value) { SetBillingGroups(std::forward<BillingGroupsT>(value)); return *this;}
    template<typename BillingGroupsT = GroupNameAndArn>
    ListBillingGroupsResult& AddBillingGroups(BillingGroupsT&& value) { m_billingGroupsHasBeenSet = true; m_billingGroups.emplace_back(std::forward<BillingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
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

    Aws::Vector<GroupNameAndArn> m_billingGroups;
    bool m_billingGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
