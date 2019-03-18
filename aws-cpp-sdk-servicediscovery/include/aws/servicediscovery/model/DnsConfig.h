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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/RoutingPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/DnsRecord.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the Amazon Route 53 DNS
   * records that you want AWS Cloud Map to create when you register an
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DnsConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API DnsConfig
  {
  public:
    DnsConfig();
    DnsConfig(Aws::Utils::Json::JsonView jsonValue);
    DnsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The routing policy that you want to apply to all Route 53 DNS records that
     * AWS Cloud Map creates when you register an instance and specify this
     * service.</p> <note> <p>If you want to use this service to register instances
     * that create alias records, specify <code>WEIGHTED</code> for the routing
     * policy.</p> </note> <p>You can specify the following values:</p> <p>
     * <b>MULTIVALUE</b> </p> <p>If you define a health check for the service and the
     * health check is healthy, Route 53 returns the applicable value for up to eight
     * instances.</p> <p>For example, suppose the service includes configurations for
     * one A record and a health check, and you use the service to register 10
     * instances. Route 53 responds to DNS queries with IP addresses for up to eight
     * healthy instances. If fewer than eight instances are healthy, Route 53 responds
     * to every DNS query with the IP addresses for all of the healthy instances.</p>
     * <p>If you don't define a health check for the service, Route 53 assumes that all
     * instances are healthy and returns the values for up to eight instances.</p>
     * <p>For more information about the multivalue routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-multivalue">Multivalue
     * Answer Routing</a> in the <i>Route 53 Developer Guide</i>.</p> <p>
     * <b>WEIGHTED</b> </p> <p>Route 53 returns the applicable value from one randomly
     * selected instance from among the instances that you registered using the same
     * service. Currently, all records have the same weight, so you can't route more or
     * less traffic to any instances.</p> <p>For example, suppose the service includes
     * configurations for one A record and a health check, and you use the service to
     * register 10 instances. Route 53 responds to DNS queries with the IP address for
     * one randomly selected instance from among the healthy instances. If no instances
     * are healthy, Route 53 responds to DNS queries as if all of the instances were
     * healthy.</p> <p>If you don't define a health check for the service, Route 53
     * assumes that all instances are healthy and returns the applicable value for one
     * randomly selected instance.</p> <p>For more information about the weighted
     * routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-weighted">Weighted
     * Routing</a> in the <i>Route 53 Developer Guide</i>.</p>
     */
    inline const RoutingPolicy& GetRoutingPolicy() const{ return m_routingPolicy; }

    /**
     * <p>The routing policy that you want to apply to all Route 53 DNS records that
     * AWS Cloud Map creates when you register an instance and specify this
     * service.</p> <note> <p>If you want to use this service to register instances
     * that create alias records, specify <code>WEIGHTED</code> for the routing
     * policy.</p> </note> <p>You can specify the following values:</p> <p>
     * <b>MULTIVALUE</b> </p> <p>If you define a health check for the service and the
     * health check is healthy, Route 53 returns the applicable value for up to eight
     * instances.</p> <p>For example, suppose the service includes configurations for
     * one A record and a health check, and you use the service to register 10
     * instances. Route 53 responds to DNS queries with IP addresses for up to eight
     * healthy instances. If fewer than eight instances are healthy, Route 53 responds
     * to every DNS query with the IP addresses for all of the healthy instances.</p>
     * <p>If you don't define a health check for the service, Route 53 assumes that all
     * instances are healthy and returns the values for up to eight instances.</p>
     * <p>For more information about the multivalue routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-multivalue">Multivalue
     * Answer Routing</a> in the <i>Route 53 Developer Guide</i>.</p> <p>
     * <b>WEIGHTED</b> </p> <p>Route 53 returns the applicable value from one randomly
     * selected instance from among the instances that you registered using the same
     * service. Currently, all records have the same weight, so you can't route more or
     * less traffic to any instances.</p> <p>For example, suppose the service includes
     * configurations for one A record and a health check, and you use the service to
     * register 10 instances. Route 53 responds to DNS queries with the IP address for
     * one randomly selected instance from among the healthy instances. If no instances
     * are healthy, Route 53 responds to DNS queries as if all of the instances were
     * healthy.</p> <p>If you don't define a health check for the service, Route 53
     * assumes that all instances are healthy and returns the applicable value for one
     * randomly selected instance.</p> <p>For more information about the weighted
     * routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-weighted">Weighted
     * Routing</a> in the <i>Route 53 Developer Guide</i>.</p>
     */
    inline bool RoutingPolicyHasBeenSet() const { return m_routingPolicyHasBeenSet; }

    /**
     * <p>The routing policy that you want to apply to all Route 53 DNS records that
     * AWS Cloud Map creates when you register an instance and specify this
     * service.</p> <note> <p>If you want to use this service to register instances
     * that create alias records, specify <code>WEIGHTED</code> for the routing
     * policy.</p> </note> <p>You can specify the following values:</p> <p>
     * <b>MULTIVALUE</b> </p> <p>If you define a health check for the service and the
     * health check is healthy, Route 53 returns the applicable value for up to eight
     * instances.</p> <p>For example, suppose the service includes configurations for
     * one A record and a health check, and you use the service to register 10
     * instances. Route 53 responds to DNS queries with IP addresses for up to eight
     * healthy instances. If fewer than eight instances are healthy, Route 53 responds
     * to every DNS query with the IP addresses for all of the healthy instances.</p>
     * <p>If you don't define a health check for the service, Route 53 assumes that all
     * instances are healthy and returns the values for up to eight instances.</p>
     * <p>For more information about the multivalue routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-multivalue">Multivalue
     * Answer Routing</a> in the <i>Route 53 Developer Guide</i>.</p> <p>
     * <b>WEIGHTED</b> </p> <p>Route 53 returns the applicable value from one randomly
     * selected instance from among the instances that you registered using the same
     * service. Currently, all records have the same weight, so you can't route more or
     * less traffic to any instances.</p> <p>For example, suppose the service includes
     * configurations for one A record and a health check, and you use the service to
     * register 10 instances. Route 53 responds to DNS queries with the IP address for
     * one randomly selected instance from among the healthy instances. If no instances
     * are healthy, Route 53 responds to DNS queries as if all of the instances were
     * healthy.</p> <p>If you don't define a health check for the service, Route 53
     * assumes that all instances are healthy and returns the applicable value for one
     * randomly selected instance.</p> <p>For more information about the weighted
     * routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-weighted">Weighted
     * Routing</a> in the <i>Route 53 Developer Guide</i>.</p>
     */
    inline void SetRoutingPolicy(const RoutingPolicy& value) { m_routingPolicyHasBeenSet = true; m_routingPolicy = value; }

    /**
     * <p>The routing policy that you want to apply to all Route 53 DNS records that
     * AWS Cloud Map creates when you register an instance and specify this
     * service.</p> <note> <p>If you want to use this service to register instances
     * that create alias records, specify <code>WEIGHTED</code> for the routing
     * policy.</p> </note> <p>You can specify the following values:</p> <p>
     * <b>MULTIVALUE</b> </p> <p>If you define a health check for the service and the
     * health check is healthy, Route 53 returns the applicable value for up to eight
     * instances.</p> <p>For example, suppose the service includes configurations for
     * one A record and a health check, and you use the service to register 10
     * instances. Route 53 responds to DNS queries with IP addresses for up to eight
     * healthy instances. If fewer than eight instances are healthy, Route 53 responds
     * to every DNS query with the IP addresses for all of the healthy instances.</p>
     * <p>If you don't define a health check for the service, Route 53 assumes that all
     * instances are healthy and returns the values for up to eight instances.</p>
     * <p>For more information about the multivalue routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-multivalue">Multivalue
     * Answer Routing</a> in the <i>Route 53 Developer Guide</i>.</p> <p>
     * <b>WEIGHTED</b> </p> <p>Route 53 returns the applicable value from one randomly
     * selected instance from among the instances that you registered using the same
     * service. Currently, all records have the same weight, so you can't route more or
     * less traffic to any instances.</p> <p>For example, suppose the service includes
     * configurations for one A record and a health check, and you use the service to
     * register 10 instances. Route 53 responds to DNS queries with the IP address for
     * one randomly selected instance from among the healthy instances. If no instances
     * are healthy, Route 53 responds to DNS queries as if all of the instances were
     * healthy.</p> <p>If you don't define a health check for the service, Route 53
     * assumes that all instances are healthy and returns the applicable value for one
     * randomly selected instance.</p> <p>For more information about the weighted
     * routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-weighted">Weighted
     * Routing</a> in the <i>Route 53 Developer Guide</i>.</p>
     */
    inline void SetRoutingPolicy(RoutingPolicy&& value) { m_routingPolicyHasBeenSet = true; m_routingPolicy = std::move(value); }

    /**
     * <p>The routing policy that you want to apply to all Route 53 DNS records that
     * AWS Cloud Map creates when you register an instance and specify this
     * service.</p> <note> <p>If you want to use this service to register instances
     * that create alias records, specify <code>WEIGHTED</code> for the routing
     * policy.</p> </note> <p>You can specify the following values:</p> <p>
     * <b>MULTIVALUE</b> </p> <p>If you define a health check for the service and the
     * health check is healthy, Route 53 returns the applicable value for up to eight
     * instances.</p> <p>For example, suppose the service includes configurations for
     * one A record and a health check, and you use the service to register 10
     * instances. Route 53 responds to DNS queries with IP addresses for up to eight
     * healthy instances. If fewer than eight instances are healthy, Route 53 responds
     * to every DNS query with the IP addresses for all of the healthy instances.</p>
     * <p>If you don't define a health check for the service, Route 53 assumes that all
     * instances are healthy and returns the values for up to eight instances.</p>
     * <p>For more information about the multivalue routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-multivalue">Multivalue
     * Answer Routing</a> in the <i>Route 53 Developer Guide</i>.</p> <p>
     * <b>WEIGHTED</b> </p> <p>Route 53 returns the applicable value from one randomly
     * selected instance from among the instances that you registered using the same
     * service. Currently, all records have the same weight, so you can't route more or
     * less traffic to any instances.</p> <p>For example, suppose the service includes
     * configurations for one A record and a health check, and you use the service to
     * register 10 instances. Route 53 responds to DNS queries with the IP address for
     * one randomly selected instance from among the healthy instances. If no instances
     * are healthy, Route 53 responds to DNS queries as if all of the instances were
     * healthy.</p> <p>If you don't define a health check for the service, Route 53
     * assumes that all instances are healthy and returns the applicable value for one
     * randomly selected instance.</p> <p>For more information about the weighted
     * routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-weighted">Weighted
     * Routing</a> in the <i>Route 53 Developer Guide</i>.</p>
     */
    inline DnsConfig& WithRoutingPolicy(const RoutingPolicy& value) { SetRoutingPolicy(value); return *this;}

    /**
     * <p>The routing policy that you want to apply to all Route 53 DNS records that
     * AWS Cloud Map creates when you register an instance and specify this
     * service.</p> <note> <p>If you want to use this service to register instances
     * that create alias records, specify <code>WEIGHTED</code> for the routing
     * policy.</p> </note> <p>You can specify the following values:</p> <p>
     * <b>MULTIVALUE</b> </p> <p>If you define a health check for the service and the
     * health check is healthy, Route 53 returns the applicable value for up to eight
     * instances.</p> <p>For example, suppose the service includes configurations for
     * one A record and a health check, and you use the service to register 10
     * instances. Route 53 responds to DNS queries with IP addresses for up to eight
     * healthy instances. If fewer than eight instances are healthy, Route 53 responds
     * to every DNS query with the IP addresses for all of the healthy instances.</p>
     * <p>If you don't define a health check for the service, Route 53 assumes that all
     * instances are healthy and returns the values for up to eight instances.</p>
     * <p>For more information about the multivalue routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-multivalue">Multivalue
     * Answer Routing</a> in the <i>Route 53 Developer Guide</i>.</p> <p>
     * <b>WEIGHTED</b> </p> <p>Route 53 returns the applicable value from one randomly
     * selected instance from among the instances that you registered using the same
     * service. Currently, all records have the same weight, so you can't route more or
     * less traffic to any instances.</p> <p>For example, suppose the service includes
     * configurations for one A record and a health check, and you use the service to
     * register 10 instances. Route 53 responds to DNS queries with the IP address for
     * one randomly selected instance from among the healthy instances. If no instances
     * are healthy, Route 53 responds to DNS queries as if all of the instances were
     * healthy.</p> <p>If you don't define a health check for the service, Route 53
     * assumes that all instances are healthy and returns the applicable value for one
     * randomly selected instance.</p> <p>For more information about the weighted
     * routing policy, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/routing-policy.html#routing-policy-weighted">Weighted
     * Routing</a> in the <i>Route 53 Developer Guide</i>.</p>
     */
    inline DnsConfig& WithRoutingPolicy(RoutingPolicy&& value) { SetRoutingPolicy(std::move(value)); return *this;}


    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * DNS record that you want AWS Cloud Map to create when you register an
     * instance.</p>
     */
    inline const Aws::Vector<DnsRecord>& GetDnsRecords() const{ return m_dnsRecords; }

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * DNS record that you want AWS Cloud Map to create when you register an
     * instance.</p>
     */
    inline bool DnsRecordsHasBeenSet() const { return m_dnsRecordsHasBeenSet; }

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * DNS record that you want AWS Cloud Map to create when you register an
     * instance.</p>
     */
    inline void SetDnsRecords(const Aws::Vector<DnsRecord>& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords = value; }

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * DNS record that you want AWS Cloud Map to create when you register an
     * instance.</p>
     */
    inline void SetDnsRecords(Aws::Vector<DnsRecord>&& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords = std::move(value); }

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * DNS record that you want AWS Cloud Map to create when you register an
     * instance.</p>
     */
    inline DnsConfig& WithDnsRecords(const Aws::Vector<DnsRecord>& value) { SetDnsRecords(value); return *this;}

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * DNS record that you want AWS Cloud Map to create when you register an
     * instance.</p>
     */
    inline DnsConfig& WithDnsRecords(Aws::Vector<DnsRecord>&& value) { SetDnsRecords(std::move(value)); return *this;}

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * DNS record that you want AWS Cloud Map to create when you register an
     * instance.</p>
     */
    inline DnsConfig& AddDnsRecords(const DnsRecord& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords.push_back(value); return *this; }

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each Route 53
     * DNS record that you want AWS Cloud Map to create when you register an
     * instance.</p>
     */
    inline DnsConfig& AddDnsRecords(DnsRecord&& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords.push_back(std::move(value)); return *this; }

  private:

    RoutingPolicy m_routingPolicy;
    bool m_routingPolicyHasBeenSet;

    Aws::Vector<DnsRecord> m_dnsRecords;
    bool m_dnsRecordsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
