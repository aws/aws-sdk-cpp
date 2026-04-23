/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Subnet.h>
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
  class AWS_ELASTICACHE_API CacheSubnetGroup
  {
  public:
    CacheSubnetGroup();
    CacheSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }

    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }

    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline CacheSubnetGroup& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline CacheSubnetGroup& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache subnet group.</p>
     */
    inline CacheSubnetGroup& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}


    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupDescription() const{ return m_cacheSubnetGroupDescription; }

    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline bool CacheSubnetGroupDescriptionHasBeenSet() const { return m_cacheSubnetGroupDescriptionHasBeenSet; }

    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline void SetCacheSubnetGroupDescription(const Aws::String& value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription = value; }

    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline void SetCacheSubnetGroupDescription(Aws::String&& value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription = std::move(value); }

    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline void SetCacheSubnetGroupDescription(const char* value) { m_cacheSubnetGroupDescriptionHasBeenSet = true; m_cacheSubnetGroupDescription.assign(value); }

    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline CacheSubnetGroup& WithCacheSubnetGroupDescription(const Aws::String& value) { SetCacheSubnetGroupDescription(value); return *this;}

    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline CacheSubnetGroup& WithCacheSubnetGroupDescription(Aws::String&& value) { SetCacheSubnetGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the cache subnet group.</p>
     */
    inline CacheSubnetGroup& WithCacheSubnetGroupDescription(const char* value) { SetCacheSubnetGroupDescription(value); return *this;}


    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline CacheSubnetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline CacheSubnetGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group.</p>
     */
    inline CacheSubnetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline void SetSubnets(const Aws::Vector<Subnet>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline void SetSubnets(Aws::Vector<Subnet>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline CacheSubnetGroup& WithSubnets(const Aws::Vector<Subnet>& value) { SetSubnets(value); return *this;}

    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline CacheSubnetGroup& WithSubnets(Aws::Vector<Subnet>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline CacheSubnetGroup& AddSubnets(const Subnet& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>A list of subnets associated with the cache subnet group.</p>
     */
    inline CacheSubnetGroup& AddSubnets(Subnet&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet;

    Aws::String m_cacheSubnetGroupDescription;
    bool m_cacheSubnetGroupDescriptionHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Subnet> m_subnets;
    bool m_subnetsHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
