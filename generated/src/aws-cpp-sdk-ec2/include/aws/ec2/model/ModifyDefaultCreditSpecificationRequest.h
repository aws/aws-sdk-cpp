/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/UnlimitedSupportedInstanceFamily.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyDefaultCreditSpecificationRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyDefaultCreditSpecificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDefaultCreditSpecification"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyDefaultCreditSpecificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The instance family.</p>
     */
    inline const UnlimitedSupportedInstanceFamily& GetInstanceFamily() const{ return m_instanceFamily; }

    /**
     * <p>The instance family.</p>
     */
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }

    /**
     * <p>The instance family.</p>
     */
    inline void SetInstanceFamily(const UnlimitedSupportedInstanceFamily& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }

    /**
     * <p>The instance family.</p>
     */
    inline void SetInstanceFamily(UnlimitedSupportedInstanceFamily&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }

    /**
     * <p>The instance family.</p>
     */
    inline ModifyDefaultCreditSpecificationRequest& WithInstanceFamily(const UnlimitedSupportedInstanceFamily& value) { SetInstanceFamily(value); return *this;}

    /**
     * <p>The instance family.</p>
     */
    inline ModifyDefaultCreditSpecificationRequest& WithInstanceFamily(UnlimitedSupportedInstanceFamily&& value) { SetInstanceFamily(std::move(value)); return *this;}


    /**
     * <p>The credit option for CPU usage of the instance family.</p> <p>Valid Values:
     * <code>standard</code> | <code>unlimited</code> </p>
     */
    inline const Aws::String& GetCpuCredits() const{ return m_cpuCredits; }

    /**
     * <p>The credit option for CPU usage of the instance family.</p> <p>Valid Values:
     * <code>standard</code> | <code>unlimited</code> </p>
     */
    inline bool CpuCreditsHasBeenSet() const { return m_cpuCreditsHasBeenSet; }

    /**
     * <p>The credit option for CPU usage of the instance family.</p> <p>Valid Values:
     * <code>standard</code> | <code>unlimited</code> </p>
     */
    inline void SetCpuCredits(const Aws::String& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = value; }

    /**
     * <p>The credit option for CPU usage of the instance family.</p> <p>Valid Values:
     * <code>standard</code> | <code>unlimited</code> </p>
     */
    inline void SetCpuCredits(Aws::String&& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = std::move(value); }

    /**
     * <p>The credit option for CPU usage of the instance family.</p> <p>Valid Values:
     * <code>standard</code> | <code>unlimited</code> </p>
     */
    inline void SetCpuCredits(const char* value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits.assign(value); }

    /**
     * <p>The credit option for CPU usage of the instance family.</p> <p>Valid Values:
     * <code>standard</code> | <code>unlimited</code> </p>
     */
    inline ModifyDefaultCreditSpecificationRequest& WithCpuCredits(const Aws::String& value) { SetCpuCredits(value); return *this;}

    /**
     * <p>The credit option for CPU usage of the instance family.</p> <p>Valid Values:
     * <code>standard</code> | <code>unlimited</code> </p>
     */
    inline ModifyDefaultCreditSpecificationRequest& WithCpuCredits(Aws::String&& value) { SetCpuCredits(std::move(value)); return *this;}

    /**
     * <p>The credit option for CPU usage of the instance family.</p> <p>Valid Values:
     * <code>standard</code> | <code>unlimited</code> </p>
     */
    inline ModifyDefaultCreditSpecificationRequest& WithCpuCredits(const char* value) { SetCpuCredits(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    UnlimitedSupportedInstanceFamily m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_cpuCredits;
    bool m_cpuCreditsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
