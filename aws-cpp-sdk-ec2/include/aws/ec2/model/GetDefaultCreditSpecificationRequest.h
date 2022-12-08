/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/UnlimitedSupportedInstanceFamily.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetDefaultCreditSpecificationRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetDefaultCreditSpecificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDefaultCreditSpecification"; }

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
    inline GetDefaultCreditSpecificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline GetDefaultCreditSpecificationRequest& WithInstanceFamily(const UnlimitedSupportedInstanceFamily& value) { SetInstanceFamily(value); return *this;}

    /**
     * <p>The instance family.</p>
     */
    inline GetDefaultCreditSpecificationRequest& WithInstanceFamily(UnlimitedSupportedInstanceFamily&& value) { SetInstanceFamily(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    UnlimitedSupportedInstanceFamily m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
