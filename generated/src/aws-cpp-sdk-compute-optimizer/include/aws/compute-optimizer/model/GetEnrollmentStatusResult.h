/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/Status.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetEnrollmentStatusResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The enrollment status of the account.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetEnrollmentStatusResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the enrollment status of the account.</p> <p>For example, an
     * account might show a status of <code>Pending</code> because member accounts of
     * an organization require more time to be enrolled in the service.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetEnrollmentStatusResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Confirms the enrollment status of member accounts of the organization, if the
     * account is a management account of an organization.</p>
     */
    inline bool GetMemberAccountsEnrolled() const { return m_memberAccountsEnrolled; }
    inline void SetMemberAccountsEnrolled(bool value) { m_memberAccountsEnrolledHasBeenSet = true; m_memberAccountsEnrolled = value; }
    inline GetEnrollmentStatusResult& WithMemberAccountsEnrolled(bool value) { SetMemberAccountsEnrolled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp, in seconds, of when the account enrollment status
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    GetEnrollmentStatusResult& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of organization member accounts that are opted in to the service,
     * if your account is an organization management account.</p>
     */
    inline int GetNumberOfMemberAccountsOptedIn() const { return m_numberOfMemberAccountsOptedIn; }
    inline void SetNumberOfMemberAccountsOptedIn(int value) { m_numberOfMemberAccountsOptedInHasBeenSet = true; m_numberOfMemberAccountsOptedIn = value; }
    inline GetEnrollmentStatusResult& WithNumberOfMemberAccountsOptedIn(int value) { SetNumberOfMemberAccountsOptedIn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEnrollmentStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    bool m_memberAccountsEnrolled{false};
    bool m_memberAccountsEnrolledHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    int m_numberOfMemberAccountsOptedIn{0};
    bool m_numberOfMemberAccountsOptedInHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
