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
  class UpdateEnrollmentStatusRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API UpdateEnrollmentStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnrollmentStatus"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The new enrollment status of the account.</p> <p>The following status options
     * are available:</p> <ul> <li> <p> <code>Active</code> - Opts in your account to
     * the Compute Optimizer service. Compute Optimizer begins analyzing the
     * configuration and utilization metrics of your Amazon Web Services resources
     * after you opt in. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html">Metrics
     * analyzed by Compute Optimizer</a> in the <i>Compute Optimizer User
     * Guide</i>.</p> </li> <li> <p> <code>Inactive</code> - Opts out your account from
     * the Compute Optimizer service. Your account's recommendations and related
     * metrics data will be deleted from Compute Optimizer after you opt out.</p> </li>
     * </ul>  <p>The <code>Pending</code> and <code>Failed</code> options cannot
     * be used to update the enrollment status of an account. They are returned in the
     * response of a request to update the enrollment status of an account.</p> 
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The new enrollment status of the account.</p> <p>The following status options
     * are available:</p> <ul> <li> <p> <code>Active</code> - Opts in your account to
     * the Compute Optimizer service. Compute Optimizer begins analyzing the
     * configuration and utilization metrics of your Amazon Web Services resources
     * after you opt in. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html">Metrics
     * analyzed by Compute Optimizer</a> in the <i>Compute Optimizer User
     * Guide</i>.</p> </li> <li> <p> <code>Inactive</code> - Opts out your account from
     * the Compute Optimizer service. Your account's recommendations and related
     * metrics data will be deleted from Compute Optimizer after you opt out.</p> </li>
     * </ul>  <p>The <code>Pending</code> and <code>Failed</code> options cannot
     * be used to update the enrollment status of an account. They are returned in the
     * response of a request to update the enrollment status of an account.</p> 
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The new enrollment status of the account.</p> <p>The following status options
     * are available:</p> <ul> <li> <p> <code>Active</code> - Opts in your account to
     * the Compute Optimizer service. Compute Optimizer begins analyzing the
     * configuration and utilization metrics of your Amazon Web Services resources
     * after you opt in. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html">Metrics
     * analyzed by Compute Optimizer</a> in the <i>Compute Optimizer User
     * Guide</i>.</p> </li> <li> <p> <code>Inactive</code> - Opts out your account from
     * the Compute Optimizer service. Your account's recommendations and related
     * metrics data will be deleted from Compute Optimizer after you opt out.</p> </li>
     * </ul>  <p>The <code>Pending</code> and <code>Failed</code> options cannot
     * be used to update the enrollment status of an account. They are returned in the
     * response of a request to update the enrollment status of an account.</p> 
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The new enrollment status of the account.</p> <p>The following status options
     * are available:</p> <ul> <li> <p> <code>Active</code> - Opts in your account to
     * the Compute Optimizer service. Compute Optimizer begins analyzing the
     * configuration and utilization metrics of your Amazon Web Services resources
     * after you opt in. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html">Metrics
     * analyzed by Compute Optimizer</a> in the <i>Compute Optimizer User
     * Guide</i>.</p> </li> <li> <p> <code>Inactive</code> - Opts out your account from
     * the Compute Optimizer service. Your account's recommendations and related
     * metrics data will be deleted from Compute Optimizer after you opt out.</p> </li>
     * </ul>  <p>The <code>Pending</code> and <code>Failed</code> options cannot
     * be used to update the enrollment status of an account. They are returned in the
     * response of a request to update the enrollment status of an account.</p> 
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The new enrollment status of the account.</p> <p>The following status options
     * are available:</p> <ul> <li> <p> <code>Active</code> - Opts in your account to
     * the Compute Optimizer service. Compute Optimizer begins analyzing the
     * configuration and utilization metrics of your Amazon Web Services resources
     * after you opt in. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html">Metrics
     * analyzed by Compute Optimizer</a> in the <i>Compute Optimizer User
     * Guide</i>.</p> </li> <li> <p> <code>Inactive</code> - Opts out your account from
     * the Compute Optimizer service. Your account's recommendations and related
     * metrics data will be deleted from Compute Optimizer after you opt out.</p> </li>
     * </ul>  <p>The <code>Pending</code> and <code>Failed</code> options cannot
     * be used to update the enrollment status of an account. They are returned in the
     * response of a request to update the enrollment status of an account.</p> 
     */
    inline UpdateEnrollmentStatusRequest& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The new enrollment status of the account.</p> <p>The following status options
     * are available:</p> <ul> <li> <p> <code>Active</code> - Opts in your account to
     * the Compute Optimizer service. Compute Optimizer begins analyzing the
     * configuration and utilization metrics of your Amazon Web Services resources
     * after you opt in. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html">Metrics
     * analyzed by Compute Optimizer</a> in the <i>Compute Optimizer User
     * Guide</i>.</p> </li> <li> <p> <code>Inactive</code> - Opts out your account from
     * the Compute Optimizer service. Your account's recommendations and related
     * metrics data will be deleted from Compute Optimizer after you opt out.</p> </li>
     * </ul>  <p>The <code>Pending</code> and <code>Failed</code> options cannot
     * be used to update the enrollment status of an account. They are returned in the
     * response of a request to update the enrollment status of an account.</p> 
     */
    inline UpdateEnrollmentStatusRequest& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to enroll member accounts of the organization if the
     * account is the management account of an organization.</p>
     */
    inline bool GetIncludeMemberAccounts() const{ return m_includeMemberAccounts; }

    /**
     * <p>Indicates whether to enroll member accounts of the organization if the
     * account is the management account of an organization.</p>
     */
    inline bool IncludeMemberAccountsHasBeenSet() const { return m_includeMemberAccountsHasBeenSet; }

    /**
     * <p>Indicates whether to enroll member accounts of the organization if the
     * account is the management account of an organization.</p>
     */
    inline void SetIncludeMemberAccounts(bool value) { m_includeMemberAccountsHasBeenSet = true; m_includeMemberAccounts = value; }

    /**
     * <p>Indicates whether to enroll member accounts of the organization if the
     * account is the management account of an organization.</p>
     */
    inline UpdateEnrollmentStatusRequest& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}

  private:

    Status m_status;
    bool m_statusHasBeenSet = false;

    bool m_includeMemberAccounts;
    bool m_includeMemberAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
