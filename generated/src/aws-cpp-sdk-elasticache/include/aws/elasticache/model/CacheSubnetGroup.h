/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Subnet.h>
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
   * <p>Represents the output of one of the following operations:</p> <ul> <li> <p>
   * <code>CreateCacheSubnetGroup</code> </p> </li> <li> <p>
   * <code>ModifyCacheSubnetGroup</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheSubnetGroup">AWS
   * API Reference</a></p>
   */
  class CacheSubnetGroup
  {
  public:
    AWS_ELASTICACHE_API CacheSubnetGroup();
    AWS_ELASTICACHE_API CacheSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::move(value); }
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }
    inline CacheSubnetGroup& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}
    inline CacheSubnetGroup& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(std::move(value)); return *this;}
    inline CacheSubnetGroup& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupDescription() const{ return m_cacheSubnetGroupDescription; }
    inline bool CacheSubnetGroupDescriptionHasBeenSet() const { return m_cacheSubnetGroupDescriptionHasBeenSet; }
    inline void SetCacheSubnetGroupDescription(const Aws::String& value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription = value; }
    inline void SetCacheSubnetGroupDescription(Aws::String&& value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription = std::move(value); }
    inline void SetCacheSubnetGroupDescription(const char* value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription.assign(value); }
    inline CacheSubnetGroup& WithCacheSubnetGroupDescription(const Aws::String& value) { SetCacheSubnetGroupDescription(value); return *this;}
    inline CacheSubnetGroup& WithCacheSubnetGroupDescription(Aws::String&& value) { SetCacheSubnetGroupDescription(std::move(value)); return *this;}
    inline CacheSubnetGroup& WithCacheSubnetGroupDescription(const char* value) { SetCacheSubnetGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline CacheSubnetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CacheSubnetGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CacheSubnetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Subnet>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Subnet>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline CacheSubnetGroup& WithSubnets(const Aws::Vector<Subnet>& value) { SetSubnets(value); return *this;}
    inline CacheSubnetGroup& WithSubnets(Aws::Vector<Subnet>&& value) { SetSubnets(std::move(value)); return *this;}
    inline CacheSubnetGroup& AddSubnets(const Subnet& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline CacheSubnetGroup& AddSubnets(Subnet&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the cache subnet group.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline CacheSubnetGroup& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline CacheSubnetGroup& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline CacheSubnetGroup& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Either <code>ipv4</code> | <code>ipv6</code> | <code>dual_stack</code>. IPv6
     * is supported for workloads using Valkey 7.2 and above, Redis OSS engine version
     * 6.2 and above or Memcached engine version 1.6.6 and above on all instances built
     * on the <a href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const Aws::Vector<NetworkType>& GetSupportedNetworkTypes() const{ return m_supportedNetworkTypes; }
    inline bool SupportedNetworkTypesHasBeenSet() const { return m_supportedNetworkTypesHasBeenSet; }
    inline void SetSupportedNetworkTypes(const Aws::Vector<NetworkType>& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = value; }
    inline void SetSupportedNetworkTypes(Aws::Vector<NetworkType>&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = std::move(value); }
    inline CacheSubnetGroup& WithSupportedNetworkTypes(const Aws::Vector<NetworkType>& value) { SetSupportedNetworkTypes(value); return *this;}
    inline CacheSubnetGroup& WithSupportedNetworkTypes(Aws::Vector<NetworkType>&& value) { SetSupportedNetworkTypes(std::move(value)); return *this;}
    inline CacheSubnetGroup& AddSupportedNetworkTypes(const NetworkType& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(value); return *this; }
    inline CacheSubnetGroup& AddSupportedNetworkTypes(NetworkType&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet = false;

    Aws::String m_cacheSubnetGroupDescription;
    bool m_cacheSubnetGroupDescriptionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Subnet> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<NetworkType> m_supportedNetworkTypes;
    bool m_supportedNetworkTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
