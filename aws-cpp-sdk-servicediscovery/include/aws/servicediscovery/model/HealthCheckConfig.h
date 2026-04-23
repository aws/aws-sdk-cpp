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
#include <aws/servicediscovery/model/HealthCheckType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
   * an optional health check. If you specify settings for a health check, AWS Cloud
   * Map associates the health check with the records that you specify in
   * <code>DnsConfig</code>.</p> <important> <p>If you specify a health check
   * configuration, you can specify either <code>HealthCheckCustomConfig</code> or
   * <code>HealthCheckConfig</code> but not both.</p> </important> <p>Health checks
   * are basic Route 53 health checks that monitor an AWS endpoint. For information
   * about pricing for health checks, see <a
   * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</p>
   * <p>Note the following about configuring health checks.</p> <p> <b>A and AAAA
   * records</b> </p> <p>If <code>DnsConfig</code> includes configurations for both A
   * and AAAA records, AWS Cloud Map creates a health check that uses the IPv4
   * address to check the health of the resource. If the endpoint that is specified
   * by the IPv4 address is unhealthy, Route 53 considers both the A and AAAA records
   * to be unhealthy. </p> <p> <b>CNAME records</b> </p> <p>You can't specify
   * settings for <code>HealthCheckConfig</code> when the <code>DNSConfig</code>
   * includes <code>CNAME</code> for the value of <code>Type</code>. If you do, the
   * <code>CreateService</code> request will fail with an <code>InvalidInput</code>
   * error.</p> <p> <b>Request interval</b> </p> <p>A Route 53 health checker in each
   * health-checking region sends a health check request to an endpoint every 30
   * seconds. On average, your endpoint receives a health check request about every
   * two seconds. However, health checkers don't coordinate with one another, so
   * you'll sometimes see several requests per second followed by a few seconds with
   * no health checks at all.</p> <p> <b>Health checking regions</b> </p> <p>Health
   * checkers perform checks from all Route 53 health-checking regions. For a list of
   * the current regions, see <a
   * href="http://docs.aws.amazon.com/Route53/latest/APIReference/API_HealthCheckConfig.html#Route53-Type-HealthCheckConfig-Regions">Regions</a>.</p>
   * <p> <b>Alias records</b> </p> <p>When you register an instance, if you include
   * the <code>AWS_ALIAS_DNS_NAME</code> attribute, AWS Cloud Map creates a Route 53
   * alias record. Note the following:</p> <ul> <li> <p>Route 53 automatically sets
   * <code>EvaluateTargetHealth</code> to true for alias records. When
   * <code>EvaluateTargetHealth</code> is true, the alias record inherits the health
   * of the referenced AWS resource. such as an ELB load balancer. For more
   * information, see <a
   * href="http://docs.aws.amazon.com/Route53/latest/APIReference/API_AliasTarget.html#Route53-Type-AliasTarget-EvaluateTargetHealth">EvaluateTargetHealth</a>.</p>
   * </li> <li> <p>If you include <code>HealthCheckConfig</code> and then use the
   * service to register an instance that creates an alias record, Route 53 doesn't
   * create the health check.</p> </li> </ul> <p> <b>Charges for health checks</b>
   * </p> <p>Health checks are basic Route 53 health checks that monitor an AWS
   * endpoint. For information about pricing for health checks, see <a
   * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
   * Pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/HealthCheckConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API HealthCheckConfig
  {
  public:
    HealthCheckConfig();
    HealthCheckConfig(Aws::Utils::Json::JsonView jsonValue);
    HealthCheckConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of health check that you want to create, which indicates how Route
     * 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Route 53 tries to establish a TCP connection. If
     * successful, Route 53 submits an HTTP request and waits for an HTTP status code
     * of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>: Route 53
     * tries to establish a TCP connection. If successful, Route 53 submits an HTTPS
     * request and waits for an HTTP status code of 200 or greater and less than
     * 400.</p> <important> <p>If you specify HTTPS for the value of <code>Type</code>,
     * the endpoint must support TLS v1.0 or later.</p> </important> </li> <li> <p>
     * <b>TCP</b>: Route 53 tries to establish a TCP connection.</p> <p>If you specify
     * <code>TCP</code> for <code>Type</code>, don't specify a value for
     * <code>ResourcePath</code>.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline const HealthCheckType& GetType() const{ return m_type; }

    /**
     * <p>The type of health check that you want to create, which indicates how Route
     * 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Route 53 tries to establish a TCP connection. If
     * successful, Route 53 submits an HTTP request and waits for an HTTP status code
     * of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>: Route 53
     * tries to establish a TCP connection. If successful, Route 53 submits an HTTPS
     * request and waits for an HTTP status code of 200 or greater and less than
     * 400.</p> <important> <p>If you specify HTTPS for the value of <code>Type</code>,
     * the endpoint must support TLS v1.0 or later.</p> </important> </li> <li> <p>
     * <b>TCP</b>: Route 53 tries to establish a TCP connection.</p> <p>If you specify
     * <code>TCP</code> for <code>Type</code>, don't specify a value for
     * <code>ResourcePath</code>.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of health check that you want to create, which indicates how Route
     * 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Route 53 tries to establish a TCP connection. If
     * successful, Route 53 submits an HTTP request and waits for an HTTP status code
     * of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>: Route 53
     * tries to establish a TCP connection. If successful, Route 53 submits an HTTPS
     * request and waits for an HTTP status code of 200 or greater and less than
     * 400.</p> <important> <p>If you specify HTTPS for the value of <code>Type</code>,
     * the endpoint must support TLS v1.0 or later.</p> </important> </li> <li> <p>
     * <b>TCP</b>: Route 53 tries to establish a TCP connection.</p> <p>If you specify
     * <code>TCP</code> for <code>Type</code>, don't specify a value for
     * <code>ResourcePath</code>.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline void SetType(const HealthCheckType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of health check that you want to create, which indicates how Route
     * 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Route 53 tries to establish a TCP connection. If
     * successful, Route 53 submits an HTTP request and waits for an HTTP status code
     * of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>: Route 53
     * tries to establish a TCP connection. If successful, Route 53 submits an HTTPS
     * request and waits for an HTTP status code of 200 or greater and less than
     * 400.</p> <important> <p>If you specify HTTPS for the value of <code>Type</code>,
     * the endpoint must support TLS v1.0 or later.</p> </important> </li> <li> <p>
     * <b>TCP</b>: Route 53 tries to establish a TCP connection.</p> <p>If you specify
     * <code>TCP</code> for <code>Type</code>, don't specify a value for
     * <code>ResourcePath</code>.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline void SetType(HealthCheckType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of health check that you want to create, which indicates how Route
     * 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Route 53 tries to establish a TCP connection. If
     * successful, Route 53 submits an HTTP request and waits for an HTTP status code
     * of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>: Route 53
     * tries to establish a TCP connection. If successful, Route 53 submits an HTTPS
     * request and waits for an HTTP status code of 200 or greater and less than
     * 400.</p> <important> <p>If you specify HTTPS for the value of <code>Type</code>,
     * the endpoint must support TLS v1.0 or later.</p> </important> </li> <li> <p>
     * <b>TCP</b>: Route 53 tries to establish a TCP connection.</p> <p>If you specify
     * <code>TCP</code> for <code>Type</code>, don't specify a value for
     * <code>ResourcePath</code>.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline HealthCheckConfig& WithType(const HealthCheckType& value) { SetType(value); return *this;}

    /**
     * <p>The type of health check that you want to create, which indicates how Route
     * 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Route 53 tries to establish a TCP connection. If
     * successful, Route 53 submits an HTTP request and waits for an HTTP status code
     * of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>: Route 53
     * tries to establish a TCP connection. If successful, Route 53 submits an HTTPS
     * request and waits for an HTTP status code of 200 or greater and less than
     * 400.</p> <important> <p>If you specify HTTPS for the value of <code>Type</code>,
     * the endpoint must support TLS v1.0 or later.</p> </important> </li> <li> <p>
     * <b>TCP</b>: Route 53 tries to establish a TCP connection.</p> <p>If you specify
     * <code>TCP</code> for <code>Type</code>, don't specify a value for
     * <code>ResourcePath</code>.</p> </li> </ul> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline HealthCheckConfig& WithType(HealthCheckType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The path that you want Route 53 to request when performing health checks. The
     * path can be any value for which your endpoint will return an HTTP status code of
     * 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Route 53 automatically adds the
     * DNS name for the service. If you don't specify a value for
     * <code>ResourcePath</code>, the default value is <code>/</code>.</p> <p>If you
     * specify <code>TCP</code> for <code>Type</code>, you must <i>not</i> specify a
     * value for <code>ResourcePath</code>.</p>
     */
    inline const Aws::String& GetResourcePath() const{ return m_resourcePath; }

    /**
     * <p>The path that you want Route 53 to request when performing health checks. The
     * path can be any value for which your endpoint will return an HTTP status code of
     * 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Route 53 automatically adds the
     * DNS name for the service. If you don't specify a value for
     * <code>ResourcePath</code>, the default value is <code>/</code>.</p> <p>If you
     * specify <code>TCP</code> for <code>Type</code>, you must <i>not</i> specify a
     * value for <code>ResourcePath</code>.</p>
     */
    inline bool ResourcePathHasBeenSet() const { return m_resourcePathHasBeenSet; }

    /**
     * <p>The path that you want Route 53 to request when performing health checks. The
     * path can be any value for which your endpoint will return an HTTP status code of
     * 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Route 53 automatically adds the
     * DNS name for the service. If you don't specify a value for
     * <code>ResourcePath</code>, the default value is <code>/</code>.</p> <p>If you
     * specify <code>TCP</code> for <code>Type</code>, you must <i>not</i> specify a
     * value for <code>ResourcePath</code>.</p>
     */
    inline void SetResourcePath(const Aws::String& value) { m_resourcePathHasBeenSet = true; m_resourcePath = value; }

    /**
     * <p>The path that you want Route 53 to request when performing health checks. The
     * path can be any value for which your endpoint will return an HTTP status code of
     * 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Route 53 automatically adds the
     * DNS name for the service. If you don't specify a value for
     * <code>ResourcePath</code>, the default value is <code>/</code>.</p> <p>If you
     * specify <code>TCP</code> for <code>Type</code>, you must <i>not</i> specify a
     * value for <code>ResourcePath</code>.</p>
     */
    inline void SetResourcePath(Aws::String&& value) { m_resourcePathHasBeenSet = true; m_resourcePath = std::move(value); }

    /**
     * <p>The path that you want Route 53 to request when performing health checks. The
     * path can be any value for which your endpoint will return an HTTP status code of
     * 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Route 53 automatically adds the
     * DNS name for the service. If you don't specify a value for
     * <code>ResourcePath</code>, the default value is <code>/</code>.</p> <p>If you
     * specify <code>TCP</code> for <code>Type</code>, you must <i>not</i> specify a
     * value for <code>ResourcePath</code>.</p>
     */
    inline void SetResourcePath(const char* value) { m_resourcePathHasBeenSet = true; m_resourcePath.assign(value); }

    /**
     * <p>The path that you want Route 53 to request when performing health checks. The
     * path can be any value for which your endpoint will return an HTTP status code of
     * 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Route 53 automatically adds the
     * DNS name for the service. If you don't specify a value for
     * <code>ResourcePath</code>, the default value is <code>/</code>.</p> <p>If you
     * specify <code>TCP</code> for <code>Type</code>, you must <i>not</i> specify a
     * value for <code>ResourcePath</code>.</p>
     */
    inline HealthCheckConfig& WithResourcePath(const Aws::String& value) { SetResourcePath(value); return *this;}

    /**
     * <p>The path that you want Route 53 to request when performing health checks. The
     * path can be any value for which your endpoint will return an HTTP status code of
     * 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Route 53 automatically adds the
     * DNS name for the service. If you don't specify a value for
     * <code>ResourcePath</code>, the default value is <code>/</code>.</p> <p>If you
     * specify <code>TCP</code> for <code>Type</code>, you must <i>not</i> specify a
     * value for <code>ResourcePath</code>.</p>
     */
    inline HealthCheckConfig& WithResourcePath(Aws::String&& value) { SetResourcePath(std::move(value)); return *this;}

    /**
     * <p>The path that you want Route 53 to request when performing health checks. The
     * path can be any value for which your endpoint will return an HTTP status code of
     * 2xx or 3xx when the endpoint is healthy, such as the file
     * <code>/docs/route53-health-check.html</code>. Route 53 automatically adds the
     * DNS name for the service. If you don't specify a value for
     * <code>ResourcePath</code>, the default value is <code>/</code>.</p> <p>If you
     * specify <code>TCP</code> for <code>Type</code>, you must <i>not</i> specify a
     * value for <code>ResourcePath</code>.</p>
     */
    inline HealthCheckConfig& WithResourcePath(const char* value) { SetResourcePath(value); return *this;}


    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Route 53 to change the current status of the endpoint from unhealthy to
     * healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline int GetFailureThreshold() const{ return m_failureThreshold; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Route 53 to change the current status of the endpoint from unhealthy to
     * healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline bool FailureThresholdHasBeenSet() const { return m_failureThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Route 53 to change the current status of the endpoint from unhealthy to
     * healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline void SetFailureThreshold(int value) { m_failureThresholdHasBeenSet = true; m_failureThreshold = value; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Route 53 to change the current status of the endpoint from unhealthy to
     * healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Route 53
     * Developer Guide</i>.</p>
     */
    inline HealthCheckConfig& WithFailureThreshold(int value) { SetFailureThreshold(value); return *this;}

  private:

    HealthCheckType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_resourcePath;
    bool m_resourcePathHasBeenSet;

    int m_failureThreshold;
    bool m_failureThresholdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
