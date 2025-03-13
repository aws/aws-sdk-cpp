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
    AWS_ELASTICACHE_API CacheSubnetGroup() = default;
    AWS_ELASTICACHE_API CacheSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const { return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    template<typename CacheSubnetGroupNameT = Aws::String>
    void SetCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::forward<CacheSubnetGroupNameT>(value); }
    template<typename CacheSubnetGroupNameT = Aws::String>
    CacheSubnetGroup& WithCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { SetCacheSubnetGroupName(std::forward<CacheSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupDescription() const { return m_cacheSubnetGroupDescription; }
    inline bool CacheSubnetGroupDescriptionHasBeenSet() const { return m_cacheSubnetGroupDescriptionHasBeenSet; }
    template<typename CacheSubnetGroupDescriptionT = Aws::String>
    void SetCacheSubnetGroupDescription(CacheSubnetGroupDescriptionT&& value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription = std::forward<CacheSubnetGroupDescriptionT>(value); }
    template<typename CacheSubnetGroupDescriptionT = Aws::String>
    CacheSubnetGroup& WithCacheSubnetGroupDescription(CacheSubnetGroupDescriptionT&& value) { SetCacheSubnetGroupDescription(std::forward<CacheSubnetGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CacheSubnetGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Subnet>>
    CacheSubnetGroup& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Subnet>
    CacheSubnetGroup& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the cache subnet group.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    CacheSubnetGroup& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
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
    CacheSubnetGroup& WithSupportedNetworkTypes(SupportedNetworkTypesT&& value) { SetSupportedNetworkTypes(std::forward<SupportedNetworkTypesT>(value)); return *this;}
    inline CacheSubnetGroup& AddSupportedNetworkTypes(NetworkType value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(value); return *this; }
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
