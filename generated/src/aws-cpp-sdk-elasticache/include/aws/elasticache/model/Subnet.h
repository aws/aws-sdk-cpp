/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/AvailabilityZone.h>
#include <aws/elasticache/model/SubnetOutpost.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/NetworkType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the subnet associated with a cluster. This parameter refers to
   * subnets defined in Amazon Virtual Private Cloud (Amazon VPC) and used with
   * ElastiCache.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/Subnet">AWS
   * API Reference</a></p>
   */
  class Subnet
  {
  public:
    AWS_ELASTICACHE_API Subnet() = default;
    AWS_ELASTICACHE_API Subnet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API Subnet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline const Aws::String& GetSubnetIdentifier() const { return m_subnetIdentifier; }
    inline bool SubnetIdentifierHasBeenSet() const { return m_subnetIdentifierHasBeenSet; }
    template<typename SubnetIdentifierT = Aws::String>
    void SetSubnetIdentifier(SubnetIdentifierT&& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = std::forward<SubnetIdentifierT>(value); }
    template<typename SubnetIdentifierT = Aws::String>
    Subnet& WithSubnetIdentifier(SubnetIdentifierT&& value) { SetSubnetIdentifier(std::forward<SubnetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone associated with the subnet.</p>
     */
    inline const AvailabilityZone& GetSubnetAvailabilityZone() const { return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    template<typename SubnetAvailabilityZoneT = AvailabilityZone>
    void SetSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::forward<SubnetAvailabilityZoneT>(value); }
    template<typename SubnetAvailabilityZoneT = AvailabilityZone>
    Subnet& WithSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { SetSubnetAvailabilityZone(std::forward<SubnetAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARN of the subnet.</p>
     */
    inline const SubnetOutpost& GetSubnetOutpost() const { return m_subnetOutpost; }
    inline bool SubnetOutpostHasBeenSet() const { return m_subnetOutpostHasBeenSet; }
    template<typename SubnetOutpostT = SubnetOutpost>
    void SetSubnetOutpost(SubnetOutpostT&& value) { m_subnetOutpostHasBeenSet = true; m_subnetOutpost = std::forward<SubnetOutpostT>(value); }
    template<typename SubnetOutpostT = SubnetOutpost>
    Subnet& WithSubnetOutpost(SubnetOutpostT&& value) { SetSubnetOutpost(std::forward<SubnetOutpostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Valkey 7.2 and above, Redis OSS engine version
     * 6.2 to 7.1 or Memcached engine version 1.6.6 and above on all instances built on
     * the <a href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const Aws::Vector<NetworkType>& GetSupportedNetworkTypes() const { return m_supportedNetworkTypes; }
    inline bool SupportedNetworkTypesHasBeenSet() const { return m_supportedNetworkTypesHasBeenSet; }
    template<typename SupportedNetworkTypesT = Aws::Vector<NetworkType>>
    void SetSupportedNetworkTypes(SupportedNetworkTypesT&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = std::forward<SupportedNetworkTypesT>(value); }
    template<typename SupportedNetworkTypesT = Aws::Vector<NetworkType>>
    Subnet& WithSupportedNetworkTypes(SupportedNetworkTypesT&& value) { SetSupportedNetworkTypes(std::forward<SupportedNetworkTypesT>(value)); return *this;}
    inline Subnet& AddSupportedNetworkTypes(NetworkType value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_subnetIdentifier;
    bool m_subnetIdentifierHasBeenSet = false;

    AvailabilityZone m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    SubnetOutpost m_subnetOutpost;
    bool m_subnetOutpostHasBeenSet = false;

    Aws::Vector<NetworkType> m_supportedNetworkTypes;
    bool m_supportedNetworkTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
