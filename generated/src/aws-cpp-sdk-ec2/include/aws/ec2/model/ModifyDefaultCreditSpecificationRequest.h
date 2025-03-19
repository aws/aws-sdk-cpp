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
    AWS_EC2_API ModifyDefaultCreditSpecificationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDefaultCreditSpecification"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyDefaultCreditSpecificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family.</p>
     */
    inline UnlimitedSupportedInstanceFamily GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(UnlimitedSupportedInstanceFamily value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline ModifyDefaultCreditSpecificationRequest& WithInstanceFamily(UnlimitedSupportedInstanceFamily value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credit option for CPU usage of the instance family.</p> <p>Valid Values:
     * <code>standard</code> | <code>unlimited</code> </p>
     */
    inline const Aws::String& GetCpuCredits() const { return m_cpuCredits; }
    inline bool CpuCreditsHasBeenSet() const { return m_cpuCreditsHasBeenSet; }
    template<typename CpuCreditsT = Aws::String>
    void SetCpuCredits(CpuCreditsT&& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = std::forward<CpuCreditsT>(value); }
    template<typename CpuCreditsT = Aws::String>
    ModifyDefaultCreditSpecificationRequest& WithCpuCredits(CpuCreditsT&& value) { SetCpuCredits(std::forward<CpuCreditsT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    UnlimitedSupportedInstanceFamily m_instanceFamily{UnlimitedSupportedInstanceFamily::NOT_SET};
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_cpuCredits;
    bool m_cpuCreditsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
