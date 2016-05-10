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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HostedZoneConfig.h>

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
   * <p>A complex type that contain information about the specified hosted zone.</p>
   */
  class AWS_ROUTE53_API HostedZone
  {
  public:
    HostedZone();
    HostedZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    HostedZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>The ID of the specified hosted zone.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the specified hosted zone.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the specified hosted zone.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the specified hosted zone.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the specified hosted zone.</p>
     */
    inline HostedZone& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the specified hosted zone.</p>
     */
    inline HostedZone& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the specified hosted zone.</p>
     */
    inline HostedZone& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline HostedZone& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline HostedZone& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain. This must be a fully-specified domain, for example,
     * www.example.com. The trailing dot is optional; Amazon Route 53 assumes that the
     * domain name is fully qualified. This means that Amazon Route 53 treats
     * www.example.com (without a trailing dot) and www.example.com. (with a trailing
     * dot) as identical.</p> <p>This is the name you have registered with your DNS
     * registrar. You should ask your registrar to change the authoritative name
     * servers for your domain to the set of <code>NameServers</code> elements returned
     * in <code>DelegationSet</code>.</p>
     */
    inline HostedZone& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A unique string that identifies the request to create the hosted zone.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request to create the hosted zone.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request to create the hosted zone.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request to create the hosted zone.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request to create the hosted zone.</p>
     */
    inline HostedZone& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request to create the hosted zone.</p>
     */
    inline HostedZone& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request to create the hosted zone.</p>
     */
    inline HostedZone& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

    /**
     * <p>A complex type that contains the <code>Comment</code> element.</p>
     */
    inline const HostedZoneConfig& GetConfig() const{ return m_config; }

    /**
     * <p>A complex type that contains the <code>Comment</code> element.</p>
     */
    inline void SetConfig(const HostedZoneConfig& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>A complex type that contains the <code>Comment</code> element.</p>
     */
    inline void SetConfig(HostedZoneConfig&& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>A complex type that contains the <code>Comment</code> element.</p>
     */
    inline HostedZone& WithConfig(const HostedZoneConfig& value) { SetConfig(value); return *this;}

    /**
     * <p>A complex type that contains the <code>Comment</code> element.</p>
     */
    inline HostedZone& WithConfig(HostedZoneConfig&& value) { SetConfig(value); return *this;}

    /**
     * <p>Total number of resource record sets in the hosted zone.</p>
     */
    inline long long GetResourceRecordSetCount() const{ return m_resourceRecordSetCount; }

    /**
     * <p>Total number of resource record sets in the hosted zone.</p>
     */
    inline void SetResourceRecordSetCount(long long value) { m_resourceRecordSetCountHasBeenSet = true; m_resourceRecordSetCount = value; }

    /**
     * <p>Total number of resource record sets in the hosted zone.</p>
     */
    inline HostedZone& WithResourceRecordSetCount(long long value) { SetResourceRecordSetCount(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;
    HostedZoneConfig m_config;
    bool m_configHasBeenSet;
    long long m_resourceRecordSetCount;
    bool m_resourceRecordSetCountHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
