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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HostedZoneConfig.h>
#include <aws/route53/model/LinkedService.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains general information about the hosted
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HostedZone">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API HostedZone
  {
  public:
    HostedZone();
    HostedZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    HostedZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline HostedZone& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline HostedZone& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline HostedZone& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p> <p>For information about how to
     * specify characters other than <code>a-z</code>, <code>0-9</code>, and
     * <code>-</code> (hyphen) and how to specify internationalized domain names, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p> <p>For information about how to
     * specify characters other than <code>a-z</code>, <code>0-9</code>, and
     * <code>-</code> (hyphen) and how to specify internationalized domain names, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p> <p>For information about how to
     * specify characters other than <code>a-z</code>, <code>0-9</code>, and
     * <code>-</code> (hyphen) and how to specify internationalized domain names, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p> <p>For information about how to
     * specify characters other than <code>a-z</code>, <code>0-9</code>, and
     * <code>-</code> (hyphen) and how to specify internationalized domain names, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p> <p>For information about how to
     * specify characters other than <code>a-z</code>, <code>0-9</code>, and
     * <code>-</code> (hyphen) and how to specify internationalized domain names, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p> <p>For information about how to
     * specify characters other than <code>a-z</code>, <code>0-9</code>, and
     * <code>-</code> (hyphen) and how to specify internationalized domain names, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>.</p>
     */
    inline HostedZone& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p> <p>For information about how to
     * specify characters other than <code>a-z</code>, <code>0-9</code>, and
     * <code>-</code> (hyphen) and how to specify internationalized domain names, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>.</p>
     */
    inline HostedZone& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain. For public hosted zones, this is the name that you
     * have registered with your DNS registrar.</p> <p>For information about how to
     * specify characters other than <code>a-z</code>, <code>0-9</code>, and
     * <code>-</code> (hyphen) and how to specify internationalized domain names, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>.</p>
     */
    inline HostedZone& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the hosted zone.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the hosted zone.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the hosted zone.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the hosted zone.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the hosted zone.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the hosted zone.</p>
     */
    inline HostedZone& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the hosted zone.</p>
     */
    inline HostedZone& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the hosted zone.</p>
     */
    inline HostedZone& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>A complex type that includes the <code>Comment</code> and
     * <code>PrivateZone</code> elements. If you omitted the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements from the
     * request, the <code>Config</code> and <code>Comment</code> elements don't appear
     * in the response.</p>
     */
    inline const HostedZoneConfig& GetConfig() const{ return m_config; }

    /**
     * <p>A complex type that includes the <code>Comment</code> and
     * <code>PrivateZone</code> elements. If you omitted the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements from the
     * request, the <code>Config</code> and <code>Comment</code> elements don't appear
     * in the response.</p>
     */
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    /**
     * <p>A complex type that includes the <code>Comment</code> and
     * <code>PrivateZone</code> elements. If you omitted the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements from the
     * request, the <code>Config</code> and <code>Comment</code> elements don't appear
     * in the response.</p>
     */
    inline void SetConfig(const HostedZoneConfig& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>A complex type that includes the <code>Comment</code> and
     * <code>PrivateZone</code> elements. If you omitted the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements from the
     * request, the <code>Config</code> and <code>Comment</code> elements don't appear
     * in the response.</p>
     */
    inline void SetConfig(HostedZoneConfig&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    /**
     * <p>A complex type that includes the <code>Comment</code> and
     * <code>PrivateZone</code> elements. If you omitted the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements from the
     * request, the <code>Config</code> and <code>Comment</code> elements don't appear
     * in the response.</p>
     */
    inline HostedZone& WithConfig(const HostedZoneConfig& value) { SetConfig(value); return *this;}

    /**
     * <p>A complex type that includes the <code>Comment</code> and
     * <code>PrivateZone</code> elements. If you omitted the
     * <code>HostedZoneConfig</code> and <code>Comment</code> elements from the
     * request, the <code>Config</code> and <code>Comment</code> elements don't appear
     * in the response.</p>
     */
    inline HostedZone& WithConfig(HostedZoneConfig&& value) { SetConfig(std::move(value)); return *this;}


    /**
     * <p>The number of resource record sets in the hosted zone.</p>
     */
    inline long long GetResourceRecordSetCount() const{ return m_resourceRecordSetCount; }

    /**
     * <p>The number of resource record sets in the hosted zone.</p>
     */
    inline bool ResourceRecordSetCountHasBeenSet() const { return m_resourceRecordSetCountHasBeenSet; }

    /**
     * <p>The number of resource record sets in the hosted zone.</p>
     */
    inline void SetResourceRecordSetCount(long long value) { m_resourceRecordSetCountHasBeenSet = true; m_resourceRecordSetCount = value; }

    /**
     * <p>The number of resource record sets in the hosted zone.</p>
     */
    inline HostedZone& WithResourceRecordSetCount(long long value) { SetResourceRecordSetCount(value); return *this;}


    /**
     * <p>If the hosted zone was created by another service, the service that created
     * the hosted zone. When a hosted zone is created by another service, you can't
     * edit or delete it using Route 53. </p>
     */
    inline const LinkedService& GetLinkedService() const{ return m_linkedService; }

    /**
     * <p>If the hosted zone was created by another service, the service that created
     * the hosted zone. When a hosted zone is created by another service, you can't
     * edit or delete it using Route 53. </p>
     */
    inline bool LinkedServiceHasBeenSet() const { return m_linkedServiceHasBeenSet; }

    /**
     * <p>If the hosted zone was created by another service, the service that created
     * the hosted zone. When a hosted zone is created by another service, you can't
     * edit or delete it using Route 53. </p>
     */
    inline void SetLinkedService(const LinkedService& value) { m_linkedServiceHasBeenSet = true; m_linkedService = value; }

    /**
     * <p>If the hosted zone was created by another service, the service that created
     * the hosted zone. When a hosted zone is created by another service, you can't
     * edit or delete it using Route 53. </p>
     */
    inline void SetLinkedService(LinkedService&& value) { m_linkedServiceHasBeenSet = true; m_linkedService = std::move(value); }

    /**
     * <p>If the hosted zone was created by another service, the service that created
     * the hosted zone. When a hosted zone is created by another service, you can't
     * edit or delete it using Route 53. </p>
     */
    inline HostedZone& WithLinkedService(const LinkedService& value) { SetLinkedService(value); return *this;}

    /**
     * <p>If the hosted zone was created by another service, the service that created
     * the hosted zone. When a hosted zone is created by another service, you can't
     * edit or delete it using Route 53. </p>
     */
    inline HostedZone& WithLinkedService(LinkedService&& value) { SetLinkedService(std::move(value)); return *this;}

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

    LinkedService m_linkedService;
    bool m_linkedServiceHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
