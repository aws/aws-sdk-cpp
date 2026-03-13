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
 * <p>Configuration for connecting a stream group location to resources in your
 * Amazon VPC using AWS Transit Gateway. When you specify a VPC transit
 * configuration, Amazon GameLift Streams creates a Transit Gateway and shares it
 * with your account using AWS Resource Access Manager. After the stream group is
 * active, you must complete the setup by accepting the resource share, creating a
 * VPC attachment, and configuring routing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/VpcTransitConfiguration">AWS
 * API Reference</a></p>
 */
class VpcTransitConfiguration {
 public:
  AWS_GAMELIFTSTREAMS_API VpcTransitConfiguration() = default;
  AWS_GAMELIFTSTREAMS_API VpcTransitConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API VpcTransitConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Amazon VPC that you want to connect to the stream group. The
   * VPC must be in the same Amazon Web Services account as the stream group. This
   * value cannot be changed after the stream group is created.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  VpcTransitConfiguration& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IPv4 CIDR blocks in your VPC that you want the stream group to be
   * able to access. You can specify up to 5 CIDR blocks. The CIDR blocks must be
   * valid subsets of the VPC's CIDR blocks and cannot overlap with the service VPC
   * CIDR block.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpv4CidrBlocks() const { return m_ipv4CidrBlocks; }
  inline bool Ipv4CidrBlocksHasBeenSet() const { return m_ipv4CidrBlocksHasBeenSet; }
  template <typename Ipv4CidrBlocksT = Aws::Vector<Aws::String>>
  void SetIpv4CidrBlocks(Ipv4CidrBlocksT&& value) {
    m_ipv4CidrBlocksHasBeenSet = true;
    m_ipv4CidrBlocks = std::forward<Ipv4CidrBlocksT>(value);
  }
  template <typename Ipv4CidrBlocksT = Aws::Vector<Aws::String>>
  VpcTransitConfiguration& WithIpv4CidrBlocks(Ipv4CidrBlocksT&& value) {
    SetIpv4CidrBlocks(std::forward<Ipv4CidrBlocksT>(value));
    return *this;
  }
  template <typename Ipv4CidrBlocksT = Aws::String>
  VpcTransitConfiguration& AddIpv4CidrBlocks(Ipv4CidrBlocksT&& value) {
    m_ipv4CidrBlocksHasBeenSet = true;
    m_ipv4CidrBlocks.emplace_back(std::forward<Ipv4CidrBlocksT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcId;

  Aws::Vector<Aws::String> m_ipv4CidrBlocks;
  bool m_vpcIdHasBeenSet = false;
  bool m_ipv4CidrBlocksHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
