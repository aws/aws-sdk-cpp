﻿/**
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
    AWS_DATASYNC_API PrivateLinkConfig() = default;
    AWS_DATASYNC_API PrivateLinkConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API PrivateLinkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ID of the VPC endpoint that your agent connects to.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    PrivateLinkConfig& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the VPC endpoint provided by <a
     * href="https://docs.aws.amazon.com/vpc/latest/privatelink/privatelink-share-your-services.html">Amazon
     * Web Services PrivateLink</a> that your agent connects to.</p>
     */
    inline const Aws::String& GetPrivateLinkEndpoint() const { return m_privateLinkEndpoint; }
    inline bool PrivateLinkEndpointHasBeenSet() const { return m_privateLinkEndpointHasBeenSet; }
    template<typename PrivateLinkEndpointT = Aws::String>
    void SetPrivateLinkEndpoint(PrivateLinkEndpointT&& value) { m_privateLinkEndpointHasBeenSet = true; m_privateLinkEndpoint = std::forward<PrivateLinkEndpointT>(value); }
    template<typename PrivateLinkEndpointT = Aws::String>
    PrivateLinkConfig& WithPrivateLinkEndpoint(PrivateLinkEndpointT&& value) { SetPrivateLinkEndpoint(std::forward<PrivateLinkEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the subnet where your VPC endpoint is located. You can
     * only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const { return m_subnetArns; }
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }
    template<typename SubnetArnsT = Aws::Vector<Aws::String>>
    void SetSubnetArns(SubnetArnsT&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::forward<SubnetArnsT>(value); }
    template<typename SubnetArnsT = Aws::Vector<Aws::String>>
    PrivateLinkConfig& WithSubnetArns(SubnetArnsT&& value) { SetSubnetArns(std::forward<SubnetArnsT>(value)); return *this;}
    template<typename SubnetArnsT = Aws::String>
    PrivateLinkConfig& AddSubnetArns(SubnetArnsT&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.emplace_back(std::forward<SubnetArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Names (ARN) of the security group that provides
     * DataSync access to your VPC endpoint. You can only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const { return m_securityGroupArns; }
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::forward<SecurityGroupArnsT>(value); }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    PrivateLinkConfig& WithSecurityGroupArns(SecurityGroupArnsT&& value) { SetSecurityGroupArns(std::forward<SecurityGroupArnsT>(value)); return *this;}
    template<typename SecurityGroupArnsT = Aws::String>
    PrivateLinkConfig& AddSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.emplace_back(std::forward<SecurityGroupArnsT>(value)); return *this; }
    ///@}
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
