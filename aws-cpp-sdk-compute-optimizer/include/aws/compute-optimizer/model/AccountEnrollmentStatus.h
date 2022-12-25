/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the enrollment status of an organization's member accounts in
   * Compute Optimizer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/AccountEnrollmentStatus">AWS
   * API Reference</a></p>
   */
  class AccountEnrollmentStatus
  {
  public:
    AWS_COMPUTEOPTIMIZER_API AccountEnrollmentStatus();
    AWS_COMPUTEOPTIMIZER_API AccountEnrollmentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API AccountEnrollmentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline AccountEnrollmentStatus& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline AccountEnrollmentStatus& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline AccountEnrollmentStatus& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The account enrollment status.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The account enrollment status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The account enrollment status.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The account enrollment status.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The account enrollment status.</p>
     */
    inline AccountEnrollmentStatus& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The account enrollment status.</p>
     */
    inline AccountEnrollmentStatus& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the account enrollment status.</p> <p>For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the account enrollment status.</p> <p>For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the account enrollment status.</p> <p>For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the account enrollment status.</p> <p>For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the account enrollment status.</p> <p>For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for the account enrollment status.</p> <p>For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline AccountEnrollmentStatus& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the account enrollment status.</p> <p>For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline AccountEnrollmentStatus& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the account enrollment status.</p> <p>For example, an account
     * might show a status of <code>Pending</code> because member accounts of an
     * organization require more time to be enrolled in the service.</p>
     */
    inline AccountEnrollmentStatus& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The Unix epoch timestamp, in seconds, of when the account enrollment status
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The Unix epoch timestamp, in seconds, of when the account enrollment status
     * was last updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp, in seconds, of when the account enrollment status
     * was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The Unix epoch timestamp, in seconds, of when the account enrollment status
     * was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>The Unix epoch timestamp, in seconds, of when the account enrollment status
     * was last updated.</p>
     */
    inline AccountEnrollmentStatus& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>The Unix epoch timestamp, in seconds, of when the account enrollment status
     * was last updated.</p>
     */
    inline AccountEnrollmentStatus& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
