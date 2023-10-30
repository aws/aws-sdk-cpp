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
   * <p>Specifies how your DataSync agent connects to Amazon Web Services using a <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">virtual
   * private cloud (VPC) service endpoint</a>. An agent that uses a VPC endpoint
   * isn't accessible over the public internet.</p><p><h3>See Also:</h3>   <a
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
     * <p>Specifies the ID of the VPC endpoint that your agent connects to.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>Specifies the ID of the VPC endpoint that your agent connects to.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the VPC endpoint that your agent connects to.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>Specifies the ID of the VPC endpoint that your agent connects to.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>Specifies the ID of the VPC endpoint that your agent connects to.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>Specifies the ID of the VPC endpoint that your agent connects to.</p>
     */
    inline PrivateLinkConfig& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>Specifies the ID of the VPC endpoint that your agent connects to.</p>
     */
    inline PrivateLinkConfig& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the VPC endpoint that your agent connects to.</p>
     */
    inline PrivateLinkConfig& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>Specifies the VPC endpoint provided by <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">Amazon
     * Web Services PrivateLink</a> that your agent connects to.</p>
     */
    inline const Aws::String& GetPrivateLinkEndpoint() const{ return m_privateLinkEndpoint; }

    /**
     * <p>Specifies the VPC endpoint provided by <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">Amazon
     * Web Services PrivateLink</a> that your agent connects to.</p>
     */
    inline bool PrivateLinkEndpointHasBeenSet() const { return m_privateLinkEndpointHasBeenSet; }

    /**
     * <p>Specifies the VPC endpoint provided by <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">Amazon
     * Web Services PrivateLink</a> that your agent connects to.</p>
     */
    inline void SetPrivateLinkEndpoint(const Aws::String& value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint = value; }

    /**
     * <p>Specifies the VPC endpoint provided by <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">Amazon
     * Web Services PrivateLink</a> that your agent connects to.</p>
     */
    inline void SetPrivateLinkEndpoint(Aws::String&& value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint = std::move(value); }

    /**
     * <p>Specifies the VPC endpoint provided by <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">Amazon
     * Web Services PrivateLink</a> that your agent connects to.</p>
     */
    inline void SetPrivateLinkEndpoint(const char* value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint.assign(value); }

    /**
     * <p>Specifies the VPC endpoint provided by <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">Amazon
     * Web Services PrivateLink</a> that your agent connects to.</p>
     */
    inline PrivateLinkConfig& WithPrivateLinkEndpoint(const Aws::String& value) { SetPrivateLinkEndpoint(value); return *this;}

    /**
     * <p>Specifies the VPC endpoint provided by <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">Amazon
     * Web Services PrivateLink</a> that your agent connects to.</p>
     */
    inline PrivateLinkConfig& WithPrivateLinkEndpoint(Aws::String&& value) { SetPrivateLinkEndpoint(std::move(value)); return *this;}

    /**
     * <p>Specifies the VPC endpoint provided by <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html">Amazon
     * Web Services PrivateLink</a> that your agent connects to.</p>
     */
    inline PrivateLinkConfig& WithPrivateLinkEndpoint(const char* value) { SetPrivateLinkEndpoint(value); return *this;}


    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const{ return m_subnetArns; }

    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }

    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline void SetSubnetArns(const Aws::Vector<Aws::String>& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = value; }

    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline void SetSubnetArns(Aws::Vector<Aws::String>&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::move(value); }

    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline PrivateLinkConfig& WithSubnetArns(const Aws::Vector<Aws::String>& value) { SetSubnetArns(value); return *this;}

    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline PrivateLinkConfig& WithSubnetArns(Aws::Vector<Aws::String>&& value) { SetSubnetArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline PrivateLinkConfig& AddSubnetArns(const Aws::String& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }

    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline PrivateLinkConfig& AddSubnetArns(Aws::String&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline PrivateLinkConfig& AddSubnetArns(const char* value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }


    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
     */
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
     */
    inline PrivateLinkConfig& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
     */
    inline PrivateLinkConfig& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
     */
    inline PrivateLinkConfig& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
     */
    inline PrivateLinkConfig& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
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
