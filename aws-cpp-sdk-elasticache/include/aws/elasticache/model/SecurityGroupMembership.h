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
   * <p>Represents a single cache security group and its status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/SecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API SecurityGroupMembership
  {
  public:
    SecurityGroupMembership();
    SecurityGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    SecurityGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the cache security group.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }

    /**
     * <p>The identifier of the cache security group.</p>
     */
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the cache security group.</p>
     */
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }

    /**
     * <p>The identifier of the cache security group.</p>
     */
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::move(value); }

    /**
     * <p>The identifier of the cache security group.</p>
     */
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }

    /**
     * <p>The identifier of the cache security group.</p>
     */
    inline SecurityGroupMembership& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of the cache security group.</p>
     */
    inline SecurityGroupMembership& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cache security group.</p>
     */
    inline SecurityGroupMembership& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}


    /**
     * <p>The status of the cache security group membership. The status changes
     * whenever a cache security group is modified, or when the cache security groups
     * assigned to a cluster are modified.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the cache security group membership. The status changes
     * whenever a cache security group is modified, or when the cache security groups
     * assigned to a cluster are modified.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the cache security group membership. The status changes
     * whenever a cache security group is modified, or when the cache security groups
     * assigned to a cluster are modified.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the cache security group membership. The status changes
     * whenever a cache security group is modified, or when the cache security groups
     * assigned to a cluster are modified.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the cache security group membership. The status changes
     * whenever a cache security group is modified, or when the cache security groups
     * assigned to a cluster are modified.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the cache security group membership. The status changes
     * whenever a cache security group is modified, or when the cache security groups
     * assigned to a cluster are modified.</p>
     */
    inline SecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the cache security group membership. The status changes
     * whenever a cache security group is modified, or when the cache security groups
     * assigned to a cluster are modified.</p>
     */
    inline SecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the cache security group membership. The status changes
     * whenever a cache security group is modified, or when the cache security groups
     * assigned to a cluster are modified.</p>
     */
    inline SecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
