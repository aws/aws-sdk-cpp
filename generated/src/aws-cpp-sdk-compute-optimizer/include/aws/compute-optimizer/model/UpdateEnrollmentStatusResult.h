/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateEnrollmentStatusResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API UpdateEnrollmentStatusResult();
    AWS_COMPUTEOPTIMIZER_API UpdateEnrollmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API UpdateEnrollmentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateEnrollmentStatusResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline UpdateEnrollmentStatusResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the enrollment status of the account. For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the enrollment status of the account. For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The reason for the enrollment status of the account. For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The reason for the enrollment status of the account. For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The reason for the enrollment status of the account. For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline UpdateEnrollmentStatusResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the enrollment status of the account. For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline UpdateEnrollmentStatusResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the enrollment status of the account. For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline UpdateEnrollmentStatusResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    Status m_status;

    Aws::String m_statusReason;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
