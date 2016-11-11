/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/PendingAutomaticFailoverStatus.h>

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
   * <p>The settings to be applied to the Redis replication group, either immediately
   * or during the next maintenance window.</p>
   */
  class AWS_ELASTICACHE_API ReplicationGroupPendingModifiedValues
  {
  public:
    ReplicationGroupPendingModifiedValues();
    ReplicationGroupPendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReplicationGroupPendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const{ return m_primaryClusterId; }

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline void SetPrimaryClusterId(const Aws::String& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline void SetPrimaryClusterId(Aws::String&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline void SetPrimaryClusterId(const char* value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId.assign(value); }

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithPrimaryClusterId(const Aws::String& value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithPrimaryClusterId(Aws::String&& value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithPrimaryClusterId(const char* value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>Indicates the status of Multi-AZ for this Redis replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline const PendingAutomaticFailoverStatus& GetAutomaticFailoverStatus() const{ return m_automaticFailoverStatus; }

    /**
     * <p>Indicates the status of Multi-AZ for this Redis replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline void SetAutomaticFailoverStatus(const PendingAutomaticFailoverStatus& value) { m_automaticFailoverStatusHasBeenSet = true; m_automaticFailoverStatus = value; }

    /**
     * <p>Indicates the status of Multi-AZ for this Redis replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline void SetAutomaticFailoverStatus(PendingAutomaticFailoverStatus&& value) { m_automaticFailoverStatusHasBeenSet = true; m_automaticFailoverStatus = value; }

    /**
     * <p>Indicates the status of Multi-AZ for this Redis replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline ReplicationGroupPendingModifiedValues& WithAutomaticFailoverStatus(const PendingAutomaticFailoverStatus& value) { SetAutomaticFailoverStatus(value); return *this;}

    /**
     * <p>Indicates the status of Multi-AZ for this Redis replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline ReplicationGroupPendingModifiedValues& WithAutomaticFailoverStatus(PendingAutomaticFailoverStatus&& value) { SetAutomaticFailoverStatus(value); return *this;}

  private:
    Aws::String m_primaryClusterId;
    bool m_primaryClusterIdHasBeenSet;
    PendingAutomaticFailoverStatus m_automaticFailoverStatus;
    bool m_automaticFailoverStatusHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
