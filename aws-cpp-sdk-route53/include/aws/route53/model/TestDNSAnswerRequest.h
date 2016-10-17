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
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>Gets the value that Amazon Route 53 returns in response to a DNS request for
   * a specified record name and type. You can optionally specify the IP address of a
   * DNS resolver, an EDNS0 client subnet IP address, and a subnet mask. </p> <p>
   * <b>Parameters</b> </p> <dl> <dt>hostedzoneid</dt> <dd> <p>The ID of the hosted
   * zone that you want Amazon Route 53 to simulate a query for.</p> </dd>
   * <dt>recordname</dt> <dd> <p>The name of the resource record set that you want
   * Amazon Route 53 to simulate a query for.</p> </dd> <dt>recordtype</dt> <dd>
   * <p>The type of the resource record set.</p> </dd> <dt>resolverip (optional)</dt>
   * <dd> <p>If you want to simulate a request from a specific DNS resolver, specify
   * the IP address for that resolver. If you omit this value,
   * <code>TestDNSAnswer</code> uses the IP address of a DNS resolver in the AWS US
   * East region. </p> </dd> <dt>edns0clientsubnetip (optional)</dt> <dd> <p>If the
   * resolver that you specified for <code>resolverip</code> supports EDNS0, specify
   * the IP address of a client in the applicable location. </p> </dd>
   * <dt>edns0clientsubnetmask (optional)</dt> <dd> <p>If you specify an IP address
   * for <code>edns0clientsubnetip</code>, you can optionally specify the number of
   * bits of the IP address that you want the checking tool to include in the DNS
   * query. For example, if you specify <code>192.0.2.44</code> for
   * <code>edns0clientsubnetip</code> and <code>24</code> for
   * <code>edns0clientsubnetmask</code>, the checking tool will simulate a request
   * from <code>192.0.2.0/24</code>. The default value is 24 bits. </p> </dd> </dl>
   */
  class AWS_ROUTE53_API TestDNSAnswerRequest : public Route53Request
  {
  public:
    TestDNSAnswerRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The ID of the hosted zone that you want Amazon Route 53 to simulate a query
     * for.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that you want Amazon Route 53 to simulate a query
     * for.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that you want Amazon Route 53 to simulate a query
     * for.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that you want Amazon Route 53 to simulate a query
     * for.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that you want Amazon Route 53 to simulate a query
     * for.</p>
     */
    inline TestDNSAnswerRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that you want Amazon Route 53 to simulate a query
     * for.</p>
     */
    inline TestDNSAnswerRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that you want Amazon Route 53 to simulate a query
     * for.</p>
     */
    inline TestDNSAnswerRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The name of the resource record set that you want Amazon Route 53 to simulate
     * a query for.</p>
     */
    inline const Aws::String& GetRecordName() const{ return m_recordName; }

    /**
     * <p>The name of the resource record set that you want Amazon Route 53 to simulate
     * a query for.</p>
     */
    inline void SetRecordName(const Aws::String& value) { m_recordNameHasBeenSet = true; m_recordName = value; }

    /**
     * <p>The name of the resource record set that you want Amazon Route 53 to simulate
     * a query for.</p>
     */
    inline void SetRecordName(Aws::String&& value) { m_recordNameHasBeenSet = true; m_recordName = value; }

    /**
     * <p>The name of the resource record set that you want Amazon Route 53 to simulate
     * a query for.</p>
     */
    inline void SetRecordName(const char* value) { m_recordNameHasBeenSet = true; m_recordName.assign(value); }

    /**
     * <p>The name of the resource record set that you want Amazon Route 53 to simulate
     * a query for.</p>
     */
    inline TestDNSAnswerRequest& WithRecordName(const Aws::String& value) { SetRecordName(value); return *this;}

    /**
     * <p>The name of the resource record set that you want Amazon Route 53 to simulate
     * a query for.</p>
     */
    inline TestDNSAnswerRequest& WithRecordName(Aws::String&& value) { SetRecordName(value); return *this;}

    /**
     * <p>The name of the resource record set that you want Amazon Route 53 to simulate
     * a query for.</p>
     */
    inline TestDNSAnswerRequest& WithRecordName(const char* value) { SetRecordName(value); return *this;}

    /**
     * <p>The type of the resource record set.</p>
     */
    inline const RRType& GetRecordType() const{ return m_recordType; }

    /**
     * <p>The type of the resource record set.</p>
     */
    inline void SetRecordType(const RRType& value) { m_recordTypeHasBeenSet = true; m_recordType = value; }

    /**
     * <p>The type of the resource record set.</p>
     */
    inline void SetRecordType(RRType&& value) { m_recordTypeHasBeenSet = true; m_recordType = value; }

    /**
     * <p>The type of the resource record set.</p>
     */
    inline TestDNSAnswerRequest& WithRecordType(const RRType& value) { SetRecordType(value); return *this;}

    /**
     * <p>The type of the resource record set.</p>
     */
    inline TestDNSAnswerRequest& WithRecordType(RRType&& value) { SetRecordType(value); return *this;}

    /**
     * <p>If you want to simulate a request from a specific DNS resolver, specify the
     * IP address for that resolver. If you omit this value, <code>TestDnsAnswer</code>
     * uses the IP address of a DNS resolver in the AWS US East region.</p>
     */
    inline const Aws::String& GetResolverIP() const{ return m_resolverIP; }

    /**
     * <p>If you want to simulate a request from a specific DNS resolver, specify the
     * IP address for that resolver. If you omit this value, <code>TestDnsAnswer</code>
     * uses the IP address of a DNS resolver in the AWS US East region.</p>
     */
    inline void SetResolverIP(const Aws::String& value) { m_resolverIPHasBeenSet = true; m_resolverIP = value; }

    /**
     * <p>If you want to simulate a request from a specific DNS resolver, specify the
     * IP address for that resolver. If you omit this value, <code>TestDnsAnswer</code>
     * uses the IP address of a DNS resolver in the AWS US East region.</p>
     */
    inline void SetResolverIP(Aws::String&& value) { m_resolverIPHasBeenSet = true; m_resolverIP = value; }

    /**
     * <p>If you want to simulate a request from a specific DNS resolver, specify the
     * IP address for that resolver. If you omit this value, <code>TestDnsAnswer</code>
     * uses the IP address of a DNS resolver in the AWS US East region.</p>
     */
    inline void SetResolverIP(const char* value) { m_resolverIPHasBeenSet = true; m_resolverIP.assign(value); }

    /**
     * <p>If you want to simulate a request from a specific DNS resolver, specify the
     * IP address for that resolver. If you omit this value, <code>TestDnsAnswer</code>
     * uses the IP address of a DNS resolver in the AWS US East region.</p>
     */
    inline TestDNSAnswerRequest& WithResolverIP(const Aws::String& value) { SetResolverIP(value); return *this;}

    /**
     * <p>If you want to simulate a request from a specific DNS resolver, specify the
     * IP address for that resolver. If you omit this value, <code>TestDnsAnswer</code>
     * uses the IP address of a DNS resolver in the AWS US East region.</p>
     */
    inline TestDNSAnswerRequest& WithResolverIP(Aws::String&& value) { SetResolverIP(value); return *this;}

    /**
     * <p>If you want to simulate a request from a specific DNS resolver, specify the
     * IP address for that resolver. If you omit this value, <code>TestDnsAnswer</code>
     * uses the IP address of a DNS resolver in the AWS US East region.</p>
     */
    inline TestDNSAnswerRequest& WithResolverIP(const char* value) { SetResolverIP(value); return *this;}

    /**
     * <p>If the resolver that you specified for resolverip supports EDNS0, specify the
     * IP address of a client in the applicable location.</p>
     */
    inline const Aws::String& GetEDNS0ClientSubnetIP() const{ return m_eDNS0ClientSubnetIP; }

    /**
     * <p>If the resolver that you specified for resolverip supports EDNS0, specify the
     * IP address of a client in the applicable location.</p>
     */
    inline void SetEDNS0ClientSubnetIP(const Aws::String& value) { m_eDNS0ClientSubnetIPHasBeenSet = true; m_eDNS0ClientSubnetIP = value; }

    /**
     * <p>If the resolver that you specified for resolverip supports EDNS0, specify the
     * IP address of a client in the applicable location.</p>
     */
    inline void SetEDNS0ClientSubnetIP(Aws::String&& value) { m_eDNS0ClientSubnetIPHasBeenSet = true; m_eDNS0ClientSubnetIP = value; }

    /**
     * <p>If the resolver that you specified for resolverip supports EDNS0, specify the
     * IP address of a client in the applicable location.</p>
     */
    inline void SetEDNS0ClientSubnetIP(const char* value) { m_eDNS0ClientSubnetIPHasBeenSet = true; m_eDNS0ClientSubnetIP.assign(value); }

    /**
     * <p>If the resolver that you specified for resolverip supports EDNS0, specify the
     * IP address of a client in the applicable location.</p>
     */
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetIP(const Aws::String& value) { SetEDNS0ClientSubnetIP(value); return *this;}

    /**
     * <p>If the resolver that you specified for resolverip supports EDNS0, specify the
     * IP address of a client in the applicable location.</p>
     */
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetIP(Aws::String&& value) { SetEDNS0ClientSubnetIP(value); return *this;}

    /**
     * <p>If the resolver that you specified for resolverip supports EDNS0, specify the
     * IP address of a client in the applicable location.</p>
     */
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetIP(const char* value) { SetEDNS0ClientSubnetIP(value); return *this;}

    /**
     * <p>If you specify an IP address for <code>edns0clientsubnetip</code>, you can
     * optionally specify the number of bits of the IP address that you want the
     * checking tool to include in the DNS query. For example, if you specify
     * <code>192.0.2.44</code> for <code>edns0clientsubnetip</code> and <code>24</code>
     * for <code>edns0clientsubnetmask</code>, the checking tool will simulate a
     * request from 192.0.2.0/24. The default value is 24 bits.</p>
     */
    inline const Aws::String& GetEDNS0ClientSubnetMask() const{ return m_eDNS0ClientSubnetMask; }

    /**
     * <p>If you specify an IP address for <code>edns0clientsubnetip</code>, you can
     * optionally specify the number of bits of the IP address that you want the
     * checking tool to include in the DNS query. For example, if you specify
     * <code>192.0.2.44</code> for <code>edns0clientsubnetip</code> and <code>24</code>
     * for <code>edns0clientsubnetmask</code>, the checking tool will simulate a
     * request from 192.0.2.0/24. The default value is 24 bits.</p>
     */
    inline void SetEDNS0ClientSubnetMask(const Aws::String& value) { m_eDNS0ClientSubnetMaskHasBeenSet = true; m_eDNS0ClientSubnetMask = value; }

    /**
     * <p>If you specify an IP address for <code>edns0clientsubnetip</code>, you can
     * optionally specify the number of bits of the IP address that you want the
     * checking tool to include in the DNS query. For example, if you specify
     * <code>192.0.2.44</code> for <code>edns0clientsubnetip</code> and <code>24</code>
     * for <code>edns0clientsubnetmask</code>, the checking tool will simulate a
     * request from 192.0.2.0/24. The default value is 24 bits.</p>
     */
    inline void SetEDNS0ClientSubnetMask(Aws::String&& value) { m_eDNS0ClientSubnetMaskHasBeenSet = true; m_eDNS0ClientSubnetMask = value; }

    /**
     * <p>If you specify an IP address for <code>edns0clientsubnetip</code>, you can
     * optionally specify the number of bits of the IP address that you want the
     * checking tool to include in the DNS query. For example, if you specify
     * <code>192.0.2.44</code> for <code>edns0clientsubnetip</code> and <code>24</code>
     * for <code>edns0clientsubnetmask</code>, the checking tool will simulate a
     * request from 192.0.2.0/24. The default value is 24 bits.</p>
     */
    inline void SetEDNS0ClientSubnetMask(const char* value) { m_eDNS0ClientSubnetMaskHasBeenSet = true; m_eDNS0ClientSubnetMask.assign(value); }

    /**
     * <p>If you specify an IP address for <code>edns0clientsubnetip</code>, you can
     * optionally specify the number of bits of the IP address that you want the
     * checking tool to include in the DNS query. For example, if you specify
     * <code>192.0.2.44</code> for <code>edns0clientsubnetip</code> and <code>24</code>
     * for <code>edns0clientsubnetmask</code>, the checking tool will simulate a
     * request from 192.0.2.0/24. The default value is 24 bits.</p>
     */
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetMask(const Aws::String& value) { SetEDNS0ClientSubnetMask(value); return *this;}

    /**
     * <p>If you specify an IP address for <code>edns0clientsubnetip</code>, you can
     * optionally specify the number of bits of the IP address that you want the
     * checking tool to include in the DNS query. For example, if you specify
     * <code>192.0.2.44</code> for <code>edns0clientsubnetip</code> and <code>24</code>
     * for <code>edns0clientsubnetmask</code>, the checking tool will simulate a
     * request from 192.0.2.0/24. The default value is 24 bits.</p>
     */
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetMask(Aws::String&& value) { SetEDNS0ClientSubnetMask(value); return *this;}

    /**
     * <p>If you specify an IP address for <code>edns0clientsubnetip</code>, you can
     * optionally specify the number of bits of the IP address that you want the
     * checking tool to include in the DNS query. For example, if you specify
     * <code>192.0.2.44</code> for <code>edns0clientsubnetip</code> and <code>24</code>
     * for <code>edns0clientsubnetmask</code>, the checking tool will simulate a
     * request from 192.0.2.0/24. The default value is 24 bits.</p>
     */
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetMask(const char* value) { SetEDNS0ClientSubnetMask(value); return *this;}

  private:
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
    Aws::String m_recordName;
    bool m_recordNameHasBeenSet;
    RRType m_recordType;
    bool m_recordTypeHasBeenSet;
    Aws::String m_resolverIP;
    bool m_resolverIPHasBeenSet;
    Aws::String m_eDNS0ClientSubnetIP;
    bool m_eDNS0ClientSubnetIPHasBeenSet;
    Aws::String m_eDNS0ClientSubnetMask;
    bool m_eDNS0ClientSubnetMaskHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
