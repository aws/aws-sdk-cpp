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
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/Status.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusResult
  {
  public:
    GetEnrollmentStatusResult();
    GetEnrollmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEnrollmentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The enrollment status of the account.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline GetEnrollmentStatusResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline GetEnrollmentStatusResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the enrollment status of the account.</p> <p>For example, an
     * account might show a status of <code>Pending</code> because member accounts of
     * an organization require more time to be enrolled in the service.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the enrollment status of the account.</p> <p>For example, an
     * account might show a status of <code>Pending</code> because member accounts of
     * an organization require more time to be enrolled in the service.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The reason for the enrollment status of the account.</p> <p>For example, an
     * account might show a status of <code>Pending</code> because member accounts of
     * an organization require more time to be enrolled in the service.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The reason for the enrollment status of the account.</p> <p>For example, an
     * account might show a status of <code>Pending</code> because member accounts of
     * an organization require more time to be enrolled in the service.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The reason for the enrollment status of the account.</p> <p>For example, an
     * account might show a status of <code>Pending</code> because member accounts of
     * an organization require more time to be enrolled in the service.</p>
     */
    inline GetEnrollmentStatusResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the enrollment status of the account.</p> <p>For example, an
     * account might show a status of <code>Pending</code> because member accounts of
     * an organization require more time to be enrolled in the service.</p>
     */
    inline GetEnrollmentStatusResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the enrollment status of the account.</p> <p>For example, an
     * account might show a status of <code>Pending</code> because member accounts of
     * an organization require more time to be enrolled in the service.</p>
     */
    inline GetEnrollmentStatusResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Confirms the enrollment status of member accounts within the organization, if
     * the account is a master account of an organization.</p>
     */
    inline bool GetMemberAccountsEnrolled() const{ return m_memberAccountsEnrolled; }

    /**
     * <p>Confirms the enrollment status of member accounts within the organization, if
     * the account is a master account of an organization.</p>
     */
    inline void SetMemberAccountsEnrolled(bool value) { m_memberAccountsEnrolled = value; }

    /**
     * <p>Confirms the enrollment status of member accounts within the organization, if
     * the account is a master account of an organization.</p>
     */
    inline GetEnrollmentStatusResult& WithMemberAccountsEnrolled(bool value) { SetMemberAccountsEnrolled(value); return *this;}

  private:

    Status m_status;

    Aws::String m_statusReason;

    bool m_memberAccountsEnrolled;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
