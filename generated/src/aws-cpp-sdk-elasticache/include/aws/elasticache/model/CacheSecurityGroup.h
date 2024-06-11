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
    AWS_ELASTICACHE_API CacheSecurityGroup();
    AWS_ELASTICACHE_API CacheSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon account ID of the cache security group owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline CacheSecurityGroup& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline CacheSecurityGroup& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline CacheSecurityGroup& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache security group.</p>
     */
    inline const Aws::String& GetCacheSecurityGroupName() const{ return m_cacheSecurityGroupName; }
    inline bool CacheSecurityGroupNameHasBeenSet() const { return m_cacheSecurityGroupNameHasBeenSet; }
    inline void SetCacheSecurityGroupName(const Aws::String& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }
    inline void SetCacheSecurityGroupName(Aws::String&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = std::move(value); }
    inline void SetCacheSecurityGroupName(const char* value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName.assign(value); }
    inline CacheSecurityGroup& WithCacheSecurityGroupName(const Aws::String& value) { SetCacheSecurityGroupName(value); return *this;}
    inline CacheSecurityGroup& WithCacheSecurityGroupName(Aws::String&& value) { SetCacheSecurityGroupName(std::move(value)); return *this;}
    inline CacheSecurityGroup& WithCacheSecurityGroupName(const char* value) { SetCacheSecurityGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the cache security group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CacheSecurityGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CacheSecurityGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CacheSecurityGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline const Aws::Vector<EC2SecurityGroup>& GetEC2SecurityGroups() const{ return m_eC2SecurityGroups; }
    inline bool EC2SecurityGroupsHasBeenSet() const { return m_eC2SecurityGroupsHasBeenSet; }
    inline void SetEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = value; }
    inline void SetEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = std::move(value); }
    inline CacheSecurityGroup& WithEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { SetEC2SecurityGroups(value); return *this;}
    inline CacheSecurityGroup& WithEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { SetEC2SecurityGroups(std::move(value)); return *this;}
    inline CacheSecurityGroup& AddEC2SecurityGroups(const EC2SecurityGroup& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(value); return *this; }
    inline CacheSecurityGroup& AddEC2SecurityGroups(EC2SecurityGroup&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the cache security group,</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline CacheSecurityGroup& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline CacheSecurityGroup& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline CacheSecurityGroup& WithARN(const char* value) { SetARN(value); return *this;}
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
