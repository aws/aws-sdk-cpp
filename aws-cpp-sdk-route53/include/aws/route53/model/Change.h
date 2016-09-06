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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeAction.h>
#include <aws/route53/model/ResourceRecordSet.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>The information for each resource record set that you want to change.</p>
   */
  class AWS_ROUTE53_API Change
  {
  public:
    Change();
    Change(const Aws::Utils::Xml::XmlNode& xmlNode);
    Change& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>The action to perform:</p> <ul> <li> <p> <code>CREATE</code>: Creates a
     * resource record set that has the specified values.</p> </li> <li> <p>
     * <code>DELETE</code>: Deletes a existing resource record set that has the
     * specified values for <code>Name</code>, <code>Type</code>,
     * <code>SetIdentifier</code> (for latency, weighted, geolocation, and failover
     * resource record sets), and <code>TTL</code> (except alias resource record sets,
     * for which the TTL is determined by the AWS resource that you're routing DNS
     * queries to).</p> <important> <p>To delete the resource record set that is
     * associated with a traffic policy instance, use <code>
     * <a>DeleteTrafficPolicyInstance</a> </code>. Amazon Route 53will delete the
     * resource record set automatically. If you delete the resource record set by
     * using <code>ChangeResourceRecordSets</code>, Amazon Route 53 doesn't
     * automatically delete the traffic policy instance, and you'll continue to be
     * charged for it even though it's no longer in use. </p> </important> </li> <li>
     * <p> <code>UPSERT</code>: If a resource record set does not already exist, Amazon
     * Route 53 creates it. If a resource record set does exist, Amazon Route 53
     * updates it with the values in the request. Amazon Route 53 can update an
     * existing resource record set only when all of the following values match:
     * <code>Name</code>, <code>Type</code>, and <code>SetIdentifier</code> (for
     * weighted, latency, geolocation, and failover resource record sets).</p> </li>
     * </ul>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to perform:</p> <ul> <li> <p> <code>CREATE</code>: Creates a
     * resource record set that has the specified values.</p> </li> <li> <p>
     * <code>DELETE</code>: Deletes a existing resource record set that has the
     * specified values for <code>Name</code>, <code>Type</code>,
     * <code>SetIdentifier</code> (for latency, weighted, geolocation, and failover
     * resource record sets), and <code>TTL</code> (except alias resource record sets,
     * for which the TTL is determined by the AWS resource that you're routing DNS
     * queries to).</p> <important> <p>To delete the resource record set that is
     * associated with a traffic policy instance, use <code>
     * <a>DeleteTrafficPolicyInstance</a> </code>. Amazon Route 53will delete the
     * resource record set automatically. If you delete the resource record set by
     * using <code>ChangeResourceRecordSets</code>, Amazon Route 53 doesn't
     * automatically delete the traffic policy instance, and you'll continue to be
     * charged for it even though it's no longer in use. </p> </important> </li> <li>
     * <p> <code>UPSERT</code>: If a resource record set does not already exist, Amazon
     * Route 53 creates it. If a resource record set does exist, Amazon Route 53
     * updates it with the values in the request. Amazon Route 53 can update an
     * existing resource record set only when all of the following values match:
     * <code>Name</code>, <code>Type</code>, and <code>SetIdentifier</code> (for
     * weighted, latency, geolocation, and failover resource record sets).</p> </li>
     * </ul>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to perform:</p> <ul> <li> <p> <code>CREATE</code>: Creates a
     * resource record set that has the specified values.</p> </li> <li> <p>
     * <code>DELETE</code>: Deletes a existing resource record set that has the
     * specified values for <code>Name</code>, <code>Type</code>,
     * <code>SetIdentifier</code> (for latency, weighted, geolocation, and failover
     * resource record sets), and <code>TTL</code> (except alias resource record sets,
     * for which the TTL is determined by the AWS resource that you're routing DNS
     * queries to).</p> <important> <p>To delete the resource record set that is
     * associated with a traffic policy instance, use <code>
     * <a>DeleteTrafficPolicyInstance</a> </code>. Amazon Route 53will delete the
     * resource record set automatically. If you delete the resource record set by
     * using <code>ChangeResourceRecordSets</code>, Amazon Route 53 doesn't
     * automatically delete the traffic policy instance, and you'll continue to be
     * charged for it even though it's no longer in use. </p> </important> </li> <li>
     * <p> <code>UPSERT</code>: If a resource record set does not already exist, Amazon
     * Route 53 creates it. If a resource record set does exist, Amazon Route 53
     * updates it with the values in the request. Amazon Route 53 can update an
     * existing resource record set only when all of the following values match:
     * <code>Name</code>, <code>Type</code>, and <code>SetIdentifier</code> (for
     * weighted, latency, geolocation, and failover resource record sets).</p> </li>
     * </ul>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to perform:</p> <ul> <li> <p> <code>CREATE</code>: Creates a
     * resource record set that has the specified values.</p> </li> <li> <p>
     * <code>DELETE</code>: Deletes a existing resource record set that has the
     * specified values for <code>Name</code>, <code>Type</code>,
     * <code>SetIdentifier</code> (for latency, weighted, geolocation, and failover
     * resource record sets), and <code>TTL</code> (except alias resource record sets,
     * for which the TTL is determined by the AWS resource that you're routing DNS
     * queries to).</p> <important> <p>To delete the resource record set that is
     * associated with a traffic policy instance, use <code>
     * <a>DeleteTrafficPolicyInstance</a> </code>. Amazon Route 53will delete the
     * resource record set automatically. If you delete the resource record set by
     * using <code>ChangeResourceRecordSets</code>, Amazon Route 53 doesn't
     * automatically delete the traffic policy instance, and you'll continue to be
     * charged for it even though it's no longer in use. </p> </important> </li> <li>
     * <p> <code>UPSERT</code>: If a resource record set does not already exist, Amazon
     * Route 53 creates it. If a resource record set does exist, Amazon Route 53
     * updates it with the values in the request. Amazon Route 53 can update an
     * existing resource record set only when all of the following values match:
     * <code>Name</code>, <code>Type</code>, and <code>SetIdentifier</code> (for
     * weighted, latency, geolocation, and failover resource record sets).</p> </li>
     * </ul>
     */
    inline Change& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to perform:</p> <ul> <li> <p> <code>CREATE</code>: Creates a
     * resource record set that has the specified values.</p> </li> <li> <p>
     * <code>DELETE</code>: Deletes a existing resource record set that has the
     * specified values for <code>Name</code>, <code>Type</code>,
     * <code>SetIdentifier</code> (for latency, weighted, geolocation, and failover
     * resource record sets), and <code>TTL</code> (except alias resource record sets,
     * for which the TTL is determined by the AWS resource that you're routing DNS
     * queries to).</p> <important> <p>To delete the resource record set that is
     * associated with a traffic policy instance, use <code>
     * <a>DeleteTrafficPolicyInstance</a> </code>. Amazon Route 53will delete the
     * resource record set automatically. If you delete the resource record set by
     * using <code>ChangeResourceRecordSets</code>, Amazon Route 53 doesn't
     * automatically delete the traffic policy instance, and you'll continue to be
     * charged for it even though it's no longer in use. </p> </important> </li> <li>
     * <p> <code>UPSERT</code>: If a resource record set does not already exist, Amazon
     * Route 53 creates it. If a resource record set does exist, Amazon Route 53
     * updates it with the values in the request. Amazon Route 53 can update an
     * existing resource record set only when all of the following values match:
     * <code>Name</code>, <code>Type</code>, and <code>SetIdentifier</code> (for
     * weighted, latency, geolocation, and failover resource record sets).</p> </li>
     * </ul>
     */
    inline Change& WithAction(ChangeAction&& value) { SetAction(value); return *this;}

    /**
     * <p>Information about the resource record set to create or delete.</p>
     */
    inline const ResourceRecordSet& GetResourceRecordSet() const{ return m_resourceRecordSet; }

    /**
     * <p>Information about the resource record set to create or delete.</p>
     */
    inline void SetResourceRecordSet(const ResourceRecordSet& value) { m_resourceRecordSetHasBeenSet = true; m_resourceRecordSet = value; }

    /**
     * <p>Information about the resource record set to create or delete.</p>
     */
    inline void SetResourceRecordSet(ResourceRecordSet&& value) { m_resourceRecordSetHasBeenSet = true; m_resourceRecordSet = value; }

    /**
     * <p>Information about the resource record set to create or delete.</p>
     */
    inline Change& WithResourceRecordSet(const ResourceRecordSet& value) { SetResourceRecordSet(value); return *this;}

    /**
     * <p>Information about the resource record set to create or delete.</p>
     */
    inline Change& WithResourceRecordSet(ResourceRecordSet&& value) { SetResourceRecordSet(value); return *this;}

  private:
    ChangeAction m_action;
    bool m_actionHasBeenSet;
    ResourceRecordSet m_resourceRecordSet;
    bool m_resourceRecordSetHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
