/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLiftStreams {
namespace Model {

/**
 * <p>The VPC transit configuration details for a stream group location, including
 * the Transit Gateway information needed to complete the VPC attachment
 * setup.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/VpcTransitConfigurationResponse">AWS
 * API Reference</a></p>
 */
class VpcTransitConfigurationResponse {
 public:
  AWS_GAMELIFTSTREAMS_API VpcTransitConfigurationResponse() = default;
  AWS_GAMELIFTSTREAMS_API VpcTransitConfigurationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API VpcTransitConfigurationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Amazon VPC that is connected to the stream group.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  VpcTransitConfigurationResponse& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR blocks in your VPC that the stream group can access.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpv4CidrBlocks() const { return m_ipv4CidrBlocks; }
  inline bool Ipv4CidrBlocksHasBeenSet() const { return m_ipv4CidrBlocksHasBeenSet; }
  template <typename Ipv4CidrBlocksT = Aws::Vector<Aws::String>>
  void SetIpv4CidrBlocks(Ipv4CidrBlocksT&& value) {
    m_ipv4CidrBlocksHasBeenSet = true;
    m_ipv4CidrBlocks = std::forward<Ipv4CidrBlocksT>(value);
  }
  template <typename Ipv4CidrBlocksT = Aws::Vector<Aws::String>>
  VpcTransitConfigurationResponse& WithIpv4CidrBlocks(Ipv4CidrBlocksT&& value) {
    SetIpv4CidrBlocks(std::forward<Ipv4CidrBlocksT>(value));
    return *this;
  }
  template <typename Ipv4CidrBlocksT = Aws::String>
  VpcTransitConfigurationResponse& AddIpv4CidrBlocks(Ipv4CidrBlocksT&& value) {
    m_ipv4CidrBlocksHasBeenSet = true;
    m_ipv4CidrBlocks.emplace_back(std::forward<Ipv4CidrBlocksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Transit Gateway that Amazon GameLift Streams created for this
   * VPC connection. Use this ID when creating your VPC attachment.</p>
   */
  inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
  inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
  template <typename TransitGatewayIdT = Aws::String>
  void SetTransitGatewayId(TransitGatewayIdT&& value) {
    m_transitGatewayIdHasBeenSet = true;
    m_transitGatewayId = std::forward<TransitGatewayIdT>(value);
  }
  template <typename TransitGatewayIdT = Aws::String>
  VpcTransitConfigurationResponse& WithTransitGatewayId(TransitGatewayIdT&& value) {
    SetTransitGatewayId(std::forward<TransitGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the AWS Resource Access Manager resource share for the Transit
   * Gateway. You must accept this resource share before you can create a VPC
   * attachment.</p>
   */
  inline const Aws::String& GetTransitGatewayResourceShareArn() const { return m_transitGatewayResourceShareArn; }
  inline bool TransitGatewayResourceShareArnHasBeenSet() const { return m_transitGatewayResourceShareArnHasBeenSet; }
  template <typename TransitGatewayResourceShareArnT = Aws::String>
  void SetTransitGatewayResourceShareArn(TransitGatewayResourceShareArnT&& value) {
    m_transitGatewayResourceShareArnHasBeenSet = true;
    m_transitGatewayResourceShareArn = std::forward<TransitGatewayResourceShareArnT>(value);
  }
  template <typename TransitGatewayResourceShareArnT = Aws::String>
  VpcTransitConfigurationResponse& WithTransitGatewayResourceShareArn(TransitGatewayResourceShareArnT&& value) {
    SetTransitGatewayResourceShareArn(std::forward<TransitGatewayResourceShareArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcId;

  Aws::Vector<Aws::String> m_ipv4CidrBlocks;

  Aws::String m_transitGatewayId;

  Aws::String m_transitGatewayResourceShareArn;
  bool m_vpcIdHasBeenSet = false;
  bool m_ipv4CidrBlocksHasBeenSet = false;
  bool m_transitGatewayIdHasBeenSet = false;
  bool m_transitGatewayResourceShareArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
