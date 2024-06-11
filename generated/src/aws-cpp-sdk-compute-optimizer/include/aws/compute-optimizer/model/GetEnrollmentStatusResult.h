﻿/**
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
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusResult();
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The enrollment status of the account.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline GetEnrollmentStatusResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline GetEnrollmentStatusResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the enrollment status of the account.</p> <p>For example, an
     * account might show a status of <code>Pending</code> because member accounts of
     * an organization require more time to be enrolled in the service.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetEnrollmentStatusResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetEnrollmentStatusResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetEnrollmentStatusResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Confirms the enrollment status of member accounts of the organization, if the
     * account is a management account of an organization.</p>
     */
    inline bool GetMemberAccountsEnrolled() const{ return m_memberAccountsEnrolled; }
    inline void SetMemberAccountsEnrolled(bool value) { m_memberAccountsEnrolled = value; }
    inline GetEnrollmentStatusResult& WithMemberAccountsEnrolled(bool value) { SetMemberAccountsEnrolled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp, in seconds, of when the account enrollment status
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }
    inline GetEnrollmentStatusResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline GetEnrollmentStatusResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of organization member accounts that are opted in to the service,
     * if your account is an organization management account.</p>
     */
    inline int GetNumberOfMemberAccountsOptedIn() const{ return m_numberOfMemberAccountsOptedIn; }
    inline void SetNumberOfMemberAccountsOptedIn(int value) { m_numberOfMemberAccountsOptedIn = value; }
    inline GetEnrollmentStatusResult& WithNumberOfMemberAccountsOptedIn(int value) { SetNumberOfMemberAccountsOptedIn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEnrollmentStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEnrollmentStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEnrollmentStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Status m_status;

    Aws::String m_statusReason;

    bool m_memberAccountsEnrolled;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;

    int m_numberOfMemberAccountsOptedIn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
