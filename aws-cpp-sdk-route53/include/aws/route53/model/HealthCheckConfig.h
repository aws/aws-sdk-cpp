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
#include <aws/route53/model/HealthCheckType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/AlarmIdentifier.h>
#include <aws/route53/model/InsufficientDataHealthStatus.h>
#include <aws/route53/model/HealthCheckRegion.h>

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
   * <p>A complex type that contains information about the health check.</p>
   */
  class AWS_ROUTE53_API HealthCheckConfig
  {
  public:
    HealthCheckConfig();
    HealthCheckConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    HealthCheckConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval that you specify in
     * RequestInterval. Using an IP address that DNS returns, Amazon Route 53 then
     * checks the health of the endpoint.</p> <p>If the endpoint is an EC2 instance, we
     * recommend that you create an Elastic IP address, associate it with your EC2
     * instance, and specify the Elastic IP address for <code>IPAddress</code>. This
     * ensures that the IP address of your instance will never change.</p> <p>For more
     * information, see <a>HealthCheckConfig$FullyQualifiedDomainName</a>.</p>
     * <p>Constraints: Amazon Route 53 can't check the health of endpoints for which
     * the IP address is in local, private, non-routable, or \ multicast ranges. For
     * more information about IP addresses for which you can't create health checks,
     * see <a href="https://tools.ietf.org/html/rfc5735">RFC 5735, Special Use IPv4
     * Addresses</a> and <a href="https://tools.ietf.org/html/rfc6598">RFC 6598,
     * IANA-Reserved IPv4 Prefix for Shared Address Space</a>.</p> <p>When the value of
     * Type is <code>CALCULATED</code> or <code>CLOUDWATCH_METRIC</code>, omit
     * IPAddress.</p>
     */
    inline const Aws::String& GetIPAddress() const{ return m_iPAddress; }

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval that you specify in
     * RequestInterval. Using an IP address that DNS returns, Amazon Route 53 then
     * checks the health of the endpoint.</p> <p>If the endpoint is an EC2 instance, we
     * recommend that you create an Elastic IP address, associate it with your EC2
     * instance, and specify the Elastic IP address for <code>IPAddress</code>. This
     * ensures that the IP address of your instance will never change.</p> <p>For more
     * information, see <a>HealthCheckConfig$FullyQualifiedDomainName</a>.</p>
     * <p>Constraints: Amazon Route 53 can't check the health of endpoints for which
     * the IP address is in local, private, non-routable, or \ multicast ranges. For
     * more information about IP addresses for which you can't create health checks,
     * see <a href="https://tools.ietf.org/html/rfc5735">RFC 5735, Special Use IPv4
     * Addresses</a> and <a href="https://tools.ietf.org/html/rfc6598">RFC 6598,
     * IANA-Reserved IPv4 Prefix for Shared Address Space</a>.</p> <p>When the value of
     * Type is <code>CALCULATED</code> or <code>CLOUDWATCH_METRIC</code>, omit
     * IPAddress.</p>
     */
    inline void SetIPAddress(const Aws::String& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval that you specify in
     * RequestInterval. Using an IP address that DNS returns, Amazon Route 53 then
     * checks the health of the endpoint.</p> <p>If the endpoint is an EC2 instance, we
     * recommend that you create an Elastic IP address, associate it with your EC2
     * instance, and specify the Elastic IP address for <code>IPAddress</code>. This
     * ensures that the IP address of your instance will never change.</p> <p>For more
     * information, see <a>HealthCheckConfig$FullyQualifiedDomainName</a>.</p>
     * <p>Constraints: Amazon Route 53 can't check the health of endpoints for which
     * the IP address is in local, private, non-routable, or \ multicast ranges. For
     * more information about IP addresses for which you can't create health checks,
     * see <a href="https://tools.ietf.org/html/rfc5735">RFC 5735, Special Use IPv4
     * Addresses</a> and <a href="https://tools.ietf.org/html/rfc6598">RFC 6598,
     * IANA-Reserved IPv4 Prefix for Shared Address Space</a>.</p> <p>When the value of
     * Type is <code>CALCULATED</code> or <code>CLOUDWATCH_METRIC</code>, omit
     * IPAddress.</p>
     */
    inline void SetIPAddress(Aws::String&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval that you specify in
     * RequestInterval. Using an IP address that DNS returns, Amazon Route 53 then
     * checks the health of the endpoint.</p> <p>If the endpoint is an EC2 instance, we
     * recommend that you create an Elastic IP address, associate it with your EC2
     * instance, and specify the Elastic IP address for <code>IPAddress</code>. This
     * ensures that the IP address of your instance will never change.</p> <p>For more
     * information, see <a>HealthCheckConfig$FullyQualifiedDomainName</a>.</p>
     * <p>Constraints: Amazon Route 53 can't check the health of endpoints for which
     * the IP address is in local, private, non-routable, or \ multicast ranges. For
     * more information about IP addresses for which you can't create health checks,
     * see <a href="https://tools.ietf.org/html/rfc5735">RFC 5735, Special Use IPv4
     * Addresses</a> and <a href="https://tools.ietf.org/html/rfc6598">RFC 6598,
     * IANA-Reserved IPv4 Prefix for Shared Address Space</a>.</p> <p>When the value of
     * Type is <code>CALCULATED</code> or <code>CLOUDWATCH_METRIC</code>, omit
     * IPAddress.</p>
     */
    inline void SetIPAddress(const char* value) { m_iPAddressHasBeenSet = true; m_iPAddress.assign(value); }

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval that you specify in
     * RequestInterval. Using an IP address that DNS returns, Amazon Route 53 then
     * checks the health of the endpoint.</p> <p>If the endpoint is an EC2 instance, we
     * recommend that you create an Elastic IP address, associate it with your EC2
     * instance, and specify the Elastic IP address for <code>IPAddress</code>. This
     * ensures that the IP address of your instance will never change.</p> <p>For more
     * information, see <a>HealthCheckConfig$FullyQualifiedDomainName</a>.</p>
     * <p>Constraints: Amazon Route 53 can't check the health of endpoints for which
     * the IP address is in local, private, non-routable, or \ multicast ranges. For
     * more information about IP addresses for which you can't create health checks,
     * see <a href="https://tools.ietf.org/html/rfc5735">RFC 5735, Special Use IPv4
     * Addresses</a> and <a href="https://tools.ietf.org/html/rfc6598">RFC 6598,
     * IANA-Reserved IPv4 Prefix for Shared Address Space</a>.</p> <p>When the value of
     * Type is <code>CALCULATED</code> or <code>CLOUDWATCH_METRIC</code>, omit
     * IPAddress.</p>
     */
    inline HealthCheckConfig& WithIPAddress(const Aws::String& value) { SetIPAddress(value); return *this;}

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval that you specify in
     * RequestInterval. Using an IP address that DNS returns, Amazon Route 53 then
     * checks the health of the endpoint.</p> <p>If the endpoint is an EC2 instance, we
     * recommend that you create an Elastic IP address, associate it with your EC2
     * instance, and specify the Elastic IP address for <code>IPAddress</code>. This
     * ensures that the IP address of your instance will never change.</p> <p>For more
     * information, see <a>HealthCheckConfig$FullyQualifiedDomainName</a>.</p>
     * <p>Constraints: Amazon Route 53 can't check the health of endpoints for which
     * the IP address is in local, private, non-routable, or \ multicast ranges. For
     * more information about IP addresses for which you can't create health checks,
     * see <a href="https://tools.ietf.org/html/rfc5735">RFC 5735, Special Use IPv4
     * Addresses</a> and <a href="https://tools.ietf.org/html/rfc6598">RFC 6598,
     * IANA-Reserved IPv4 Prefix for Shared Address Space</a>.</p> <p>When the value of
     * Type is <code>CALCULATED</code> or <code>CLOUDWATCH_METRIC</code>, omit
     * IPAddress.</p>
     */
    inline HealthCheckConfig& WithIPAddress(Aws::String&& value) { SetIPAddress(value); return *this;}

    /**
     * <p>The IPv4 IP address of the endpoint on which you want Amazon Route 53 to
     * perform health checks. If you don't specify a value for <code>IPAddress</code>,
     * Amazon Route 53 sends a DNS request to resolve the domain name that you specify
     * in <code>FullyQualifiedDomainName</code> at the interval that you specify in
     * RequestInterval. Using an IP address that DNS returns, Amazon Route 53 then
     * checks the health of the endpoint.</p> <p>If the endpoint is an EC2 instance, we
     * recommend that you create an Elastic IP address, associate it with your EC2
     * instance, and specify the Elastic IP address for <code>IPAddress</code>. This
     * ensures that the IP address of your instance will never change.</p> <p>For more
     * information, see <a>HealthCheckConfig$FullyQualifiedDomainName</a>.</p>
     * <p>Constraints: Amazon Route 53 can't check the health of endpoints for which
     * the IP address is in local, private, non-routable, or \ multicast ranges. For
     * more information about IP addresses for which you can't create health checks,
     * see <a href="https://tools.ietf.org/html/rfc5735">RFC 5735, Special Use IPv4
     * Addresses</a> and <a href="https://tools.ietf.org/html/rfc6598">RFC 6598,
     * IANA-Reserved IPv4 Prefix for Shared Address Space</a>.</p> <p>When the value of
     * Type is <code>CALCULATED</code> or <code>CLOUDWATCH_METRIC</code>, omit
     * IPAddress.</p>
     */
    inline HealthCheckConfig& WithIPAddress(const char* value) { SetIPAddress(value); return *this;}

    /**
     * <p>The port on the endpoint on which you want Amazon Route 53 to perform health
     * checks. Specify a value for Port only when you specify a value for
     * <code>IPAddress</code>.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on the endpoint on which you want Amazon Route 53 to perform health
     * checks. Specify a value for Port only when you specify a value for
     * <code>IPAddress</code>.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on the endpoint on which you want Amazon Route 53 to perform health
     * checks. Specify a value for Port only when you specify a value for
     * <code>IPAddress</code>.</p>
     */
    inline HealthCheckConfig& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify <code>HTTPS</code> for the
     * value of <code>Type</code>, the endpoint must support TLS v1.0 or later.</p>
     * </important> </li> <li> <p> <b>HTTP_STR_MATCH</b>: Amazon Route 53 tries to
     * establish a TCP connection. If successful, Amazon Route 53 submits an HTTP
     * request and searches the first 5,120 bytes of the response body for the string
     * that you specify in <code>SearchString</code>.</p> </li> <li> <p>
     * <b>HTTPS_STR_MATCH</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an <code>HTTPS</code> request and searches
     * the first 5,120 bytes of the response body for the string that you specify in
     * <code>SearchString</code>.</p> </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries
     * to establish a TCP connection.</p> </li> <li> <p> <b>CLOUDWATCH_METRIC</b>: The
     * health check is associated with a CloudWatch alarm. If the state of the alarm is
     * <code>OK</code>, the health check is considered healthy. If the state is
     * <code>ALARM</code>, the health check is considered unhealthy. If CloudWatch
     * doesn't have sufficient data to determine whether the state is <code>OK</code>
     * or <code>ALARM</code>, the health check status depends on the setting for
     * <code>InsufficientDataHealthStatus</code>: <code>Healthy</code>,
     * <code>Unhealthy</code>, or <code>LastKnownStatus</code>. </p> </li> <li> <p>
     * <b>CALCULATED</b>: For health checks that monitor the status of other health
     * checks, Amazon Route 53 adds up the number of health checks that Amazon Route 53
     * health checkers consider to be healthy and compares that number with the value
     * of <code>HealthThreshold</code>. </p> </li> </ul> <p>For more information about
     * how Amazon Route 53 determines whether an endpoint is healthy, see the
     * introduction to this topic.</p>
     */
    inline const HealthCheckType& GetType() const{ return m_type; }

    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify <code>HTTPS</code> for the
     * value of <code>Type</code>, the endpoint must support TLS v1.0 or later.</p>
     * </important> </li> <li> <p> <b>HTTP_STR_MATCH</b>: Amazon Route 53 tries to
     * establish a TCP connection. If successful, Amazon Route 53 submits an HTTP
     * request and searches the first 5,120 bytes of the response body for the string
     * that you specify in <code>SearchString</code>.</p> </li> <li> <p>
     * <b>HTTPS_STR_MATCH</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an <code>HTTPS</code> request and searches
     * the first 5,120 bytes of the response body for the string that you specify in
     * <code>SearchString</code>.</p> </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries
     * to establish a TCP connection.</p> </li> <li> <p> <b>CLOUDWATCH_METRIC</b>: The
     * health check is associated with a CloudWatch alarm. If the state of the alarm is
     * <code>OK</code>, the health check is considered healthy. If the state is
     * <code>ALARM</code>, the health check is considered unhealthy. If CloudWatch
     * doesn't have sufficient data to determine whether the state is <code>OK</code>
     * or <code>ALARM</code>, the health check status depends on the setting for
     * <code>InsufficientDataHealthStatus</code>: <code>Healthy</code>,
     * <code>Unhealthy</code>, or <code>LastKnownStatus</code>. </p> </li> <li> <p>
     * <b>CALCULATED</b>: For health checks that monitor the status of other health
     * checks, Amazon Route 53 adds up the number of health checks that Amazon Route 53
     * health checkers consider to be healthy and compares that number with the value
     * of <code>HealthThreshold</code>. </p> </li> </ul> <p>For more information about
     * how Amazon Route 53 determines whether an endpoint is healthy, see the
     * introduction to this topic.</p>
     */
    inline void SetType(const HealthCheckType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify <code>HTTPS</code> for the
     * value of <code>Type</code>, the endpoint must support TLS v1.0 or later.</p>
     * </important> </li> <li> <p> <b>HTTP_STR_MATCH</b>: Amazon Route 53 tries to
     * establish a TCP connection. If successful, Amazon Route 53 submits an HTTP
     * request and searches the first 5,120 bytes of the response body for the string
     * that you specify in <code>SearchString</code>.</p> </li> <li> <p>
     * <b>HTTPS_STR_MATCH</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an <code>HTTPS</code> request and searches
     * the first 5,120 bytes of the response body for the string that you specify in
     * <code>SearchString</code>.</p> </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries
     * to establish a TCP connection.</p> </li> <li> <p> <b>CLOUDWATCH_METRIC</b>: The
     * health check is associated with a CloudWatch alarm. If the state of the alarm is
     * <code>OK</code>, the health check is considered healthy. If the state is
     * <code>ALARM</code>, the health check is considered unhealthy. If CloudWatch
     * doesn't have sufficient data to determine whether the state is <code>OK</code>
     * or <code>ALARM</code>, the health check status depends on the setting for
     * <code>InsufficientDataHealthStatus</code>: <code>Healthy</code>,
     * <code>Unhealthy</code>, or <code>LastKnownStatus</code>. </p> </li> <li> <p>
     * <b>CALCULATED</b>: For health checks that monitor the status of other health
     * checks, Amazon Route 53 adds up the number of health checks that Amazon Route 53
     * health checkers consider to be healthy and compares that number with the value
     * of <code>HealthThreshold</code>. </p> </li> </ul> <p>For more information about
     * how Amazon Route 53 determines whether an endpoint is healthy, see the
     * introduction to this topic.</p>
     */
    inline void SetType(HealthCheckType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify <code>HTTPS</code> for the
     * value of <code>Type</code>, the endpoint must support TLS v1.0 or later.</p>
     * </important> </li> <li> <p> <b>HTTP_STR_MATCH</b>: Amazon Route 53 tries to
     * establish a TCP connection. If successful, Amazon Route 53 submits an HTTP
     * request and searches the first 5,120 bytes of the response body for the string
     * that you specify in <code>SearchString</code>.</p> </li> <li> <p>
     * <b>HTTPS_STR_MATCH</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an <code>HTTPS</code> request and searches
     * the first 5,120 bytes of the response body for the string that you specify in
     * <code>SearchString</code>.</p> </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries
     * to establish a TCP connection.</p> </li> <li> <p> <b>CLOUDWATCH_METRIC</b>: The
     * health check is associated with a CloudWatch alarm. If the state of the alarm is
     * <code>OK</code>, the health check is considered healthy. If the state is
     * <code>ALARM</code>, the health check is considered unhealthy. If CloudWatch
     * doesn't have sufficient data to determine whether the state is <code>OK</code>
     * or <code>ALARM</code>, the health check status depends on the setting for
     * <code>InsufficientDataHealthStatus</code>: <code>Healthy</code>,
     * <code>Unhealthy</code>, or <code>LastKnownStatus</code>. </p> </li> <li> <p>
     * <b>CALCULATED</b>: For health checks that monitor the status of other health
     * checks, Amazon Route 53 adds up the number of health checks that Amazon Route 53
     * health checkers consider to be healthy and compares that number with the value
     * of <code>HealthThreshold</code>. </p> </li> </ul> <p>For more information about
     * how Amazon Route 53 determines whether an endpoint is healthy, see the
     * introduction to this topic.</p>
     */
    inline HealthCheckConfig& WithType(const HealthCheckType& value) { SetType(value); return *this;}

    /**
     * <p>The type of health check that you want to create, which indicates how Amazon
     * Route 53 determines whether an endpoint is healthy.</p> <important> <p>You can't
     * change the value of <code>Type</code> after you create a health check.</p>
     * </important> <p>You can create the following types of health checks:</p> <ul>
     * <li> <p> <b>HTTP</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an HTTP request and waits for an HTTP status
     * code of 200 or greater and less than 400.</p> </li> <li> <p> <b>HTTPS</b>:
     * Amazon Route 53 tries to establish a TCP connection. If successful, Amazon Route
     * 53 submits an HTTPS request and waits for an HTTP status code of 200 or greater
     * and less than 400.</p> <important> <p>If you specify <code>HTTPS</code> for the
     * value of <code>Type</code>, the endpoint must support TLS v1.0 or later.</p>
     * </important> </li> <li> <p> <b>HTTP_STR_MATCH</b>: Amazon Route 53 tries to
     * establish a TCP connection. If successful, Amazon Route 53 submits an HTTP
     * request and searches the first 5,120 bytes of the response body for the string
     * that you specify in <code>SearchString</code>.</p> </li> <li> <p>
     * <b>HTTPS_STR_MATCH</b>: Amazon Route 53 tries to establish a TCP connection. If
     * successful, Amazon Route 53 submits an <code>HTTPS</code> request and searches
     * the first 5,120 bytes of the response body for the string that you specify in
     * <code>SearchString</code>.</p> </li> <li> <p> <b>TCP</b>: Amazon Route 53 tries
     * to establish a TCP connection.</p> </li> <li> <p> <b>CLOUDWATCH_METRIC</b>: The
     * health check is associated with a CloudWatch alarm. If the state of the alarm is
     * <code>OK</code>, the health check is considered healthy. If the state is
     * <code>ALARM</code>, the health check is considered unhealthy. If CloudWatch
     * doesn't have sufficient data to determine whether the state is <code>OK</code>
     * or <code>ALARM</code>, the health check status depends on the setting for
     * <code>InsufficientDataHealthStatus</code>: <code>Healthy</code>,
     * <code>Unhealthy</code>, or <code>LastKnownStatus</code>. </p> </li> <li> <p>
     * <b>CALCULATED</b>: For health checks that monitor the status of other health
     * checks, Amazon Route 53 adds up the number of health checks that Amazon Route 53
     * health checkers consider to be healthy and compares that number with the value
     * of <code>HealthThreshold</code>. </p> </li> </ul> <p>For more information about
     * how Amazon Route 53 determines whether an endpoint is healthy, see the
     * introduction to this topic.</p>
     */
    inline HealthCheckConfig& WithType(HealthCheckType&& value) { SetType(value); return *this;}

    /**
     * <p>The path, if any, that you want Amazon Route 53 to request when performing
     * health checks. The path can be any value for which your endpoint will return an
     * HTTP status code of 2xx or 3xx when the endpoint is healthy, for example, the
     * file /docs/route53-health-check.html. </p>
     */
    inline const Aws::String& GetResourcePath() const{ return m_resourcePath; }

    /**
     * <p>The path, if any, that you want Amazon Route 53 to request when performing
     * health checks. The path can be any value for which your endpoint will return an
     * HTTP status code of 2xx or 3xx when the endpoint is healthy, for example, the
     * file /docs/route53-health-check.html. </p>
     */
    inline void SetResourcePath(const Aws::String& value) { m_resourcePathHasBeenSet = true; m_resourcePath = value; }

    /**
     * <p>The path, if any, that you want Amazon Route 53 to request when performing
     * health checks. The path can be any value for which your endpoint will return an
     * HTTP status code of 2xx or 3xx when the endpoint is healthy, for example, the
     * file /docs/route53-health-check.html. </p>
     */
    inline void SetResourcePath(Aws::String&& value) { m_resourcePathHasBeenSet = true; m_resourcePath = value; }

    /**
     * <p>The path, if any, that you want Amazon Route 53 to request when performing
     * health checks. The path can be any value for which your endpoint will return an
     * HTTP status code of 2xx or 3xx when the endpoint is healthy, for example, the
     * file /docs/route53-health-check.html. </p>
     */
    inline void SetResourcePath(const char* value) { m_resourcePathHasBeenSet = true; m_resourcePath.assign(value); }

    /**
     * <p>The path, if any, that you want Amazon Route 53 to request when performing
     * health checks. The path can be any value for which your endpoint will return an
     * HTTP status code of 2xx or 3xx when the endpoint is healthy, for example, the
     * file /docs/route53-health-check.html. </p>
     */
    inline HealthCheckConfig& WithResourcePath(const Aws::String& value) { SetResourcePath(value); return *this;}

    /**
     * <p>The path, if any, that you want Amazon Route 53 to request when performing
     * health checks. The path can be any value for which your endpoint will return an
     * HTTP status code of 2xx or 3xx when the endpoint is healthy, for example, the
     * file /docs/route53-health-check.html. </p>
     */
    inline HealthCheckConfig& WithResourcePath(Aws::String&& value) { SetResourcePath(value); return *this;}

    /**
     * <p>The path, if any, that you want Amazon Route 53 to request when performing
     * health checks. The path can be any value for which your endpoint will return an
     * HTTP status code of 2xx or 3xx when the endpoint is healthy, for example, the
     * file /docs/route53-health-check.html. </p>
     */
    inline HealthCheckConfig& WithResourcePath(const char* value) { SetResourcePath(value); return *this;}

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <p> <b>If you specify</b>
     * <code>IPAddress</code>:</p> <p>The value that you want Amazon Route 53 to pass
     * in the <code>Host</code> header in all health checks except TCP health checks.
     * This is typically the fully qualified DNS name of the website that you are
     * attempting to health check. When Amazon Route 53 checks the health of an
     * endpoint, here is how it constructs the <code>Host</code> header:</p> <ul> <li>
     * <p>If you specify a value of <code>80</code> for <code>Port</code> and
     * <code>HTTP</code> or <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon
     * Route 53 passes the value of <code>FullyQualifiedDomainName</code> to the
     * endpoint in the Host header. </p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify another value for
     * <code>Port</code> and any value except <code>TCP</code> for <code>Type</code>,
     * Amazon Route 53 passes <code>FullyQualifiedDomainName:Port</code> to the
     * endpoint in the <code>Host</code> header.</p> </li> </ul> <p>If you don't
     * specify a value for <code>FullyQualifiedDomainName</code>, Amazon Route 53
     * substitutes the value of <code>IPAddress</code> in the <code>Host</code> header
     * in each of the preceding cases.</p> <p> <b>If you don't specify</b>
     * <code>IPAddress</code>:</p> <p>If you don't specify a value for
     * <code>IPAddress</code>, Amazon Route 53 sends a DNS request to the domain that
     * you specify in <code>FullyQualifiedDomainName</code> at the interval you specify
     * in <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon
     * Route 53 then checks the health of the endpoint.</p> <p>If you want to check the
     * health of weighted, latency, or failover resource record sets and you choose to
     * specify the endpoint only by <code>FullyQualifiedDomainName</code>, we recommend
     * that you create a separate health check for each endpoint. For example, create a
     * health check for each HTTP server that is serving content for www.example.com.
     * For the value of <code>FullyQualifiedDomainName</code>, specify the domain name
     * of the server (such as us-east-1-www.example.com), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if you
     * create a health check for which the value of
     * <code>FullyQualifiedDomainName</code> matches the name of the resource record
     * sets and you then associate the health check with those resource record sets,
     * health check results will be unpredictable.</p> </important> <p>In addition, if
     * the value that you specify for <code>Type</code> is <code>HTTP</code>,
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
     * <code>IPAddress</code>.</p> <p> <b>If you specify</b>
     * <code>IPAddress</code>:</p> <p>The value that you want Amazon Route 53 to pass
     * in the <code>Host</code> header in all health checks except TCP health checks.
     * This is typically the fully qualified DNS name of the website that you are
     * attempting to health check. When Amazon Route 53 checks the health of an
     * endpoint, here is how it constructs the <code>Host</code> header:</p> <ul> <li>
     * <p>If you specify a value of <code>80</code> for <code>Port</code> and
     * <code>HTTP</code> or <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon
     * Route 53 passes the value of <code>FullyQualifiedDomainName</code> to the
     * endpoint in the Host header. </p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify another value for
     * <code>Port</code> and any value except <code>TCP</code> for <code>Type</code>,
     * Amazon Route 53 passes <code>FullyQualifiedDomainName:Port</code> to the
     * endpoint in the <code>Host</code> header.</p> </li> </ul> <p>If you don't
     * specify a value for <code>FullyQualifiedDomainName</code>, Amazon Route 53
     * substitutes the value of <code>IPAddress</code> in the <code>Host</code> header
     * in each of the preceding cases.</p> <p> <b>If you don't specify</b>
     * <code>IPAddress</code>:</p> <p>If you don't specify a value for
     * <code>IPAddress</code>, Amazon Route 53 sends a DNS request to the domain that
     * you specify in <code>FullyQualifiedDomainName</code> at the interval you specify
     * in <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon
     * Route 53 then checks the health of the endpoint.</p> <p>If you want to check the
     * health of weighted, latency, or failover resource record sets and you choose to
     * specify the endpoint only by <code>FullyQualifiedDomainName</code>, we recommend
     * that you create a separate health check for each endpoint. For example, create a
     * health check for each HTTP server that is serving content for www.example.com.
     * For the value of <code>FullyQualifiedDomainName</code>, specify the domain name
     * of the server (such as us-east-1-www.example.com), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if you
     * create a health check for which the value of
     * <code>FullyQualifiedDomainName</code> matches the name of the resource record
     * sets and you then associate the health check with those resource record sets,
     * health check results will be unpredictable.</p> </important> <p>In addition, if
     * the value that you specify for <code>Type</code> is <code>HTTP</code>,
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
     * <code>IPAddress</code>.</p> <p> <b>If you specify</b>
     * <code>IPAddress</code>:</p> <p>The value that you want Amazon Route 53 to pass
     * in the <code>Host</code> header in all health checks except TCP health checks.
     * This is typically the fully qualified DNS name of the website that you are
     * attempting to health check. When Amazon Route 53 checks the health of an
     * endpoint, here is how it constructs the <code>Host</code> header:</p> <ul> <li>
     * <p>If you specify a value of <code>80</code> for <code>Port</code> and
     * <code>HTTP</code> or <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon
     * Route 53 passes the value of <code>FullyQualifiedDomainName</code> to the
     * endpoint in the Host header. </p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify another value for
     * <code>Port</code> and any value except <code>TCP</code> for <code>Type</code>,
     * Amazon Route 53 passes <code>FullyQualifiedDomainName:Port</code> to the
     * endpoint in the <code>Host</code> header.</p> </li> </ul> <p>If you don't
     * specify a value for <code>FullyQualifiedDomainName</code>, Amazon Route 53
     * substitutes the value of <code>IPAddress</code> in the <code>Host</code> header
     * in each of the preceding cases.</p> <p> <b>If you don't specify</b>
     * <code>IPAddress</code>:</p> <p>If you don't specify a value for
     * <code>IPAddress</code>, Amazon Route 53 sends a DNS request to the domain that
     * you specify in <code>FullyQualifiedDomainName</code> at the interval you specify
     * in <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon
     * Route 53 then checks the health of the endpoint.</p> <p>If you want to check the
     * health of weighted, latency, or failover resource record sets and you choose to
     * specify the endpoint only by <code>FullyQualifiedDomainName</code>, we recommend
     * that you create a separate health check for each endpoint. For example, create a
     * health check for each HTTP server that is serving content for www.example.com.
     * For the value of <code>FullyQualifiedDomainName</code>, specify the domain name
     * of the server (such as us-east-1-www.example.com), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if you
     * create a health check for which the value of
     * <code>FullyQualifiedDomainName</code> matches the name of the resource record
     * sets and you then associate the health check with those resource record sets,
     * health check results will be unpredictable.</p> </important> <p>In addition, if
     * the value that you specify for <code>Type</code> is <code>HTTP</code>,
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
     * <code>IPAddress</code>.</p> <p> <b>If you specify</b>
     * <code>IPAddress</code>:</p> <p>The value that you want Amazon Route 53 to pass
     * in the <code>Host</code> header in all health checks except TCP health checks.
     * This is typically the fully qualified DNS name of the website that you are
     * attempting to health check. When Amazon Route 53 checks the health of an
     * endpoint, here is how it constructs the <code>Host</code> header:</p> <ul> <li>
     * <p>If you specify a value of <code>80</code> for <code>Port</code> and
     * <code>HTTP</code> or <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon
     * Route 53 passes the value of <code>FullyQualifiedDomainName</code> to the
     * endpoint in the Host header. </p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify another value for
     * <code>Port</code> and any value except <code>TCP</code> for <code>Type</code>,
     * Amazon Route 53 passes <code>FullyQualifiedDomainName:Port</code> to the
     * endpoint in the <code>Host</code> header.</p> </li> </ul> <p>If you don't
     * specify a value for <code>FullyQualifiedDomainName</code>, Amazon Route 53
     * substitutes the value of <code>IPAddress</code> in the <code>Host</code> header
     * in each of the preceding cases.</p> <p> <b>If you don't specify</b>
     * <code>IPAddress</code>:</p> <p>If you don't specify a value for
     * <code>IPAddress</code>, Amazon Route 53 sends a DNS request to the domain that
     * you specify in <code>FullyQualifiedDomainName</code> at the interval you specify
     * in <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon
     * Route 53 then checks the health of the endpoint.</p> <p>If you want to check the
     * health of weighted, latency, or failover resource record sets and you choose to
     * specify the endpoint only by <code>FullyQualifiedDomainName</code>, we recommend
     * that you create a separate health check for each endpoint. For example, create a
     * health check for each HTTP server that is serving content for www.example.com.
     * For the value of <code>FullyQualifiedDomainName</code>, specify the domain name
     * of the server (such as us-east-1-www.example.com), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if you
     * create a health check for which the value of
     * <code>FullyQualifiedDomainName</code> matches the name of the resource record
     * sets and you then associate the health check with those resource record sets,
     * health check results will be unpredictable.</p> </important> <p>In addition, if
     * the value that you specify for <code>Type</code> is <code>HTTP</code>,
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
     * <code>IPAddress</code>.</p> <p> <b>If you specify</b>
     * <code>IPAddress</code>:</p> <p>The value that you want Amazon Route 53 to pass
     * in the <code>Host</code> header in all health checks except TCP health checks.
     * This is typically the fully qualified DNS name of the website that you are
     * attempting to health check. When Amazon Route 53 checks the health of an
     * endpoint, here is how it constructs the <code>Host</code> header:</p> <ul> <li>
     * <p>If you specify a value of <code>80</code> for <code>Port</code> and
     * <code>HTTP</code> or <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon
     * Route 53 passes the value of <code>FullyQualifiedDomainName</code> to the
     * endpoint in the Host header. </p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify another value for
     * <code>Port</code> and any value except <code>TCP</code> for <code>Type</code>,
     * Amazon Route 53 passes <code>FullyQualifiedDomainName:Port</code> to the
     * endpoint in the <code>Host</code> header.</p> </li> </ul> <p>If you don't
     * specify a value for <code>FullyQualifiedDomainName</code>, Amazon Route 53
     * substitutes the value of <code>IPAddress</code> in the <code>Host</code> header
     * in each of the preceding cases.</p> <p> <b>If you don't specify</b>
     * <code>IPAddress</code>:</p> <p>If you don't specify a value for
     * <code>IPAddress</code>, Amazon Route 53 sends a DNS request to the domain that
     * you specify in <code>FullyQualifiedDomainName</code> at the interval you specify
     * in <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon
     * Route 53 then checks the health of the endpoint.</p> <p>If you want to check the
     * health of weighted, latency, or failover resource record sets and you choose to
     * specify the endpoint only by <code>FullyQualifiedDomainName</code>, we recommend
     * that you create a separate health check for each endpoint. For example, create a
     * health check for each HTTP server that is serving content for www.example.com.
     * For the value of <code>FullyQualifiedDomainName</code>, specify the domain name
     * of the server (such as us-east-1-www.example.com), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if you
     * create a health check for which the value of
     * <code>FullyQualifiedDomainName</code> matches the name of the resource record
     * sets and you then associate the health check with those resource record sets,
     * health check results will be unpredictable.</p> </important> <p>In addition, if
     * the value that you specify for <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline HealthCheckConfig& WithFullyQualifiedDomainName(const Aws::String& value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <p> <b>If you specify</b>
     * <code>IPAddress</code>:</p> <p>The value that you want Amazon Route 53 to pass
     * in the <code>Host</code> header in all health checks except TCP health checks.
     * This is typically the fully qualified DNS name of the website that you are
     * attempting to health check. When Amazon Route 53 checks the health of an
     * endpoint, here is how it constructs the <code>Host</code> header:</p> <ul> <li>
     * <p>If you specify a value of <code>80</code> for <code>Port</code> and
     * <code>HTTP</code> or <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon
     * Route 53 passes the value of <code>FullyQualifiedDomainName</code> to the
     * endpoint in the Host header. </p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify another value for
     * <code>Port</code> and any value except <code>TCP</code> for <code>Type</code>,
     * Amazon Route 53 passes <code>FullyQualifiedDomainName:Port</code> to the
     * endpoint in the <code>Host</code> header.</p> </li> </ul> <p>If you don't
     * specify a value for <code>FullyQualifiedDomainName</code>, Amazon Route 53
     * substitutes the value of <code>IPAddress</code> in the <code>Host</code> header
     * in each of the preceding cases.</p> <p> <b>If you don't specify</b>
     * <code>IPAddress</code>:</p> <p>If you don't specify a value for
     * <code>IPAddress</code>, Amazon Route 53 sends a DNS request to the domain that
     * you specify in <code>FullyQualifiedDomainName</code> at the interval you specify
     * in <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon
     * Route 53 then checks the health of the endpoint.</p> <p>If you want to check the
     * health of weighted, latency, or failover resource record sets and you choose to
     * specify the endpoint only by <code>FullyQualifiedDomainName</code>, we recommend
     * that you create a separate health check for each endpoint. For example, create a
     * health check for each HTTP server that is serving content for www.example.com.
     * For the value of <code>FullyQualifiedDomainName</code>, specify the domain name
     * of the server (such as us-east-1-www.example.com), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if you
     * create a health check for which the value of
     * <code>FullyQualifiedDomainName</code> matches the name of the resource record
     * sets and you then associate the health check with those resource record sets,
     * health check results will be unpredictable.</p> </important> <p>In addition, if
     * the value that you specify for <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline HealthCheckConfig& WithFullyQualifiedDomainName(Aws::String&& value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>Amazon Route 53 behavior depends on whether you specify a value for
     * <code>IPAddress</code>.</p> <p> <b>If you specify</b>
     * <code>IPAddress</code>:</p> <p>The value that you want Amazon Route 53 to pass
     * in the <code>Host</code> header in all health checks except TCP health checks.
     * This is typically the fully qualified DNS name of the website that you are
     * attempting to health check. When Amazon Route 53 checks the health of an
     * endpoint, here is how it constructs the <code>Host</code> header:</p> <ul> <li>
     * <p>If you specify a value of <code>80</code> for <code>Port</code> and
     * <code>HTTP</code> or <code>HTTP_STR_MATCH</code> for <code>Type</code>, Amazon
     * Route 53 passes the value of <code>FullyQualifiedDomainName</code> to the
     * endpoint in the Host header. </p> </li> <li> <p>If you specify a value of
     * <code>443</code> for <code>Port</code> and <code>HTTPS</code> or
     * <code>HTTPS_STR_MATCH</code> for <code>Type</code>, Amazon Route 53 passes the
     * value of <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>Host</code> header.</p> </li> <li> <p>If you specify another value for
     * <code>Port</code> and any value except <code>TCP</code> for <code>Type</code>,
     * Amazon Route 53 passes <code>FullyQualifiedDomainName:Port</code> to the
     * endpoint in the <code>Host</code> header.</p> </li> </ul> <p>If you don't
     * specify a value for <code>FullyQualifiedDomainName</code>, Amazon Route 53
     * substitutes the value of <code>IPAddress</code> in the <code>Host</code> header
     * in each of the preceding cases.</p> <p> <b>If you don't specify</b>
     * <code>IPAddress</code>:</p> <p>If you don't specify a value for
     * <code>IPAddress</code>, Amazon Route 53 sends a DNS request to the domain that
     * you specify in <code>FullyQualifiedDomainName</code> at the interval you specify
     * in <code>RequestInterval</code>. Using an IP address that DNS returns, Amazon
     * Route 53 then checks the health of the endpoint.</p> <p>If you want to check the
     * health of weighted, latency, or failover resource record sets and you choose to
     * specify the endpoint only by <code>FullyQualifiedDomainName</code>, we recommend
     * that you create a separate health check for each endpoint. For example, create a
     * health check for each HTTP server that is serving content for www.example.com.
     * For the value of <code>FullyQualifiedDomainName</code>, specify the domain name
     * of the server (such as us-east-1-www.example.com), not the name of the resource
     * record sets (www.example.com).</p> <important> <p>In this configuration, if you
     * create a health check for which the value of
     * <code>FullyQualifiedDomainName</code> matches the name of the resource record
     * sets and you then associate the health check with those resource record sets,
     * health check results will be unpredictable.</p> </important> <p>In addition, if
     * the value that you specify for <code>Type</code> is <code>HTTP</code>,
     * <code>HTTPS</code>, <code>HTTP_STR_MATCH</code>, or
     * <code>HTTPS_STR_MATCH</code>, Amazon Route 53 passes the value of
     * <code>FullyQualifiedDomainName</code> in the <code>Host</code> header, as it
     * does when you specify a value for <code>IPAddress</code>. If the value of
     * <code>Type</code> is <code>TCP</code>, Amazon Route 53 doesn't pass a
     * <code>Host</code> header.</p>
     */
    inline HealthCheckConfig& WithFullyQualifiedDomainName(const char* value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>If the value of Type is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy.</p> <p>Amazon
     * Route 53 considers case when searching for <code>SearchString</code> in the
     * response body. </p>
     */
    inline const Aws::String& GetSearchString() const{ return m_searchString; }

    /**
     * <p>If the value of Type is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy.</p> <p>Amazon
     * Route 53 considers case when searching for <code>SearchString</code> in the
     * response body. </p>
     */
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>If the value of Type is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy.</p> <p>Amazon
     * Route 53 considers case when searching for <code>SearchString</code> in the
     * response body. </p>
     */
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>If the value of Type is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy.</p> <p>Amazon
     * Route 53 considers case when searching for <code>SearchString</code> in the
     * response body. </p>
     */
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }

    /**
     * <p>If the value of Type is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy.</p> <p>Amazon
     * Route 53 considers case when searching for <code>SearchString</code> in the
     * response body. </p>
     */
    inline HealthCheckConfig& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}

    /**
     * <p>If the value of Type is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy.</p> <p>Amazon
     * Route 53 considers case when searching for <code>SearchString</code> in the
     * response body. </p>
     */
    inline HealthCheckConfig& WithSearchString(Aws::String&& value) { SetSearchString(value); return *this;}

    /**
     * <p>If the value of Type is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy.</p> <p>Amazon
     * Route 53 considers case when searching for <code>SearchString</code> in the
     * response body. </p>
     */
    inline HealthCheckConfig& WithSearchString(const char* value) { SetSearchString(value); return *this;}

    /**
     * <p>The number of seconds between the time that Amazon Route 53 gets a response
     * from your endpoint and the time that it sends the next health-check request.
     * Each Amazon Route 53 health checker makes requests at this interval.</p>
     * <important> <p>You can't change the value of <code>RequestInterval</code> after
     * you create a health check.</p> </important>
     */
    inline int GetRequestInterval() const{ return m_requestInterval; }

    /**
     * <p>The number of seconds between the time that Amazon Route 53 gets a response
     * from your endpoint and the time that it sends the next health-check request.
     * Each Amazon Route 53 health checker makes requests at this interval.</p>
     * <important> <p>You can't change the value of <code>RequestInterval</code> after
     * you create a health check.</p> </important>
     */
    inline void SetRequestInterval(int value) { m_requestIntervalHasBeenSet = true; m_requestInterval = value; }

    /**
     * <p>The number of seconds between the time that Amazon Route 53 gets a response
     * from your endpoint and the time that it sends the next health-check request.
     * Each Amazon Route 53 health checker makes requests at this interval.</p>
     * <important> <p>You can't change the value of <code>RequestInterval</code> after
     * you create a health check.</p> </important>
     */
    inline HealthCheckConfig& WithRequestInterval(int value) { SetRequestInterval(value); return *this;}

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
    inline HealthCheckConfig& WithFailureThreshold(int value) { SetFailureThreshold(value); return *this;}

    /**
     * <p>Specify whether you want Amazon Route 53 to measure the latency between
     * health checkers in multiple AWS regions and your endpoint, and to display
     * CloudWatch latency graphs on the <b>Health Checks</b> page in the Amazon Route
     * 53 console.</p> <important> <p>You can't change the value of
     * <code>MeasureLatency</code> after you create a health check.</p> </important>
     */
    inline bool GetMeasureLatency() const{ return m_measureLatency; }

    /**
     * <p>Specify whether you want Amazon Route 53 to measure the latency between
     * health checkers in multiple AWS regions and your endpoint, and to display
     * CloudWatch latency graphs on the <b>Health Checks</b> page in the Amazon Route
     * 53 console.</p> <important> <p>You can't change the value of
     * <code>MeasureLatency</code> after you create a health check.</p> </important>
     */
    inline void SetMeasureLatency(bool value) { m_measureLatencyHasBeenSet = true; m_measureLatency = value; }

    /**
     * <p>Specify whether you want Amazon Route 53 to measure the latency between
     * health checkers in multiple AWS regions and your endpoint, and to display
     * CloudWatch latency graphs on the <b>Health Checks</b> page in the Amazon Route
     * 53 console.</p> <important> <p>You can't change the value of
     * <code>MeasureLatency</code> after you create a health check.</p> </important>
     */
    inline HealthCheckConfig& WithMeasureLatency(bool value) { SetMeasureLatency(value); return *this;}

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
    inline HealthCheckConfig& WithInverted(bool value) { SetInverted(value); return *this;}

    /**
     * <p>The number of child health checks that are associated with a
     * <code>CALCULATED</code> health that Amazon Route 53 must consider healthy for
     * the <code>CALCULATED</code> health check to be considered healthy. To specify
     * the child health checks that you want to associate with a
     * <code>CALCULATED</code> health check, use the
     * <a>HealthCheckConfig$ChildHealthChecks</a> and
     * <a>HealthCheckConfig$ChildHealthChecks</a> elements.</p> <p>Note the
     * following:</p> <ul> <li> <p>If you specify a number greater than the number of
     * child health checks, Amazon Route 53 always considers this health check to be
     * unhealthy.</p> </li> <li> <p>If you specify <code>0</code>, Amazon Route 53
     * always considers this health check to be healthy.</p> </li> </ul>
     */
    inline int GetHealthThreshold() const{ return m_healthThreshold; }

    /**
     * <p>The number of child health checks that are associated with a
     * <code>CALCULATED</code> health that Amazon Route 53 must consider healthy for
     * the <code>CALCULATED</code> health check to be considered healthy. To specify
     * the child health checks that you want to associate with a
     * <code>CALCULATED</code> health check, use the
     * <a>HealthCheckConfig$ChildHealthChecks</a> and
     * <a>HealthCheckConfig$ChildHealthChecks</a> elements.</p> <p>Note the
     * following:</p> <ul> <li> <p>If you specify a number greater than the number of
     * child health checks, Amazon Route 53 always considers this health check to be
     * unhealthy.</p> </li> <li> <p>If you specify <code>0</code>, Amazon Route 53
     * always considers this health check to be healthy.</p> </li> </ul>
     */
    inline void SetHealthThreshold(int value) { m_healthThresholdHasBeenSet = true; m_healthThreshold = value; }

    /**
     * <p>The number of child health checks that are associated with a
     * <code>CALCULATED</code> health that Amazon Route 53 must consider healthy for
     * the <code>CALCULATED</code> health check to be considered healthy. To specify
     * the child health checks that you want to associate with a
     * <code>CALCULATED</code> health check, use the
     * <a>HealthCheckConfig$ChildHealthChecks</a> and
     * <a>HealthCheckConfig$ChildHealthChecks</a> elements.</p> <p>Note the
     * following:</p> <ul> <li> <p>If you specify a number greater than the number of
     * child health checks, Amazon Route 53 always considers this health check to be
     * unhealthy.</p> </li> <li> <p>If you specify <code>0</code>, Amazon Route 53
     * always considers this health check to be healthy.</p> </li> </ul>
     */
    inline HealthCheckConfig& WithHealthThreshold(int value) { SetHealthThreshold(value); return *this;}

    /**
     * <p>(CALCULATED Health Checks Only) A complex type that contains one
     * <code>ChildHealthCheck</code> element for each health check that you want to
     * associate with a <code>CALCULATED</code> health check.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChildHealthChecks() const{ return m_childHealthChecks; }

    /**
     * <p>(CALCULATED Health Checks Only) A complex type that contains one
     * <code>ChildHealthCheck</code> element for each health check that you want to
     * associate with a <code>CALCULATED</code> health check.</p>
     */
    inline void SetChildHealthChecks(const Aws::Vector<Aws::String>& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks = value; }

    /**
     * <p>(CALCULATED Health Checks Only) A complex type that contains one
     * <code>ChildHealthCheck</code> element for each health check that you want to
     * associate with a <code>CALCULATED</code> health check.</p>
     */
    inline void SetChildHealthChecks(Aws::Vector<Aws::String>&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks = value; }

    /**
     * <p>(CALCULATED Health Checks Only) A complex type that contains one
     * <code>ChildHealthCheck</code> element for each health check that you want to
     * associate with a <code>CALCULATED</code> health check.</p>
     */
    inline HealthCheckConfig& WithChildHealthChecks(const Aws::Vector<Aws::String>& value) { SetChildHealthChecks(value); return *this;}

    /**
     * <p>(CALCULATED Health Checks Only) A complex type that contains one
     * <code>ChildHealthCheck</code> element for each health check that you want to
     * associate with a <code>CALCULATED</code> health check.</p>
     */
    inline HealthCheckConfig& WithChildHealthChecks(Aws::Vector<Aws::String>&& value) { SetChildHealthChecks(value); return *this;}

    /**
     * <p>(CALCULATED Health Checks Only) A complex type that contains one
     * <code>ChildHealthCheck</code> element for each health check that you want to
     * associate with a <code>CALCULATED</code> health check.</p>
     */
    inline HealthCheckConfig& AddChildHealthChecks(const Aws::String& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>(CALCULATED Health Checks Only) A complex type that contains one
     * <code>ChildHealthCheck</code> element for each health check that you want to
     * associate with a <code>CALCULATED</code> health check.</p>
     */
    inline HealthCheckConfig& AddChildHealthChecks(Aws::String&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>(CALCULATED Health Checks Only) A complex type that contains one
     * <code>ChildHealthCheck</code> element for each health check that you want to
     * associate with a <code>CALCULATED</code> health check.</p>
     */
    inline HealthCheckConfig& AddChildHealthChecks(const char* value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>Specify whether you want Amazon Route 53 to send the value of
     * <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>client_hello</code> message during TLS negotiation. This allows the
     * endpoint to respond to <code>HTTPS</code> health check requests with the
     * applicable SSL/TLS certificate.</p> <p>Some endpoints require that
     * <code>HTTPS</code> requests include the host name in the
     * <code>client_hello</code> message. If you don't enable SNI, the status of the
     * health check will be <code>SSL alert handshake_failure</code>. A health check
     * can also have that status for other reasons. If SNI is enabled and you're still
     * getting the error, check the SSL/TLS configuration on your endpoint and confirm
     * that your certificate is valid.</p> <p>The SSL/TLS certificate on your endpoint
     * includes a domain name in the <code>Common Name</code> field and possibly
     * several more in the <code>Subject Alternative Names</code> field. One of the
     * domain names in the certificate should match the value that you specify for
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
     * <code>client_hello</code> message during TLS negotiation. This allows the
     * endpoint to respond to <code>HTTPS</code> health check requests with the
     * applicable SSL/TLS certificate.</p> <p>Some endpoints require that
     * <code>HTTPS</code> requests include the host name in the
     * <code>client_hello</code> message. If you don't enable SNI, the status of the
     * health check will be <code>SSL alert handshake_failure</code>. A health check
     * can also have that status for other reasons. If SNI is enabled and you're still
     * getting the error, check the SSL/TLS configuration on your endpoint and confirm
     * that your certificate is valid.</p> <p>The SSL/TLS certificate on your endpoint
     * includes a domain name in the <code>Common Name</code> field and possibly
     * several more in the <code>Subject Alternative Names</code> field. One of the
     * domain names in the certificate should match the value that you specify for
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
     * <code>client_hello</code> message during TLS negotiation. This allows the
     * endpoint to respond to <code>HTTPS</code> health check requests with the
     * applicable SSL/TLS certificate.</p> <p>Some endpoints require that
     * <code>HTTPS</code> requests include the host name in the
     * <code>client_hello</code> message. If you don't enable SNI, the status of the
     * health check will be <code>SSL alert handshake_failure</code>. A health check
     * can also have that status for other reasons. If SNI is enabled and you're still
     * getting the error, check the SSL/TLS configuration on your endpoint and confirm
     * that your certificate is valid.</p> <p>The SSL/TLS certificate on your endpoint
     * includes a domain name in the <code>Common Name</code> field and possibly
     * several more in the <code>Subject Alternative Names</code> field. One of the
     * domain names in the certificate should match the value that you specify for
     * <code>FullyQualifiedDomainName</code>. If the endpoint responds to the
     * <code>client_hello</code> message with a certificate that does not include the
     * domain name that you specified in <code>FullyQualifiedDomainName</code>, a
     * health checker will retry the handshake. In the second attempt, the health
     * checker will omit <code>FullyQualifiedDomainName</code> from the
     * <code>client_hello</code> message.</p>
     */
    inline HealthCheckConfig& WithEnableSNI(bool value) { SetEnableSNI(value); return *this;}

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
    inline HealthCheckConfig& WithRegions(const Aws::Vector<HealthCheckRegion>& value) { SetRegions(value); return *this;}

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline HealthCheckConfig& WithRegions(Aws::Vector<HealthCheckRegion>&& value) { SetRegions(value); return *this;}

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline HealthCheckConfig& AddRegions(const HealthCheckRegion& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one Region element for each region from which
     * you want Amazon Route 53 health checkers to check the specified endpoint.</p>
     */
    inline HealthCheckConfig& AddRegions(HealthCheckRegion&& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p>
     */
    inline const AlarmIdentifier& GetAlarmIdentifier() const{ return m_alarmIdentifier; }

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p>
     */
    inline void SetAlarmIdentifier(const AlarmIdentifier& value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier = value; }

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p>
     */
    inline void SetAlarmIdentifier(AlarmIdentifier&& value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier = value; }

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p>
     */
    inline HealthCheckConfig& WithAlarmIdentifier(const AlarmIdentifier& value) { SetAlarmIdentifier(value); return *this;}

    /**
     * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
     * Route 53 health checkers to use to determine whether this health check is
     * healthy.</p>
     */
    inline HealthCheckConfig& WithAlarmIdentifier(AlarmIdentifier&& value) { SetAlarmIdentifier(value); return *this;}

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53uses the status of the health check
     * from the last time CloudWatch had sufficient data to determine the alarm state.
     * For new health checks that have no last known status, the default status for the
     * health check is healthy.</p> </li> </ul>
     */
    inline const InsufficientDataHealthStatus& GetInsufficientDataHealthStatus() const{ return m_insufficientDataHealthStatus; }

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53uses the status of the health check
     * from the last time CloudWatch had sufficient data to determine the alarm state.
     * For new health checks that have no last known status, the default status for the
     * health check is healthy.</p> </li> </ul>
     */
    inline void SetInsufficientDataHealthStatus(const InsufficientDataHealthStatus& value) { m_insufficientDataHealthStatusHasBeenSet = true; m_insufficientDataHealthStatus = value; }

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53uses the status of the health check
     * from the last time CloudWatch had sufficient data to determine the alarm state.
     * For new health checks that have no last known status, the default status for the
     * health check is healthy.</p> </li> </ul>
     */
    inline void SetInsufficientDataHealthStatus(InsufficientDataHealthStatus&& value) { m_insufficientDataHealthStatusHasBeenSet = true; m_insufficientDataHealthStatus = value; }

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53uses the status of the health check
     * from the last time CloudWatch had sufficient data to determine the alarm state.
     * For new health checks that have no last known status, the default status for the
     * health check is healthy.</p> </li> </ul>
     */
    inline HealthCheckConfig& WithInsufficientDataHealthStatus(const InsufficientDataHealthStatus& value) { SetInsufficientDataHealthStatus(value); return *this;}

    /**
     * <p>When CloudWatch has insufficient data about the metric to determine the alarm
     * state, the status that you want Amazon Route 53 to assign to the health
     * check:</p> <ul> <li> <p> <code>Healthy</code>: Amazon Route 53 considers the
     * health check to be healthy.</p> </li> <li> <p> <code>Unhealthy</code>: Amazon
     * Route 53 considers the health check to be unhealthy.</p> </li> <li> <p>
     * <code>LastKnownStatus</code>: Amazon Route 53uses the status of the health check
     * from the last time CloudWatch had sufficient data to determine the alarm state.
     * For new health checks that have no last known status, the default status for the
     * health check is healthy.</p> </li> </ul>
     */
    inline HealthCheckConfig& WithInsufficientDataHealthStatus(InsufficientDataHealthStatus&& value) { SetInsufficientDataHealthStatus(value); return *this;}

  private:
    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    HealthCheckType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_resourcePath;
    bool m_resourcePathHasBeenSet;
    Aws::String m_fullyQualifiedDomainName;
    bool m_fullyQualifiedDomainNameHasBeenSet;
    Aws::String m_searchString;
    bool m_searchStringHasBeenSet;
    int m_requestInterval;
    bool m_requestIntervalHasBeenSet;
    int m_failureThreshold;
    bool m_failureThresholdHasBeenSet;
    bool m_measureLatency;
    bool m_measureLatencyHasBeenSet;
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
