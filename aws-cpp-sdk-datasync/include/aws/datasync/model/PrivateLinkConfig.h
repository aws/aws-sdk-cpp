/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The VPC endpoint, subnet, and security group that an agent uses to access IP
   * addresses in a VPC (Virtual Private Cloud).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/PrivateLinkConfig">AWS
   * API Reference</a></p>
   */
  class PrivateLinkConfig
  {
  public:
    AWS_DATASYNC_API PrivateLinkConfig();
    AWS_DATASYNC_API PrivateLinkConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API PrivateLinkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the VPC endpoint that is configured for an agent. An agent that is
     * configured with a VPC endpoint will not be accessible over the public
     * internet.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the VPC endpoint that is configured for an agent. An agent that is
     * configured with a VPC endpoint will not be accessible over the public
     * internet.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the VPC endpoint that is configured for an agent. An agent that is
     * configured with a VPC endpoint will not be accessible over the public
     * internet.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the VPC endpoint that is configured for an agent. An agent that is
     * configured with a VPC endpoint will not be accessible over the public
     * internet.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint that is configured for an agent. An agent that is
     * configured with a VPC endpoint will not be accessible over the public
     * internet.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint that is configured for an agent. An agent that is
     * configured with a VPC endpoint will not be accessible over the public
     * internet.</p>
     */
    inline PrivateLinkConfig& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint that is configured for an agent. An agent that is
     * configured with a VPC endpoint will not be accessible over the public
     * internet.</p>
     */
    inline PrivateLinkConfig& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint that is configured for an agent. An agent that is
     * configured with a VPC endpoint will not be accessible over the public
     * internet.</p>
     */
    inline PrivateLinkConfig& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The private endpoint that is configured for an agent that has access to IP
     * addresses in a <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">PrivateLink</a>.
     * An agent that is configured with this endpoint will not be accessible over the
     * public internet.</p>
     */
    inline const Aws::String& GetPrivateLinkEndpoint() const{ return m_privateLinkEndpoint; }

    /**
     * <p>The private endpoint that is configured for an agent that has access to IP
     * addresses in a <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">PrivateLink</a>.
     * An agent that is configured with this endpoint will not be accessible over the
     * public internet.</p>
     */
    inline bool PrivateLinkEndpointHasBeenSet() const { return m_privateLinkEndpointHasBeenSet; }

    /**
     * <p>The private endpoint that is configured for an agent that has access to IP
     * addresses in a <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">PrivateLink</a>.
     * An agent that is configured with this endpoint will not be accessible over the
     * public internet.</p>
     */
    inline void SetPrivateLinkEndpoint(const Aws::String& value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint = value; }

    /**
     * <p>The private endpoint that is configured for an agent that has access to IP
     * addresses in a <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">PrivateLink</a>.
     * An agent that is configured with this endpoint will not be accessible over the
     * public internet.</p>
     */
    inline void SetPrivateLinkEndpoint(Aws::String&& value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint = std::move(value); }

    /**
     * <p>The private endpoint that is configured for an agent that has access to IP
     * addresses in a <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">PrivateLink</a>.
     * An agent that is configured with this endpoint will not be accessible over the
     * public internet.</p>
     */
    inline void SetPrivateLinkEndpoint(const char* value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint.assign(value); }

    /**
     * <p>The private endpoint that is configured for an agent that has access to IP
     * addresses in a <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">PrivateLink</a>.
     * An agent that is configured with this endpoint will not be accessible over the
     * public internet.</p>
     */
    inline PrivateLinkConfig& WithPrivateLinkEndpoint(const Aws::String& value) { SetPrivateLinkEndpoint(value); return *this;}

    /**
     * <p>The private endpoint that is configured for an agent that has access to IP
     * addresses in a <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">PrivateLink</a>.
     * An agent that is configured with this endpoint will not be accessible over the
     * public internet.</p>
     */
    inline PrivateLinkConfig& WithPrivateLinkEndpoint(Aws::String&& value) { SetPrivateLinkEndpoint(std::move(value)); return *this;}

    /**
     * <p>The private endpoint that is configured for an agent that has access to IP
     * addresses in a <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">PrivateLink</a>.
     * An agent that is configured with this endpoint will not be accessible over the
     * public internet.</p>
     */
    inline PrivateLinkConfig& WithPrivateLinkEndpoint(const char* value) { SetPrivateLinkEndpoint(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets that are configured for an
     * agent activated in a VPC or an agent that has access to a VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const{ return m_subnetArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets that are configured for an
     * agent activated in a VPC or an agent that has access to a VPC endpoint.</p>
     */
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets that are configured for an
     * agent activated in a VPC or an agent that has access to a VPC endpoint.</p>
     */
    inline void SetSubnetArns(const Aws::Vector<Aws::String>& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets that are configured for an
     * agent activated in a VPC or an agent that has access to a VPC endpoint.</p>
     */
    inline void SetSubnetArns(Aws::Vector<Aws::String>&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets that are configured for an
     * agent activated in a VPC or an agent that has access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& WithSubnetArns(const Aws::Vector<Aws::String>& value) { SetSubnetArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets that are configured for an
     * agent activated in a VPC or an agent that has access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& WithSubnetArns(Aws::Vector<Aws::String>&& value) { SetSubnetArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets that are configured for an
     * agent activated in a VPC or an agent that has access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& AddSubnetArns(const Aws::String& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets that are configured for an
     * agent activated in a VPC or an agent that has access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& AddSubnetArns(Aws::String&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets that are configured for an
     * agent activated in a VPC or an agent that has access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& AddSubnetArns(const char* value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the EC2 resource that hosts an agent activated in a VPC or an agent that has
     * access to a VPC endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the EC2 resource that hosts an agent activated in a VPC or an agent that has
     * access to a VPC endpoint.</p>
     */
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the EC2 resource that hosts an agent activated in a VPC or an agent that has
     * access to a VPC endpoint.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the EC2 resource that hosts an agent activated in a VPC or an agent that has
     * access to a VPC endpoint.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the EC2 resource that hosts an agent activated in a VPC or an agent that has
     * access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the EC2 resource that hosts an agent activated in a VPC or an agent that has
     * access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the EC2 resource that hosts an agent activated in a VPC or an agent that has
     * access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the EC2 resource that hosts an agent activated in a VPC or an agent that has
     * access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the EC2 resource that hosts an agent activated in a VPC or an agent that has
     * access to a VPC endpoint.</p>
     */
    inline PrivateLinkConfig& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_privateLinkEndpoint;
    bool m_privateLinkEndpointHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetArns;
    bool m_subnetArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
