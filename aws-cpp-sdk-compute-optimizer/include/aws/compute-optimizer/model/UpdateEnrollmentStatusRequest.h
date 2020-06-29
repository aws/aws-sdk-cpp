/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/compute-optimizer/model/Status.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class AWS_COMPUTEOPTIMIZER_API UpdateEnrollmentStatusRequest : public ComputeOptimizerRequest
  {
  public:
    UpdateEnrollmentStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnrollmentStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The new enrollment status of the account.</p> <p>Accepted options are
     * <code>Active</code> or <code>Inactive</code>. You will get an error if
     * <code>Pending</code> or <code>Failed</code> are specified.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The new enrollment status of the account.</p> <p>Accepted options are
     * <code>Active</code> or <code>Inactive</code>. You will get an error if
     * <code>Pending</code> or <code>Failed</code> are specified.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The new enrollment status of the account.</p> <p>Accepted options are
     * <code>Active</code> or <code>Inactive</code>. You will get an error if
     * <code>Pending</code> or <code>Failed</code> are specified.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The new enrollment status of the account.</p> <p>Accepted options are
     * <code>Active</code> or <code>Inactive</code>. You will get an error if
     * <code>Pending</code> or <code>Failed</code> are specified.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The new enrollment status of the account.</p> <p>Accepted options are
     * <code>Active</code> or <code>Inactive</code>. You will get an error if
     * <code>Pending</code> or <code>Failed</code> are specified.</p>
     */
    inline UpdateEnrollmentStatusRequest& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The new enrollment status of the account.</p> <p>Accepted options are
     * <code>Active</code> or <code>Inactive</code>. You will get an error if
     * <code>Pending</code> or <code>Failed</code> are specified.</p>
     */
    inline UpdateEnrollmentStatusRequest& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to enroll member accounts of the organization if the your
     * account is the master account of an organization.</p>
     */
    inline bool GetIncludeMemberAccounts() const{ return m_includeMemberAccounts; }

    /**
     * <p>Indicates whether to enroll member accounts of the organization if the your
     * account is the master account of an organization.</p>
     */
    inline bool IncludeMemberAccountsHasBeenSet() const { return m_includeMemberAccountsHasBeenSet; }

    /**
     * <p>Indicates whether to enroll member accounts of the organization if the your
     * account is the master account of an organization.</p>
     */
    inline void SetIncludeMemberAccounts(bool value) { m_includeMemberAccountsHasBeenSet = true; m_includeMemberAccounts = value; }

    /**
     * <p>Indicates whether to enroll member accounts of the organization if the your
     * account is the master account of an organization.</p>
     */
    inline UpdateEnrollmentStatusRequest& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}

  private:

    Status m_status;
    bool m_statusHasBeenSet;

    bool m_includeMemberAccounts;
    bool m_includeMemberAccountsHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
