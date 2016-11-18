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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/AlarmIdentifier.h>
#include <aws/route53/model/InsufficientDataHealthStatus.h>
#include <aws/route53/model/HealthCheckRegion.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the health check request information.</p>
   */
  class AWS_ROUTE53_API UpdateHealthCheckRequest : public Route53Request
  {
  public:
    UpdateHealthCheckRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID for the health check for which you want detailed information. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p>
     */
    inline const Aws::String& GetHealthCheckId() const{ return m_healthCheckId; }

    /**
     * <p>The ID for the health check for which you want detailed information. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p>
     */
    inline void SetHealthCheckId(const Aws::String& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID for the health check for which you want detailed information. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p>
     */
    inline void SetHealthCheckId(Aws::String&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID for the health check for which you want detailed information. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p>
     */
    inline void SetHealthCheckId(const char* value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId.assign(value); }

    /**
     * <p>The ID for the health check for which you want detailed information. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p>
     */
    inline UpdateHealthCheckRequest& WithHealthCheckId(const Aws::String& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID for the health check for which you want detailed information. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p>
     */
    inline UpdateHealthCheckRequest& WithHealthCheckId(Aws::String&& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID for the health check for which you want detailed information. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p>
     */
    inline UpdateHealthCheckRequest& WithHealthCheckId(const char* value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>A sequential counter that Amazon Route 53 sets to <code>1</code> when you
     * create a health check and increments by <code>1</code> each time you update
     * settings for the health check.</p> <p>We recommend that you use
     * <code>GetHealthCheck</code> or <code>ListHealthChecks</code> to get the current
     * value of <code>HealthCheckVersion</code> for the health check that you want to
     * update, and that you include that value in your <code>UpdateHealthCheck</code>
     * request. This prevents Amazon Route 53 from overwriting an intervening
     * update:</p> <ul> <li> <p>f the value in the <code>UpdateHealthCheck</code>
     * request matches the value of <code>HealthCheckVersion</code> in the health
     * check, Amazon Route 53 updates the health check with the new settings.</p> </li>
     * <li> <p>If the value of <code>HealthCheckVersion</code> in the health check is
     * greater, the health check was changed after you got the version number. Amazon
     * Route 53 does not update the health check, and it returns a
     * <code>HealthCheckVersionMismatch</code> error.</p> </li> </ul>
     */
    inline long long GetHealthCheckVersion() const{ return m_healthCheckVersion; }

    /**
     * <p>A sequential counter that Amazon Route 53 sets to <code>1</code> when you
     * create a health check and increments by <code>1</code> each time you update
     * settings for the health check.</p> <p>We recommend that you use
     * <code>GetHealthCheck</code> or <code>ListHealthChecks</code> to get the current
     * value of <code>HealthCheckVersion</code> for the health check that you want to
     * update, and that you include that value in your <code>UpdateHealthCheck</code>
     * request. This prevents Amazon Route 53 from overwriting an intervening
     * update:</p> <ul> <li> <p>f the value in the <code>UpdateHealthCheck</code>
     * request matches the value of <code>HealthCheckVersion</code> in the health
     * check, Amazon Route 53 updates the health check with the new settings.</p> </li>
     * <li> <p>If the value of <code>HealthCheckVersion</code> in the health check is
     * greater, the health check was changed after you got the version number. Amazon
     * Route 53 does not update the health check, and it returns a
     * <code>HealthCheckVersionMismatch</code> error.</p> </li> </ul>
     */
    inline void SetHealthCheckVersion(long long value) { m_healthCheckVersionHasBeenSet = true; m_healthCheckVersion = value; }

    /**
     * <p>A sequential counter that Amazon Route 53 sets to <code>1</code> when you
     * create a health check and increments by <code>1</code> each time you update
     * settings for the health check.</p> <p>We recommend that you use
     * <code>GetHealthCheck</code> or <code>ListHealthChecks</code> to get the current
     * value of <code>HealthCheckVersion</code> for the health check that you want to
     * update, and that you include that value in your <code>UpdateHealthCheck</code>
     * request. This prevents Amazon Route 53 from overwriting an intervening
     * update:</p> <ul> <li> <p>f the value in the <code>UpdateHealthCheck</code>
     * request matches the value of <code>HealthCheckVersion</code> in the health
     * check, Amazon Route 53 updates the health check with the new settings.</p> </li>
     * <li> <p>If the value of <code>HealthCheckVersion</code> in the health check is
     * greater, the health check was changed after you got the version number. Amazon
     * Route 53 does not update the health check, and it returns a
     * <code>HealthCheckVersionMismatch</code> error.</p> </li> </ul>
     */
    inline UpdateHealthCheckRequest& WithHealthCheckVersion(long long value) { SetHealthCheckVersion(value); return *this;}

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval you specify in
     * <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon Route
     * 53 then checks the health of the endpoint.</p> <p>f the endpoint is an EC2
     * instance, we recommend that you create an Elastic IP address, associate it with
     * your EC2 instance, and specify the Elastic IP address for
     * <code>IPAddress</code>. This ensures that the IP address of your instance never
     * changes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP Addresses (EIP)</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p>For more information, see
     * <a>UpdateHealthCheckRequest$FullyQualifiedDomainName</a>.</p>
     */
    inline const Aws::String& GetIPAddress() const{ return m_iPAddress; }

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval you specify in
     * <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon Route
     * 53 then checks the health of the endpoint.</p> <p>f the endpoint is an EC2
     * instance, we recommend that you create an Elastic IP address, associate it with
     * your EC2 instance, and specify the Elastic IP address for
     * <code>IPAddress</code>. This ensures that the IP address of your instance never
     * changes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP Addresses (EIP)</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p>For more information, see
     * <a>UpdateHealthCheckRequest$FullyQualifiedDomainName</a>.</p>
     */
    inline void SetIPAddress(const Aws::String& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval you specify in
     * <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon Route
     * 53 then checks the health of the endpoint.</p> <p>f the endpoint is an EC2
     * instance, we recommend that you create an Elastic IP address, associate it with
     * your EC2 instance, and specify the Elastic IP address for
     * <code>IPAddress</code>. This ensures that the IP address of your instance never
     * changes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP Addresses (EIP)</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p>For more information, see
     * <a>UpdateHealthCheckRequest$FullyQualifiedDomainName</a>.</p>
     */
    inline void SetIPAddress(Aws::String&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval you specify in
     * <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon Route
     * 53 then checks the health of the endpoint.</p> <p>f the endpoint is an EC2
     * instance, we recommend that you create an Elastic IP address, associate it with
     * your EC2 instance, and specify the Elastic IP address for
     * <code>IPAddress</code>. This ensures that the IP address of your instance never
     * changes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP Addresses (EIP)</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p>For more information, see
     * <a>UpdateHealthCheckRequest$FullyQualifiedDomainName</a>.</p>
     */
    inline void SetIPAddress(const char* value) { m_iPAddressHasBeenSet = true; m_iPAddress.assign(value); }

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval you specify in
     * <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon Route
     * 53 then checks the health of the endpoint.</p> <p>f the endpoint is an EC2
     * instance, we recommend that you create an Elastic IP address, associate it with
     * your EC2 instance, and specify the Elastic IP address for
     * <code>IPAddress</code>. This ensures that the IP address of your instance never
     * changes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP Addresses (EIP)</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p>For more information, see
     * <a>UpdateHealthCheckRequest$FullyQualifiedDomainName</a>.</p>
     */
    inline UpdateHealthCheckRequest& WithIPAddress(const Aws::String& value) { SetIPAddress(value); return *this;}

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval you specify in
     * <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon Route
     * 53 then checks the health of the endpoint.</p> <p>f the endpoint is an EC2
     * instance, we recommend that you create an Elastic IP address, associate it with
     * your EC2 instance, and specify the Elastic IP address for
     * <code>IPAddress</code>. This ensures that the IP address of your instance never
     * changes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP Addresses (EIP)</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p>For more information, see
     * <a>UpdateHealthCheckRequest$FullyQualifiedDomainName</a>.</p>
     */
    inline UpdateHealthCheckRequest& WithIPAddress(Aws::String&& value) { SetIPAddress(value); return *this;}

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval you specify in
     * <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon Route
     * 53 then checks the health of the endpoint.</p> <p>f the endpoint is an EC2
     * instance, we recommend that you create an Elastic IP address, associate it with
     * your EC2 instance, and specify the Elastic IP address for
     * <code>IPAddress</code>. This ensures that the IP address of your instance never
     * changes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP Addresses (EIP)</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p>For more information, see
     * <a>UpdateHealthCheckRequest$FullyQualifiedDomainName</a>.</p>
     */
    inline UpdateHealthCheckRequest& WithIPAddress(const char* value) { SetIPAddress(value); return *this;}

    /**
     * <p>The port on the endpoint on which you want Amazon Route 53 to perform health
     * checks.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on the endpoint on which you want Amazon Route 53 to perform health
     * checks.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on the endpoint on which you want Amazon Route 53 to perform health
     * checks.</p>
     */
    inline UpdateHealthCheckRequest& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, for example the file
     * /docs/route53-health-check.html. </p> <p>Specify this value only if you want to
     * change it.</p>
     */
    inline const Aws::String& GetResourcePath() const{ return m_resourcePath; }

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, for example the file
     * /docs/route53-health-check.html. </p> <p>Specify this value only if you want to
     * change it.</p>
     */
    inline void SetResourcePath(const Aws::String& value) { m_resourcePathHasBeenSet = true; m_resourcePath = value; }

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, for example the file
     * /docs/route53-health-check.html. </p> <p>Specify this value only if you want to
     * change it.</p>
     */
    inline void SetResourcePath(Aws::String&& value) { m_resourcePathHasBeenSet = true; m_resourcePath = value; }

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, for example the file
     * /docs/route53-health-check.html. </p> <p>Specify this value only if you want to
     * change it.</p>
     */
    inline void SetResourcePath(const char* value) { m_resourcePathHasBeenSet = true; m_resourcePath.assign(value); }

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, for example the file
     * /docs/route53-health-check.html. </p> <p>Specify this value only if you want to
     * change it.</p>
     */
    inline UpdateHealthCheckRequest& WithResourcePath(const Aws::String& value) { SetResourcePath(value); return *this;}

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, for example the file
     * /docs/route53-health-check.html. </p> <p>Specify this value only if you want to
     * change it.</p>
     */
    inline UpdateHealthCheckRequest& WithResourcePath(Aws::String&& value) { SetResourcePath(value); return *this;}

    /**
     * <p>The path that you want Amazon Route 53 to request when performing health
     * checks. The path can be any value for which your endpoint will return an HTTP
     * status code of 2xx or 3xx when the endpoint is healthy, for example the file
     * /docs/route53-health-check.html. </p> <p>Specify this value only if you want to
     * change it.</p>
     */
    inline UpdateHealthCheckRequest& WithResourcePath(const char* value) { SetResourcePath(value); return *this;}

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p> <b>If you specify</b> <code>IPAddress</code>:</p> <p>The value that
     * you want Amazon Route 53 to pass in the <code>Host</code> header in all health
     * checks except TCP health checks. This is typically the fully qualified DNS name
     * of the endpoint on which you want Amazon Route 53 to perform health checks. When
     * Amazon Route 53 checks the health of an endpoint, here is how it constructs the
     * <code>Host</code> header:</p> <ul> <li> <p>If you specify a value of
     * <code>80</code> for <code>Port</code> and <code>HTTP</code> or
     * <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the Host
     * header.</p> </li> <li> <p>If you specify another value for <code>Port</code> and
     * any value except <code>TCP</code> for <code>Type</code>, Amazon Route 53 passes
     * <i> <code>FullyQualifiedDomainName</code>:<code>Port</code> </i> to the endpoint
     * in the Host header.</p> </li> </ul> <p>If you don't specify a value for
     * <code>FullyQualifiedDomainName</code>, Amazon Route 53 substitutes the value of
     * <code>IPAddress</code> in the <code>Host</code> header in each of the above
     * cases.</p> <p> <b>If you don't specify</b> <code>IPAddress</code>:</p> <p>If you
     * don't specify a value for <code>IPAddress</code>, Amazon Route 53 sends a DNS
     * request to the domain that you specify in <code>FullyQualifiedDomainName</code>
     * at the interval you specify in <code>RequestInterval</code>. Using an IP address
     * that DNS returns, Amazon Route 53 then checks the health of the endpoint.</p>
     * <p>If you want to check the health of weighted, latency, or failover resource
     * record sets and you choose to specify the endpoint only by
     * <code>FullyQualifiedDomainName</code>, we recommend that you create a separate
     * health check for each endpoint. For example, create a health check for each HTTP
     * server that is serving content for www.example.com. For the value of
     * <code>FullyQualifiedDomainName</code>, specify the domain name of the server
     * (such as <code>us-east-1-www.example.com</code>), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if the
     * value of <code>FullyQualifiedDomainName</code> matches the name of the resource
     * record sets and you then associate the health check with those resource record
     * sets, health check results will be unpredictable.</p> </important> <p>In
     * addition, if the value of <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline const Aws::String& GetFullyQualifiedDomainName() const{ return m_fullyQualifiedDomainName; }

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p> <b>If you specify</b> <code>IPAddress</code>:</p> <p>The value that
     * you want Amazon Route 53 to pass in the <code>Host</code> header in all health
     * checks except TCP health checks. This is typically the fully qualified DNS name
     * of the endpoint on which you want Amazon Route 53 to perform health checks. When
     * Amazon Route 53 checks the health of an endpoint, here is how it constructs the
     * <code>Host</code> header:</p> <ul> <li> <p>If you specify a value of
     * <code>80</code> for <code>Port</code> and <code>HTTP</code> or
     * <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the Host
     * header.</p> </li> <li> <p>If you specify another value for <code>Port</code> and
     * any value except <code>TCP</code> for <code>Type</code>, Amazon Route 53 passes
     * <i> <code>FullyQualifiedDomainName</code>:<code>Port</code> </i> to the endpoint
     * in the Host header.</p> </li> </ul> <p>If you don't specify a value for
     * <code>FullyQualifiedDomainName</code>, Amazon Route 53 substitutes the value of
     * <code>IPAddress</code> in the <code>Host</code> header in each of the above
     * cases.</p> <p> <b>If you don't specify</b> <code>IPAddress</code>:</p> <p>If you
     * don't specify a value for <code>IPAddress</code>, Amazon Route 53 sends a DNS
     * request to the domain that you specify in <code>FullyQualifiedDomainName</code>
     * at the interval you specify in <code>RequestInterval</code>. Using an IP address
     * that DNS returns, Amazon Route 53 then checks the health of the endpoint.</p>
     * <p>If you want to check the health of weighted, latency, or failover resource
     * record sets and you choose to specify the endpoint only by
     * <code>FullyQualifiedDomainName</code>, we recommend that you create a separate
     * health check for each endpoint. For example, create a health check for each HTTP
     * server that is serving content for www.example.com. For the value of
     * <code>FullyQualifiedDomainName</code>, specify the domain name of the server
     * (such as <code>us-east-1-www.example.com</code>), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if the
     * value of <code>FullyQualifiedDomainName</code> matches the name of the resource
     * record sets and you then associate the health check with those resource record
     * sets, health check results will be unpredictable.</p> </important> <p>In
     * addition, if the value of <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline void SetFullyQualifiedDomainName(const Aws::String& value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName = value; }

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p> <b>If you specify</b> <code>IPAddress</code>:</p> <p>The value that
     * you want Amazon Route 53 to pass in the <code>Host</code> header in all health
     * checks except TCP health checks. This is typically the fully qualified DNS name
     * of the endpoint on which you want Amazon Route 53 to perform health checks. When
     * Amazon Route 53 checks the health of an endpoint, here is how it constructs the
     * <code>Host</code> header:</p> <ul> <li> <p>If you specify a value of
     * <code>80</code> for <code>Port</code> and <code>HTTP</code> or
     * <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the Host
     * header.</p> </li> <li> <p>If you specify another value for <code>Port</code> and
     * any value except <code>TCP</code> for <code>Type</code>, Amazon Route 53 passes
     * <i> <code>FullyQualifiedDomainName</code>:<code>Port</code> </i> to the endpoint
     * in the Host header.</p> </li> </ul> <p>If you don't specify a value for
     * <code>FullyQualifiedDomainName</code>, Amazon Route 53 substitutes the value of
     * <code>IPAddress</code> in the <code>Host</code> header in each of the above
     * cases.</p> <p> <b>If you don't specify</b> <code>IPAddress</code>:</p> <p>If you
     * don't specify a value for <code>IPAddress</code>, Amazon Route 53 sends a DNS
     * request to the domain that you specify in <code>FullyQualifiedDomainName</code>
     * at the interval you specify in <code>RequestInterval</code>. Using an IP address
     * that DNS returns, Amazon Route 53 then checks the health of the endpoint.</p>
     * <p>If you want to check the health of weighted, latency, or failover resource
     * record sets and you choose to specify the endpoint only by
     * <code>FullyQualifiedDomainName</code>, we recommend that you create a separate
     * health check for each endpoint. For example, create a health check for each HTTP
     * server that is serving content for www.example.com. For the value of
     * <code>FullyQualifiedDomainName</code>, specify the domain name of the server
     * (such as <code>us-east-1-www.example.com</code>), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if the
     * value of <code>FullyQualifiedDomainName</code> matches the name of the resource
     * record sets and you then associate the health check with those resource record
     * sets, health check results will be unpredictable.</p> </important> <p>In
     * addition, if the value of <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline void SetFullyQualifiedDomainName(Aws::String&& value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName = value; }

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p> <b>If you specify</b> <code>IPAddress</code>:</p> <p>The value that
     * you want Amazon Route 53 to pass in the <code>Host</code> header in all health
     * checks except TCP health checks. This is typically the fully qualified DNS name
     * of the endpoint on which you want Amazon Route 53 to perform health checks. When
     * Amazon Route 53 checks the health of an endpoint, here is how it constructs the
     * <code>Host</code> header:</p> <ul> <li> <p>If you specify a value of
     * <code>80</code> for <code>Port</code> and <code>HTTP</code> or
     * <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the Host
     * header.</p> </li> <li> <p>If you specify another value for <code>Port</code> and
     * any value except <code>TCP</code> for <code>Type</code>, Amazon Route 53 passes
     * <i> <code>FullyQualifiedDomainName</code>:<code>Port</code> </i> to the endpoint
     * in the Host header.</p> </li> </ul> <p>If you don't specify a value for
     * <code>FullyQualifiedDomainName</code>, Amazon Route 53 substitutes the value of
     * <code>IPAddress</code> in the <code>Host</code> header in each of the above
     * cases.</p> <p> <b>If you don't specify</b> <code>IPAddress</code>:</p> <p>If you
     * don't specify a value for <code>IPAddress</code>, Amazon Route 53 sends a DNS
     * request to the domain that you specify in <code>FullyQualifiedDomainName</code>
     * at the interval you specify in <code>RequestInterval</code>. Using an IP address
     * that DNS returns, Amazon Route 53 then checks the health of the endpoint.</p>
     * <p>If you want to check the health of weighted, latency, or failover resource
     * record sets and you choose to specify the endpoint only by
     * <code>FullyQualifiedDomainName</code>, we recommend that you create a separate
     * health check for each endpoint. For example, create a health check for each HTTP
     * server that is serving content for www.example.com. For the value of
     * <code>FullyQualifiedDomainName</code>, specify the domain name of the server
     * (such as <code>us-east-1-www.example.com</code>), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if the
     * value of <code>FullyQualifiedDomainName</code> matches the name of the resource
     * record sets and you then associate the health check with those resource record
     * sets, health check results will be unpredictable.</p> </important> <p>In
     * addition, if the value of <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline void SetFullyQualifiedDomainName(const char* value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName.assign(value); }

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p> <b>If you specify</b> <code>IPAddress</code>:</p> <p>The value that
     * you want Amazon Route 53 to pass in the <code>Host</code> header in all health
     * checks except TCP health checks. This is typically the fully qualified DNS name
     * of the endpoint on which you want Amazon Route 53 to perform health checks. When
     * Amazon Route 53 checks the health of an endpoint, here is how it constructs the
     * <code>Host</code> header:</p> <ul> <li> <p>If you specify a value of
     * <code>80</code> for <code>Port</code> and <code>HTTP</code> or
     * <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the Host
     * header.</p> </li> <li> <p>If you specify another value for <code>Port</code> and
     * any value except <code>TCP</code> for <code>Type</code>, Amazon Route 53 passes
     * <i> <code>FullyQualifiedDomainName</code>:<code>Port</code> </i> to the endpoint
     * in the Host header.</p> </li> </ul> <p>If you don't specify a value for
     * <code>FullyQualifiedDomainName</code>, Amazon Route 53 substitutes the value of
     * <code>IPAddress</code> in the <code>Host</code> header in each of the above
     * cases.</p> <p> <b>If you don't specify</b> <code>IPAddress</code>:</p> <p>If you
     * don't specify a value for <code>IPAddress</code>, Amazon Route 53 sends a DNS
     * request to the domain that you specify in <code>FullyQualifiedDomainName</code>
     * at the interval you specify in <code>RequestInterval</code>. Using an IP address
     * that DNS returns, Amazon Route 53 then checks the health of the endpoint.</p>
     * <p>If you want to check the health of weighted, latency, or failover resource
     * record sets and you choose to specify the endpoint only by
     * <code>FullyQualifiedDomainName</code>, we recommend that you create a separate
     * health check for each endpoint. For example, create a health check for each HTTP
     * server that is serving content for www.example.com. For the value of
     * <code>FullyQualifiedDomainName</code>, specify the domain name of the server
     * (such as <code>us-east-1-www.example.com</code>), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if the
     * value of <code>FullyQualifiedDomainName</code> matches the name of the resource
     * record sets and you then associate the health check with those resource record
     * sets, health check results will be unpredictable.</p> </important> <p>In
     * addition, if the value of <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline UpdateHealthCheckRequest& WithFullyQualifiedDomainName(const Aws::String& value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p> <b>If you specify</b> <code>IPAddress</code>:</p> <p>The value that
     * you want Amazon Route 53 to pass in the <code>Host</code> header in all health
     * checks except TCP health checks. This is typically the fully qualified DNS name
     * of the endpoint on which you want Amazon Route 53 to perform health checks. When
     * Amazon Route 53 checks the health of an endpoint, here is how it constructs the
     * <code>Host</code> header:</p> <ul> <li> <p>If you specify a value of
     * <code>80</code> for <code>Port</code> and <code>HTTP</code> or
     * <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the Host
     * header.</p> </li> <li> <p>If you specify another value for <code>Port</code> and
     * any value except <code>TCP</code> for <code>Type</code>, Amazon Route 53 passes
     * <i> <code>FullyQualifiedDomainName</code>:<code>Port</code> </i> to the endpoint
     * in the Host header.</p> </li> </ul> <p>If you don't specify a value for
     * <code>FullyQualifiedDomainName</code>, Amazon Route 53 substitutes the value of
     * <code>IPAddress</code> in the <code>Host</code> header in each of the above
     * cases.</p> <p> <b>If you don't specify</b> <code>IPAddress</code>:</p> <p>If you
     * don't specify a value for <code>IPAddress</code>, Amazon Route 53 sends a DNS
     * request to the domain that you specify in <code>FullyQualifiedDomainName</code>
     * at the interval you specify in <code>RequestInterval</code>. Using an IP address
     * that DNS returns, Amazon Route 53 then checks the health of the endpoint.</p>
     * <p>If you want to check the health of weighted, latency, or failover resource
     * record sets and you choose to specify the endpoint only by
     * <code>FullyQualifiedDomainName</code>, we recommend that you create a separate
     * health check for each endpoint. For example, create a health check for each HTTP
     * server that is serving content for www.example.com. For the value of
     * <code>FullyQualifiedDomainName</code>, specify the domain name of the server
     * (such as <code>us-east-1-www.example.com</code>), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if the
     * value of <code>FullyQualifiedDomainName</code> matches the name of the resource
     * record sets and you then associate the health check with those resource record
     * sets, health check results will be unpredictable.</p> </important> <p>In
     * addition, if the value of <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline UpdateHealthCheckRequest& WithFullyQualifiedDomainName(Aws::String&& value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <note> <p>If a health check already has a value for
     * <code>IPAddress</code>, you can change the value. However, you can't update an
     * existing health check to add or remove the value of <code>IPAddress</code>. </p>
     * </note> <p> <b>If you specify</b> <code>IPAddress</code>:</p> <p>The value that
     * you want Amazon Route 53 to pass in the <code>Host</code> header in all health
     * checks except TCP health checks. This is typically the fully qualified DNS name
     * of the endpoint on which you want Amazon Route 53 to perform health checks. When
     * Amazon Route 53 checks the health of an endpoint, here is how it constructs the
     * <code>Host</code> header:</p> <ul> <li> <p>If you specify a value of
     * <code>80</code> for <code>Port</code> and <code>HTTP</code> or
     * <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the Host
     * header.</p> </li> <li> <p>If you specify another value for <code>Port</code> and
     * any value except <code>TCP</code> for <code>Type</code>, Amazon Route 53 passes
     * <i> <code>FullyQualifiedDomainName</code>:<code>Port</code> </i> to the endpoint
     * in the Host header.</p> </li> </ul> <p>If you don't specify a value for
     * <code>FullyQualifiedDomainName</code>, Amazon Route 53 substitutes the value of
     * <code>IPAddress</code> in the <code>Host</code> header in each of the above
     * cases.</p> <p> <b>If you don't specify</b> <code>IPAddress</code>:</p> <p>If you
     * don't specify a value for <code>IPAddress</code>, Amazon Route 53 sends a DNS
     * request to the domain that you specify in <code>FullyQualifiedDomainName</code>
     * at the interval you specify in <code>RequestInterval</code>. Using an IP address
     * that DNS returns, Amazon Route 53 then checks the health of the endpoint.</p>
     * <p>If you want to check the health of weighted, latency, or failover resource
     * record sets and you choose to specify the endpoint only by
     * <code>FullyQualifiedDomainName</code>, we recommend that you create a separate
     * health check for each endpoint. For example, create a health check for each HTTP
     * server that is serving content for www.example.com. For the value of
     * <code>FullyQualifiedDomainName</code>, specify the domain name of the server
     * (such as <code>us-east-1-www.example.com</code>), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if the
     * value of <code>FullyQualifiedDomainName</code> matches the name of the resource
     * record sets and you then associate the health check with those resource record
     * sets, health check results will be unpredictable.</p> </important> <p>In
     * addition, if the value of <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline UpdateHealthCheckRequest& WithFullyQualifiedDomainName(const char* value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. (You can't
     * change the value of <code>Type</code> when you update a health check.)</p>
     */
    inline const Aws::String& GetSearchString() const{ return m_searchString; }

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. (You can't
     * change the value of <code>Type</code> when you update a health check.)</p>
     */
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. (You can't
     * change the value of <code>Type</code> when you update a health check.)</p>
     */
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. (You can't
     * change the value of <code>Type</code> when you update a health check.)</p>
     */
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. (You can't
     * change the value of <code>Type</code> when you update a health check.)</p>
     */
    inline UpdateHealthCheckRequest& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. (You can't
     * change the value of <code>Type</code> when you update a health check.)</p>
     */
    inline UpdateHealthCheckRequest& WithSearchString(Aws::String&& value) { SetSearchString(value); return *this;}

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. (You can't
     * change the value of <code>Type</code> when you update a health check.)</p>
     */
    inline UpdateHealthCheckRequest& WithSearchString(const char* value) { SetSearchString(value); return *this;}

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline int GetFailureThreshold() const{ return m_failureThreshold; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline void SetFailureThreshold(int value) { m_failureThresholdHasBeenSet = true; m_failureThreshold = value; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa. For more information, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover-determining-health-of-endpoints.html">How
     * Amazon Route 53 Determines Whether an Endpoint Is Healthy</a> in the <i>Amazon
     * Route 53 Developer Guide</i>.</p>
     */
    inline UpdateHealthCheckRequest& WithFailureThreshold(int value) { SetFailureThreshold(value); return *this;}

    /**
     * <p>Specify whether you want Amazon Route 53 to invert the status of a health
     * check, for example, to consider a health check unhealthy when it otherwise would
     * be considered healthy.</p>
     */
    inline bool GetInverted() const{ return m_inverted; }

    /**
     * <p>Specify whether you want Amazon Route 53 to invert the status of a health
     * check, for example, to consider a health check unhealthy when it otherwise would
     * be considered healthy.</p>
     */
    inline void SetInverted(bool value) { m_invertedHasBeenSet = true; m_inverted = value; }

    /**
     * <p>Specify whether you want Amazon Route 53 to invert the status of a health
     * check, for example, to consider a health check unhealthy when it otherwise would
     * be considered healthy.</p>
     */
    inline UpdateHealthCheckRequest& WithInverted(bool value) { SetInverted(value); return *this;}

    /**
     * <p>The number of child health checks that are associated with a
     * <code>CALCULATED</code> health that Amazon Route 53 must consider healthy for
     * the <code>CALCULATED</code> health check to be considered healthy. To specify
     * the child health checks that you want to associate with a
     * <code>CALCULATED</code> health check, use the <code>ChildHealthChecks</code> and
     * <code>ChildHealthCheck</code> elements.</p> <p>Note the following:</p> <ul> <li>
     * <p>If you specify a number greater than the number of child health checks,
     * Amazon Route 53 always considers this health check to be unhealthy.</p> </li>
     * <li> <p>If you specify <code>0</code>, Amazon Route 53 always considers this
     * health check to be healthy.</p> </li> </ul>
     */
    inline int GetHealthThreshold() const{ return m_healthThreshold; }

    /**
     * <p>The number of child health checks that are associated with a
     * <code>CALCULATED</code> health that Amazon Route 53 must consider healthy for
     * the <code>CALCULATED</code> health check to be considered healthy. To specify
     * the child health checks that you want to associate with a
     * <code>CALCULATED</code> health check, use the <code>ChildHealthChecks</code> and
     * <code>ChildHealthCheck</code> elements.</p> <p>Note the following:</p> <ul> <li>
     * <p>If you specify a number greater than the number of child health checks,
     * Amazon Route 53 always considers this health check to be unhealthy.</p> </li>
     * <li> <p>If you specify <code>0</code>, Amazon Route 53 always considers this
     * health check to be healthy.</p> </li> </ul>
     */
    inline void SetHealthThreshold(int value) { m_healthThresholdHasBeenSet = true; m_healthThreshold = value; }

    /**
     * <p>The number of child health checks that are associated with a
     * <code>CALCULATED</code> health that Amazon Route 53 must consider healthy for
     * the <code>CALCULATED</code> health check to be considered healthy. To specify
     * the child health checks that you want to associate with a
     * <code>CALCULATED</code> health check, use the <code>ChildHealthChecks</code> and
     * <code>ChildHealthCheck</code> elements.</p> <p>Note the following:</p> <ul> <li>
     * <p>If you specify a number greater than the number of child health checks,
     * Amazon Route 53 always considers this health check to be unhealthy.</p> </li>
     * <li> <p>If you specify <code>0</code>, Amazon Route 53 always considers this
     * health check to be healthy.</p> </li> </ul>
     */
    inline UpdateHealthCheckRequest& WithHealthThreshold(int value) { SetHealthThreshold(value); return *this;}

    /**
     * <p>A complex type that contains one <code>ChildHealthCheck</code> element for
     * each health check that you want to associate with a <code>CALCULATED</code>
     * health check.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChildHealthChecks() const{ return m_childHealthChecks; }

    /**
     * <p>A complex type that contains one <code>ChildHealthCheck</code> element for
     * each health check that you want to associate with a <code>CALCULATED</code>
     * health check.</p>
     */
    inline void SetChildHealthChecks(const Aws::Vector<Aws::String>& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks = value; }

    /**
     * <p>A complex type that contains one <code>ChildHealthCheck</code> element for
     * each health check that you want to associate with a <code>CALCULATED</code>
     * health check.</p>
     */
    inline void SetChildHealthChecks(Aws::Vector<Aws::String>&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks = value; }

    /**
     * <p>A complex type that contains one <code>ChildHealthCheck</code> element for
     * each health check that you want to associate with a <code>CALCULATED</code>
     * health check.</p>
     */
    inline UpdateHealthCheckRequest& WithChildHealthChecks(const Aws::Vector<Aws::String>& value) { SetChildHealthChecks(value); return *this;}

    /**
     * <p>A complex type that contains one <code>ChildHealthCheck</code> element for
     * each health check that you want to associate with a <code>CALCULATED</code>
     * health check.</p>
     */
    inline UpdateHealthCheckRequest& WithChildHealthChecks(Aws::Vector<Aws::String>&& value) { SetChildHealthChecks(value); return *this;}

    /**
     * <p>A complex type that contains one <code>ChildHealthCheck</code> element for
     * each health check that you want to associate with a <code>CALCULATED</code>
     * health check.</p>
     */
    inline UpdateHealthCheckRequest& AddChildHealthChecks(const Aws::String& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>ChildHealthCheck</code> element for
     * each health check that you want to associate with a <code>CALCULATED</code>
     * health check.</p>
     */
    inline UpdateHealthCheckRequest& AddChildHealthChecks(Aws::String&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>ChildHealthCheck</code> element for
     * each health check that you want to associate with a <code>CALCULATED</code>
     * health check.</p>
     */
    inline UpdateHealthCheckRequest& AddChildHealthChecks(const char* value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>Specify whether you want Amazon Route 53 to send the value of
     * <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>client_hello</code> message during <code>TLS</code> negotiation. This
     * allows the endpoint to respond to <code>HTTPS</code> health check requests with
     * the applicable SSL/TLS certificate.</p> <p>Some endpoints require that HTTPS
     * requests include the host name in the <code>client_hello</code> message. If you
     * don't enable SNI, the status of the health check will be SSL alert
     * <code>handshake_failure</code>. A health check can also have that status for
     * other reasons. If SNI is enabled and you're still getting the error, check the
     * SSL/TLS configuration on your endpoint and confirm that your certificate is
     * valid.</p> <p>The SSL/TLS certificate on your endpoint includes a domain name in
     * the <code>Common Name</code> field and possibly several more in the
     * <code>Subject Alternative Names</code> field. One of the domain names in the
     * certificate should match the value that you specify for
     * <code>FullyQualifiedDomainName</code>. If the endpoint responds to the
     * <code>client_hello</code> message with a certificate that does not include the
     * domain name that you specified in <code>FullyQualifiedDomainName</code>, a
     * health checker will retry the handshake. In the second attempt, the health
     * checker will omit <code>FullyQualifiedDomainName</code> from the
     * <code>client_hello</code> message.</p>
     */
    inline bool GetEnableSNI() const{ return m_enableSNI; }

    /**
     * <p>Specify whether you want Amazon Route 53 to send the value of
     * <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>client_hello</code> message during <code>TLS</code> negotiation. This
     * allows the endpoint to respond to <code>HTTPS</code> health check requests with
     * the applicable SSL/TLS certificate.</p> <p>Some endpoints require that HTTPS
     * requests include the host name in the <code>client_hello</code> message. If you
     * don't enable SNI, the status of the health check will be SSL alert
     * <code>handshake_failure</code>. A health check can also have that status for
     * other reasons. If SNI is enabled and you're still getting the error, check the
     * SSL/TLS configuration on your endpoint and confirm that your certificate is
     * valid.</p> <p>The SSL/TLS certificate on your endpoint includes a domain name in
     * the <code>Common Name</code> field and possibly several more in the
     * <code>Subject Alternative Names</code> field. One of the domain names in the
     * certificate should match the value that you specify for
     * <code>FullyQualifiedDomainName</code>. If the endpoint responds to the
     * <code>client_hello</code> message with a certificate that does not include the
     * domain name that you specified in <code>FullyQualifiedDomainName</code>, a
     * health checker will retry the handshake. In the second attempt, the health
     * checker will omit <code>FullyQualifiedDomainName</code> from the
     * <code>client_hello</code> message.</p>
     */
    inline void SetEnableSNI(bool value) { m_enableSNIHasBeenSet = true; m_enableSNI = value; }

    /**
     * <p>Specify whether you want Amazon Route 53 to send the value of
     * <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>client_hello</code> message during <code>TLS</code> negotiation. This
     * allows the endpoint to respond to <code>HTTPS</code> health check requests with
     * the applicable SSL/TLS certificate.</p> <p>Some endpoints require that HTTPS
     * requests include the host name in the <code>client_hello</code> message. If you
     * don't enable SNI, the status of the health check will be SSL alert
     * <code>handshake_failure</code>. A health check can also have that status for
     * other reasons. If SNI is enabled and you're still getting the error, check the
     * SSL/TLS configuration on your endpoint and confirm that your certificate is
     * valid.</p> <p>The SSL/TLS certificate on your endpoint includes a domain name in
     * the <code>Common Name</code> field and possibly several more in the
     * <code>Subject Alternative Names</code> field. One of the domain names in the
     * certificate should match the value that you specify for
     * <code>FullyQualifiedDomainName</code>. If the endpoint responds to the
     * <code>client_hello</code> message with a certificate that does not include the
     * domain name that you specified in <code>FullyQualifiedDomainName</code>, a
     * health checker will retry the handshake. In the second attempt, the health
     * checker will omit <code>FullyQualifiedDomainName</code> from the
     * <code>client_hello</code> message.</p>
     */
    inline UpdateHealthCheckRequest& WithEnableSNI(bool value) { SetEnableSNI(value); return *this;}

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline const Aws::Vector<HealthCheckRegion>& GetRegions() const{ return m_regions; }

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline void SetRegions(const Aws::Vector<HealthCheckRegion>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline void SetRegions(Aws::Vector<HealthCheckRegion>&& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline UpdateHealthCheckRequest& WithRegions(const Aws::Vector<HealthCheckRegion>& value) { SetRegions(value); return *this;}

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline UpdateHealthCheckRequest& WithRegions(Aws::Vector<HealthCheckRegion>&& value) { SetRegions(value); return *this;}

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline UpdateHealthCheckRequest& AddRegions(const HealthCheckRegion& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline UpdateHealthCheckRequest& AddRegions(HealthCheckRegion&& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    
    inline const AlarmIdentifier& GetAlarmIdentifier() const{ return m_alarmIdentifier; }

    
    inline void SetAlarmIdentifier(const AlarmIdentifier& value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier = value; }

    
    inline void SetAlarmIdentifier(AlarmIdentifier&& value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier = value; }

    
    inline UpdateHealthCheckRequest& WithAlarmIdentifier(const AlarmIdentifier& value) { SetAlarmIdentifier(value); return *this;}

    
    inline UpdateHealthCheckRequest& WithAlarmIdentifier(AlarmIdentifier&& value) { SetAlarmIdentifier(value); return *this;}

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53 uses the status of the health
     * check from the last time CloudWatch had sufficient data to determine the alarm
     * state. For new health checks that have no last known status, the default status
     * for the health check is healthy.</p> </li> </ul>
     */
    inline const InsufficientDataHealthStatus& GetInsufficientDataHealthStatus() const{ return m_insufficientDataHealthStatus; }

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53 uses the status of the health
     * check from the last time CloudWatch had sufficient data to determine the alarm
     * state. For new health checks that have no last known status, the default status
     * for the health check is healthy.</p> </li> </ul>
     */
    inline void SetInsufficientDataHealthStatus(const InsufficientDataHealthStatus& value) { m_insufficientDataHealthStatusHasBeenSet = true; m_insufficientDataHealthStatus = value; }

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53 uses the status of the health
     * check from the last time CloudWatch had sufficient data to determine the alarm
     * state. For new health checks that have no last known status, the default status
     * for the health check is healthy.</p> </li> </ul>
     */
    inline void SetInsufficientDataHealthStatus(InsufficientDataHealthStatus&& value) { m_insufficientDataHealthStatusHasBeenSet = true; m_insufficientDataHealthStatus = value; }

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53 uses the status of the health
     * check from the last time CloudWatch had sufficient data to determine the alarm
     * state. For new health checks that have no last known status, the default status
     * for the health check is healthy.</p> </li> </ul>
     */
    inline UpdateHealthCheckRequest& WithInsufficientDataHealthStatus(const InsufficientDataHealthStatus& value) { SetInsufficientDataHealthStatus(value); return *this;}

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53 uses the status of the health
     * check from the last time CloudWatch had sufficient data to determine the alarm
     * state. For new health checks that have no last known status, the default status
     * for the health check is healthy.</p> </li> </ul>
     */
    inline UpdateHealthCheckRequest& WithInsufficientDataHealthStatus(InsufficientDataHealthStatus&& value) { SetInsufficientDataHealthStatus(value); return *this;}

  private:
    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet;
    long long m_healthCheckVersion;
    bool m_healthCheckVersionHasBeenSet;
    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    Aws::String m_resourcePath;
    bool m_resourcePathHasBeenSet;
    Aws::String m_fullyQualifiedDomainName;
    bool m_fullyQualifiedDomainNameHasBeenSet;
    Aws::String m_searchString;
    bool m_searchStringHasBeenSet;
    int m_failureThreshold;
    bool m_failureThresholdHasBeenSet;
    bool m_inverted;
    bool m_invertedHasBeenSet;
    int m_healthThreshold;
    bool m_healthThresholdHasBeenSet;
    Aws::Vector<Aws::String> m_childHealthChecks;
    bool m_childHealthChecksHasBeenSet;
    bool m_enableSNI;
    bool m_enableSNIHasBeenSet;
    Aws::Vector<HealthCheckRegion> m_regions;
    bool m_regionsHasBeenSet;
    AlarmIdentifier m_alarmIdentifier;
    bool m_alarmIdentifierHasBeenSet;
    InsufficientDataHealthStatus m_insufficientDataHealthStatus;
    bool m_insufficientDataHealthStatusHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
