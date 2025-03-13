/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/EC2SecurityGroup.h>
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
   * <code>AuthorizeCacheSecurityGroupIngress</code> </p> </li> <li> <p>
   * <code>CreateCacheSecurityGroup</code> </p> </li> <li> <p>
   * <code>RevokeCacheSecurityGroupIngress</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheSecurityGroup">AWS
   * API Reference</a></p>
   */
  class CacheSecurityGroup
  {
  public:
    AWS_ELASTICACHE_API CacheSecurityGroup() = default;
    AWS_ELASTICACHE_API CacheSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon account ID of the cache security group owner.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    CacheSecurityGroup& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache security group.</p>
     */
    inline const Aws::String& GetCacheSecurityGroupName() const { return m_cacheSecurityGroupName; }
    inline bool CacheSecurityGroupNameHasBeenSet() const { return m_cacheSecurityGroupNameHasBeenSet; }
    template<typename CacheSecurityGroupNameT = Aws::String>
    void SetCacheSecurityGroupName(CacheSecurityGroupNameT&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = std::forward<CacheSecurityGroupNameT>(value); }
    template<typename CacheSecurityGroupNameT = Aws::String>
    CacheSecurityGroup& WithCacheSecurityGroupName(CacheSecurityGroupNameT&& value) { SetCacheSecurityGroupName(std::forward<CacheSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cache security group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CacheSecurityGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline const Aws::Vector<EC2SecurityGroup>& GetEC2SecurityGroups() const { return m_eC2SecurityGroups; }
    inline bool EC2SecurityGroupsHasBeenSet() const { return m_eC2SecurityGroupsHasBeenSet; }
    template<typename EC2SecurityGroupsT = Aws::Vector<EC2SecurityGroup>>
    void SetEC2SecurityGroups(EC2SecurityGroupsT&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = std::forward<EC2SecurityGroupsT>(value); }
    template<typename EC2SecurityGroupsT = Aws::Vector<EC2SecurityGroup>>
    CacheSecurityGroup& WithEC2SecurityGroups(EC2SecurityGroupsT&& value) { SetEC2SecurityGroups(std::forward<EC2SecurityGroupsT>(value)); return *this;}
    template<typename EC2SecurityGroupsT = EC2SecurityGroup>
    CacheSecurityGroup& AddEC2SecurityGroups(EC2SecurityGroupsT&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.emplace_back(std::forward<EC2SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the cache security group,</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    CacheSecurityGroup& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_cacheSecurityGroupName;
    bool m_cacheSecurityGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EC2SecurityGroup> m_eC2SecurityGroups;
    bool m_eC2SecurityGroupsHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
