/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InternetGatewayExclusionMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateVpcBlockPublicAccessExclusionRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVpcBlockPublicAccessExclusionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcBlockPublicAccessExclusion"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline CreateVpcBlockPublicAccessExclusionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subnet ID.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline CreateVpcBlockPublicAccessExclusionRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline CreateVpcBlockPublicAccessExclusionRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline CreateVpcBlockPublicAccessExclusionRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline CreateVpcBlockPublicAccessExclusionRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateVpcBlockPublicAccessExclusionRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateVpcBlockPublicAccessExclusionRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusion mode for internet gateway traffic.</p> <ul> <li> <p>
     * <code>allow-bidirectional</code>: Allow all internet traffic to and from the
     * excluded VPCs and subnets.</p> </li> <li> <p> <code>allow-egress</code>: Allow
     * outbound internet traffic from the excluded VPCs and subnets. Block inbound
     * internet traffic to the excluded VPCs and subnets. Only applies when VPC Block
     * Public Access is set to Bidirectional.</p> </li> </ul>
     */
    inline const InternetGatewayExclusionMode& GetInternetGatewayExclusionMode() const{ return m_internetGatewayExclusionMode; }
    inline bool InternetGatewayExclusionModeHasBeenSet() const { return m_internetGatewayExclusionModeHasBeenSet; }
    inline void SetInternetGatewayExclusionMode(const InternetGatewayExclusionMode& value) { m_internetGatewayExclusionModeHasBeenSet = true; m_internetGatewayExclusionMode = value; }
    inline void SetInternetGatewayExclusionMode(InternetGatewayExclusionMode&& value) { m_internetGatewayExclusionModeHasBeenSet = true; m_internetGatewayExclusionMode = std::move(value); }
    inline CreateVpcBlockPublicAccessExclusionRequest& WithInternetGatewayExclusionMode(const InternetGatewayExclusionMode& value) { SetInternetGatewayExclusionMode(value); return *this;}
    inline CreateVpcBlockPublicAccessExclusionRequest& WithInternetGatewayExclusionMode(InternetGatewayExclusionMode&& value) { SetInternetGatewayExclusionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>tag</code> - The key/value combination of a tag assigned to the
     * resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateVpcBlockPublicAccessExclusionRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateVpcBlockPublicAccessExclusionRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateVpcBlockPublicAccessExclusionRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateVpcBlockPublicAccessExclusionRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    InternetGatewayExclusionMode m_internetGatewayExclusionMode;
    bool m_internetGatewayExclusionModeHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
