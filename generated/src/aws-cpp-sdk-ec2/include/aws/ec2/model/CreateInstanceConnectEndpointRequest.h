/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateInstanceConnectEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateInstanceConnectEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstanceConnectEndpoint"; }

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
    inline CreateInstanceConnectEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the subnet in which to create the EC2 Instance Connect
     * Endpoint.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet in which to create the EC2 Instance Connect
     * Endpoint.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet in which to create the EC2 Instance Connect
     * Endpoint.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in which to create the EC2 Instance Connect
     * Endpoint.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet in which to create the EC2 Instance Connect
     * Endpoint.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet in which to create the EC2 Instance Connect
     * Endpoint.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in which to create the EC2 Instance Connect
     * Endpoint.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet in which to create the EC2 Instance Connect
     * Endpoint.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline CreateInstanceConnectEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline CreateInstanceConnectEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline CreateInstanceConnectEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Indicates whether your client's IP address is preserved as the source. The
     * value is <code>true</code> or <code>false</code>.</p> <ul> <li> <p>If
     * <code>true</code>, your client's IP address is used when you connect to a
     * resource.</p> </li> <li> <p>If <code>false</code>, the elastic network interface
     * IP address is used when you connect to a resource.</p> </li> </ul> <p>Default:
     * <code>true</code> </p>
     */
    inline bool GetPreserveClientIp() const{ return m_preserveClientIp; }

    /**
     * <p>Indicates whether your client's IP address is preserved as the source. The
     * value is <code>true</code> or <code>false</code>.</p> <ul> <li> <p>If
     * <code>true</code>, your client's IP address is used when you connect to a
     * resource.</p> </li> <li> <p>If <code>false</code>, the elastic network interface
     * IP address is used when you connect to a resource.</p> </li> </ul> <p>Default:
     * <code>true</code> </p>
     */
    inline bool PreserveClientIpHasBeenSet() const { return m_preserveClientIpHasBeenSet; }

    /**
     * <p>Indicates whether your client's IP address is preserved as the source. The
     * value is <code>true</code> or <code>false</code>.</p> <ul> <li> <p>If
     * <code>true</code>, your client's IP address is used when you connect to a
     * resource.</p> </li> <li> <p>If <code>false</code>, the elastic network interface
     * IP address is used when you connect to a resource.</p> </li> </ul> <p>Default:
     * <code>true</code> </p>
     */
    inline void SetPreserveClientIp(bool value) { m_preserveClientIpHasBeenSet = true; m_preserveClientIp = value; }

    /**
     * <p>Indicates whether your client's IP address is preserved as the source. The
     * value is <code>true</code> or <code>false</code>.</p> <ul> <li> <p>If
     * <code>true</code>, your client's IP address is used when you connect to a
     * resource.</p> </li> <li> <p>If <code>false</code>, the elastic network interface
     * IP address is used when you connect to a resource.</p> </li> </ul> <p>Default:
     * <code>true</code> </p>
     */
    inline CreateInstanceConnectEndpointRequest& WithPreserveClientIp(bool value) { SetPreserveClientIp(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags to apply to the EC2 Instance Connect Endpoint during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the EC2 Instance Connect Endpoint during creation.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the EC2 Instance Connect Endpoint during creation.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the EC2 Instance Connect Endpoint during creation.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the EC2 Instance Connect Endpoint during creation.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the EC2 Instance Connect Endpoint during creation.</p>
     */
    inline CreateInstanceConnectEndpointRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the EC2 Instance Connect Endpoint during creation.</p>
     */
    inline CreateInstanceConnectEndpointRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the EC2 Instance Connect Endpoint during creation.</p>
     */
    inline CreateInstanceConnectEndpointRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    bool m_preserveClientIp;
    bool m_preserveClientIpHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
