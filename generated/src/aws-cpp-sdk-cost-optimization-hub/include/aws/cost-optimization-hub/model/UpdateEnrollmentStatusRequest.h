/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/CostOptimizationHubRequest.h>
#include <aws/cost-optimization-hub/model/EnrollmentStatus.h>
#include <utility>

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

  /**
   */
  class UpdateEnrollmentStatusRequest : public CostOptimizationHubRequest
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API UpdateEnrollmentStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnrollmentStatus"; }

    AWS_COSTOPTIMIZATIONHUB_API Aws::String SerializePayload() const override;

    AWS_COSTOPTIMIZATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Indicates whether to enroll member accounts of the organization if the
     * account is the management account.</p>
     */
    inline bool GetIncludeMemberAccounts() const{ return m_includeMemberAccounts; }

    /**
     * <p>Indicates whether to enroll member accounts of the organization if the
     * account is the management account.</p>
     */
    inline bool IncludeMemberAccountsHasBeenSet() const { return m_includeMemberAccountsHasBeenSet; }

    /**
     * <p>Indicates whether to enroll member accounts of the organization if the
     * account is the management account.</p>
     */
    inline void SetIncludeMemberAccounts(bool value) { m_includeMemberAccountsHasBeenSet = true; m_includeMemberAccounts = value; }

    /**
     * <p>Indicates whether to enroll member accounts of the organization if the
     * account is the management account.</p>
     */
    inline UpdateEnrollmentStatusRequest& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}


    /**
     * <p>Sets the account status.</p>
     */
    inline const EnrollmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Sets the account status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Sets the account status.</p>
     */
    inline void SetStatus(const EnrollmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Sets the account status.</p>
     */
    inline void SetStatus(EnrollmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Sets the account status.</p>
     */
    inline UpdateEnrollmentStatusRequest& WithStatus(const EnrollmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Sets the account status.</p>
     */
    inline UpdateEnrollmentStatusRequest& WithStatus(EnrollmentStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    bool m_includeMemberAccounts;
    bool m_includeMemberAccountsHasBeenSet = false;

    EnrollmentStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
