/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpcTenancy.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpcTenancyRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcTenancyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcTenancy"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline ModifyVpcTenancyRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline ModifyVpcTenancyRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline ModifyVpcTenancyRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance tenancy attribute for the VPC. </p>
     */
    inline const VpcTenancy& GetInstanceTenancy() const{ return m_instanceTenancy; }
    inline bool InstanceTenancyHasBeenSet() const { return m_instanceTenancyHasBeenSet; }
    inline void SetInstanceTenancy(const VpcTenancy& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }
    inline void SetInstanceTenancy(VpcTenancy&& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = std::move(value); }
    inline ModifyVpcTenancyRequest& WithInstanceTenancy(const VpcTenancy& value) { SetInstanceTenancy(value); return *this;}
    inline ModifyVpcTenancyRequest& WithInstanceTenancy(VpcTenancy&& value) { SetInstanceTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVpcTenancyRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    VpcTenancy m_instanceTenancy;
    bool m_instanceTenancyHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
