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
    AWS_ELASTICACHE_API Subnet();
    AWS_ELASTICACHE_API Subnet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API Subnet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline const Aws::String& GetSubnetIdentifier() const{ return m_subnetIdentifier; }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline bool SubnetIdentifierHasBeenSet() const { return m_subnetIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline void SetSubnetIdentifier(const Aws::String& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = value; }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline void SetSubnetIdentifier(Aws::String&& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = std::move(value); }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline void SetSubnetIdentifier(const char* value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier.assign(value); }

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(const Aws::String& value) { SetSubnetIdentifier(value); return *this;}

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(Aws::String&& value) { SetSubnetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(const char* value) { SetSubnetIdentifier(value); return *this;}


    /**
     * <p>The Availability Zone associated with the subnet.</p>
     */
    inline const AvailabilityZone& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }

    /**
     * <p>The Availability Zone associated with the subnet.</p>
     */
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone associated with the subnet.</p>
     */
    inline void SetSubnetAvailabilityZone(const AvailabilityZone& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }

    /**
     * <p>The Availability Zone associated with the subnet.</p>
     */
    inline void SetSubnetAvailabilityZone(AvailabilityZone&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone associated with the subnet.</p>
     */
    inline Subnet& WithSubnetAvailabilityZone(const AvailabilityZone& value) { SetSubnetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone associated with the subnet.</p>
     */
    inline Subnet& WithSubnetAvailabilityZone(AvailabilityZone&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}


    /**
     * <p>The outpost ARN of the subnet.</p>
     */
    inline const SubnetOutpost& GetSubnetOutpost() const{ return m_subnetOutpost; }

    /**
     * <p>The outpost ARN of the subnet.</p>
     */
    inline bool SubnetOutpostHasBeenSet() const { return m_subnetOutpostHasBeenSet; }

    /**
     * <p>The outpost ARN of the subnet.</p>
     */
    inline void SetSubnetOutpost(const SubnetOutpost& value) { m_subnetOutpostHasBeenSet = true; m_subnetOutpost = value; }

    /**
     * <p>The outpost ARN of the subnet.</p>
     */
    inline void SetSubnetOutpost(SubnetOutpost&& value) { m_subnetOutpostHasBeenSet = true; m_subnetOutpost = std::move(value); }

    /**
     * <p>The outpost ARN of the subnet.</p>
     */
    inline Subnet& WithSubnetOutpost(const SubnetOutpost& value) { SetSubnetOutpost(value); return *this;}

    /**
     * <p>The outpost ARN of the subnet.</p>
     */
    inline Subnet& WithSubnetOutpost(SubnetOutpost&& value) { SetSubnetOutpost(std::move(value)); return *this;}


    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Redis engine version 6.2 onward or Memcached
     * engine version 1.6.6 on all instances built on the <a
     * href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const Aws::Vector<NetworkType>& GetSupportedNetworkTypes() const{ return m_supportedNetworkTypes; }

    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Redis engine version 6.2 onward or Memcached
     * engine version 1.6.6 on all instances built on the <a
     * href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline bool SupportedNetworkTypesHasBeenSet() const { return m_supportedNetworkTypesHasBeenSet; }

    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Redis engine version 6.2 onward or Memcached
     * engine version 1.6.6 on all instances built on the <a
     * href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline void SetSupportedNetworkTypes(const Aws::Vector<NetworkType>& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = value; }

    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Redis engine version 6.2 onward or Memcached
     * engine version 1.6.6 on all instances built on the <a
     * href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline void SetSupportedNetworkTypes(Aws::Vector<NetworkType>&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = std::move(value); }

    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Redis engine version 6.2 onward or Memcached
     * engine version 1.6.6 on all instances built on the <a
     * href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline Subnet& WithSupportedNetworkTypes(const Aws::Vector<NetworkType>& value) { SetSupportedNetworkTypes(value); return *this;}

    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Redis engine version 6.2 onward or Memcached
     * engine version 1.6.6 on all instances built on the <a
     * href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline Subnet& WithSupportedNetworkTypes(Aws::Vector<NetworkType>&& value) { SetSupportedNetworkTypes(std::move(value)); return *this;}

    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Redis engine version 6.2 onward or Memcached
     * engine version 1.6.6 on all instances built on the <a
     * href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline Subnet& AddSupportedNetworkTypes(const NetworkType& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(value); return *this; }

    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Redis engine version 6.2 onward or Memcached
     * engine version 1.6.6 on all instances built on the <a
     * href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline Subnet& AddSupportedNetworkTypes(NetworkType&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(std::move(value)); return *this; }

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
