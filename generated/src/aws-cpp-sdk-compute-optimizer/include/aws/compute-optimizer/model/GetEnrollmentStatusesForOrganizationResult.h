/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/AccountEnrollmentStatus.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class GetEnrollmentStatusesForOrganizationResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusesForOrganizationResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the enrollment statuses of organization
     * member accounts.</p>
     */
    inline const Aws::Vector<AccountEnrollmentStatus>& GetAccountEnrollmentStatuses() const { return m_accountEnrollmentStatuses; }
    template<typename AccountEnrollmentStatusesT = Aws::Vector<AccountEnrollmentStatus>>
    void SetAccountEnrollmentStatuses(AccountEnrollmentStatusesT&& value) { m_accountEnrollmentStatusesHasBeenSet = true; m_accountEnrollmentStatuses = std::forward<AccountEnrollmentStatusesT>(value); }
    template<typename AccountEnrollmentStatusesT = Aws::Vector<AccountEnrollmentStatus>>
    GetEnrollmentStatusesForOrganizationResult& WithAccountEnrollmentStatuses(AccountEnrollmentStatusesT&& value) { SetAccountEnrollmentStatuses(std::forward<AccountEnrollmentStatusesT>(value)); return *this;}
    template<typename AccountEnrollmentStatusesT = AccountEnrollmentStatus>
    GetEnrollmentStatusesForOrganizationResult& AddAccountEnrollmentStatuses(AccountEnrollmentStatusesT&& value) { m_accountEnrollmentStatusesHasBeenSet = true; m_accountEnrollmentStatuses.emplace_back(std::forward<AccountEnrollmentStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to advance to the next page of account enrollment
     * statuses.</p> <p>This value is null when there are no more pages of account
     * enrollment statuses to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEnrollmentStatusesForOrganizationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEnrollmentStatusesForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountEnrollmentStatus> m_accountEnrollmentStatuses;
    bool m_accountEnrollmentStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
