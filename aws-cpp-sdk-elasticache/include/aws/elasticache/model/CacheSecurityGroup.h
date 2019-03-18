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
  class AWS_ELASTICACHE_API CacheSecurityGroup
  {
  public:
    CacheSecurityGroup();
    CacheSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The AWS account ID of the cache security group owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account ID of the cache security group owner.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the cache security group owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account ID of the cache security group owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The AWS account ID of the cache security group owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The AWS account ID of the cache security group owner.</p>
     */
    inline CacheSecurityGroup& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the cache security group owner.</p>
     */
    inline CacheSecurityGroup& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the cache security group owner.</p>
     */
    inline CacheSecurityGroup& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The name of the cache security group.</p>
     */
    inline const Aws::String& GetCacheSecurityGroupName() const{ return m_cacheSecurityGroupName; }

    /**
     * <p>The name of the cache security group.</p>
     */
    inline bool CacheSecurityGroupNameHasBeenSet() const { return m_cacheSecurityGroupNameHasBeenSet; }

    /**
     * <p>The name of the cache security group.</p>
     */
    inline void SetCacheSecurityGroupName(const Aws::String& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }

    /**
     * <p>The name of the cache security group.</p>
     */
    inline void SetCacheSecurityGroupName(Aws::String&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = std::move(value); }

    /**
     * <p>The name of the cache security group.</p>
     */
    inline void SetCacheSecurityGroupName(const char* value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName.assign(value); }

    /**
     * <p>The name of the cache security group.</p>
     */
    inline CacheSecurityGroup& WithCacheSecurityGroupName(const Aws::String& value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the cache security group.</p>
     */
    inline CacheSecurityGroup& WithCacheSecurityGroupName(Aws::String&& value) { SetCacheSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache security group.</p>
     */
    inline CacheSecurityGroup& WithCacheSecurityGroupName(const char* value) { SetCacheSecurityGroupName(value); return *this;}


    /**
     * <p>The description of the cache security group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the cache security group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the cache security group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the cache security group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the cache security group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the cache security group.</p>
     */
    inline CacheSecurityGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the cache security group.</p>
     */
    inline CacheSecurityGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the cache security group.</p>
     */
    inline CacheSecurityGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline const Aws::Vector<EC2SecurityGroup>& GetEC2SecurityGroups() const{ return m_eC2SecurityGroups; }

    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline bool EC2SecurityGroupsHasBeenSet() const { return m_eC2SecurityGroupsHasBeenSet; }

    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline void SetEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = value; }

    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline void SetEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = std::move(value); }

    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline CacheSecurityGroup& WithEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { SetEC2SecurityGroups(value); return *this;}

    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline CacheSecurityGroup& WithEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { SetEC2SecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline CacheSecurityGroup& AddEC2SecurityGroups(const EC2SecurityGroup& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of Amazon EC2 security groups that are associated with this cache
     * security group.</p>
     */
    inline CacheSecurityGroup& AddEC2SecurityGroups(EC2SecurityGroup&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_cacheSecurityGroupName;
    bool m_cacheSecurityGroupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<EC2SecurityGroup> m_eC2SecurityGroups;
    bool m_eC2SecurityGroupsHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
