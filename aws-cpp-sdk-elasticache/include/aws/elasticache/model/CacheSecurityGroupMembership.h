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
   * <p>Represents a cluster's status within a particular cache security
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheSecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API CacheSecurityGroupMembership
  {
  public:
    CacheSecurityGroupMembership();
    CacheSecurityGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheSecurityGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline CacheSecurityGroupMembership& WithCacheSecurityGroupName(const Aws::String& value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the cache security group.</p>
     */
    inline CacheSecurityGroupMembership& WithCacheSecurityGroupName(Aws::String&& value) { SetCacheSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache security group.</p>
     */
    inline CacheSecurityGroupMembership& WithCacheSecurityGroupName(const char* value) { SetCacheSecurityGroupName(value); return *this;}


    /**
     * <p>The membership status in the cache security group. The status changes when a
     * cache security group is modified, or when the cache security groups assigned to
     * a cluster are modified.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The membership status in the cache security group. The status changes when a
     * cache security group is modified, or when the cache security groups assigned to
     * a cluster are modified.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The membership status in the cache security group. The status changes when a
     * cache security group is modified, or when the cache security groups assigned to
     * a cluster are modified.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The membership status in the cache security group. The status changes when a
     * cache security group is modified, or when the cache security groups assigned to
     * a cluster are modified.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The membership status in the cache security group. The status changes when a
     * cache security group is modified, or when the cache security groups assigned to
     * a cluster are modified.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The membership status in the cache security group. The status changes when a
     * cache security group is modified, or when the cache security groups assigned to
     * a cluster are modified.</p>
     */
    inline CacheSecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The membership status in the cache security group. The status changes when a
     * cache security group is modified, or when the cache security groups assigned to
     * a cluster are modified.</p>
     */
    inline CacheSecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The membership status in the cache security group. The status changes when a
     * cache security group is modified, or when the cache security groups assigned to
     * a cluster are modified.</p>
     */
    inline CacheSecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_cacheSecurityGroupName;
    bool m_cacheSecurityGroupNameHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
