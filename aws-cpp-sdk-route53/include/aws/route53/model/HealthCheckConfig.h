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
   * <p>A complex type that contains the health check configuration.</p>
   */
  class AWS_ROUTE53_API HealthCheckConfig
  {
  public:
    HealthCheckConfig();
    HealthCheckConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    HealthCheckConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>IP Address of the instance being checked. </p>
     */
    inline const Aws::String& GetIPAddress() const{ return m_iPAddress; }

    /**
     * <p>IP Address of the instance being checked. </p>
     */
    inline void SetIPAddress(const Aws::String& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>IP Address of the instance being checked. </p>
     */
    inline void SetIPAddress(Aws::String&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>IP Address of the instance being checked. </p>
     */
    inline void SetIPAddress(const char* value) { m_iPAddressHasBeenSet = true; m_iPAddress.assign(value); }

    /**
     * <p>IP Address of the instance being checked. </p>
     */
    inline HealthCheckConfig& WithIPAddress(const Aws::String& value) { SetIPAddress(value); return *this;}

    /**
     * <p>IP Address of the instance being checked. </p>
     */
    inline HealthCheckConfig& WithIPAddress(Aws::String&& value) { SetIPAddress(value); return *this;}

    /**
     * <p>IP Address of the instance being checked. </p>
     */
    inline HealthCheckConfig& WithIPAddress(const char* value) { SetIPAddress(value); return *this;}

    /**
     * <p>Port on which connection will be opened to the instance to health check. For
     * HTTP and HTTP_STR_MATCH this defaults to 80 if the port is not specified. For
     * HTTPS and HTTPS_STR_MATCH this defaults to 443 if the port is not specified.</p>
     */
    inline long GetPort() const{ return m_port; }

    /**
     * <p>Port on which connection will be opened to the instance to health check. For
     * HTTP and HTTP_STR_MATCH this defaults to 80 if the port is not specified. For
     * HTTPS and HTTPS_STR_MATCH this defaults to 443 if the port is not specified.</p>
     */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port on which connection will be opened to the instance to health check. For
     * HTTP and HTTP_STR_MATCH this defaults to 80 if the port is not specified. For
     * HTTPS and HTTPS_STR_MATCH this defaults to 443 if the port is not specified.</p>
     */
    inline HealthCheckConfig& WithPort(long value) { SetPort(value); return *this;}

    /**
     * <p>The type of health check to be performed. Currently supported types are TCP,
     * HTTP, HTTPS, HTTP_STR_MATCH, and HTTPS_STR_MATCH.</p>
     */
    inline const HealthCheckType& GetType() const{ return m_type; }

    /**
     * <p>The type of health check to be performed. Currently supported types are TCP,
     * HTTP, HTTPS, HTTP_STR_MATCH, and HTTPS_STR_MATCH.</p>
     */
    inline void SetType(const HealthCheckType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of health check to be performed. Currently supported types are TCP,
     * HTTP, HTTPS, HTTP_STR_MATCH, and HTTPS_STR_MATCH.</p>
     */
    inline void SetType(HealthCheckType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of health check to be performed. Currently supported types are TCP,
     * HTTP, HTTPS, HTTP_STR_MATCH, and HTTPS_STR_MATCH.</p>
     */
    inline HealthCheckConfig& WithType(const HealthCheckType& value) { SetType(value); return *this;}

    /**
     * <p>The type of health check to be performed. Currently supported types are TCP,
     * HTTP, HTTPS, HTTP_STR_MATCH, and HTTPS_STR_MATCH.</p>
     */
    inline HealthCheckConfig& WithType(HealthCheckType&& value) { SetType(value); return *this;}

    /**
     * <p>Path to ping on the instance to check the health. Required for HTTP, HTTPS,
     * HTTP_STR_MATCH, and HTTPS_STR_MATCH health checks. The HTTP request is issued to
     * the instance on the given port and path.</p>
     */
    inline const Aws::String& GetResourcePath() const{ return m_resourcePath; }

    /**
     * <p>Path to ping on the instance to check the health. Required for HTTP, HTTPS,
     * HTTP_STR_MATCH, and HTTPS_STR_MATCH health checks. The HTTP request is issued to
     * the instance on the given port and path.</p>
     */
    inline void SetResourcePath(const Aws::String& value) { m_resourcePathHasBeenSet = true; m_resourcePath = value; }

    /**
     * <p>Path to ping on the instance to check the health. Required for HTTP, HTTPS,
     * HTTP_STR_MATCH, and HTTPS_STR_MATCH health checks. The HTTP request is issued to
     * the instance on the given port and path.</p>
     */
    inline void SetResourcePath(Aws::String&& value) { m_resourcePathHasBeenSet = true; m_resourcePath = value; }

    /**
     * <p>Path to ping on the instance to check the health. Required for HTTP, HTTPS,
     * HTTP_STR_MATCH, and HTTPS_STR_MATCH health checks. The HTTP request is issued to
     * the instance on the given port and path.</p>
     */
    inline void SetResourcePath(const char* value) { m_resourcePathHasBeenSet = true; m_resourcePath.assign(value); }

    /**
     * <p>Path to ping on the instance to check the health. Required for HTTP, HTTPS,
     * HTTP_STR_MATCH, and HTTPS_STR_MATCH health checks. The HTTP request is issued to
     * the instance on the given port and path.</p>
     */
    inline HealthCheckConfig& WithResourcePath(const Aws::String& value) { SetResourcePath(value); return *this;}

    /**
     * <p>Path to ping on the instance to check the health. Required for HTTP, HTTPS,
     * HTTP_STR_MATCH, and HTTPS_STR_MATCH health checks. The HTTP request is issued to
     * the instance on the given port and path.</p>
     */
    inline HealthCheckConfig& WithResourcePath(Aws::String&& value) { SetResourcePath(value); return *this;}

    /**
     * <p>Path to ping on the instance to check the health. Required for HTTP, HTTPS,
     * HTTP_STR_MATCH, and HTTPS_STR_MATCH health checks. The HTTP request is issued to
     * the instance on the given port and path.</p>
     */
    inline HealthCheckConfig& WithResourcePath(const char* value) { SetResourcePath(value); return *this;}

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     */
    inline const Aws::String& GetFullyQualifiedDomainName() const{ return m_fullyQualifiedDomainName; }

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     */
    inline void SetFullyQualifiedDomainName(const Aws::String& value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName = value; }

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     */
    inline void SetFullyQualifiedDomainName(Aws::String&& value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName = value; }

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     */
    inline void SetFullyQualifiedDomainName(const char* value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName.assign(value); }

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     */
    inline HealthCheckConfig& WithFullyQualifiedDomainName(const Aws::String& value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     */
    inline HealthCheckConfig& WithFullyQualifiedDomainName(Aws::String&& value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     */
    inline HealthCheckConfig& WithFullyQualifiedDomainName(const char* value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>A string to search for in the body of a health check response. Required for
     * HTTP_STR_MATCH and HTTPS_STR_MATCH health checks.</p>
     */
    inline const Aws::String& GetSearchString() const{ return m_searchString; }

    /**
     * <p>A string to search for in the body of a health check response. Required for
     * HTTP_STR_MATCH and HTTPS_STR_MATCH health checks.</p>
     */
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>A string to search for in the body of a health check response. Required for
     * HTTP_STR_MATCH and HTTPS_STR_MATCH health checks.</p>
     */
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>A string to search for in the body of a health check response. Required for
     * HTTP_STR_MATCH and HTTPS_STR_MATCH health checks.</p>
     */
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }

    /**
     * <p>A string to search for in the body of a health check response. Required for
     * HTTP_STR_MATCH and HTTPS_STR_MATCH health checks.</p>
     */
    inline HealthCheckConfig& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}

    /**
     * <p>A string to search for in the body of a health check response. Required for
     * HTTP_STR_MATCH and HTTPS_STR_MATCH health checks.</p>
     */
    inline HealthCheckConfig& WithSearchString(Aws::String&& value) { SetSearchString(value); return *this;}

    /**
     * <p>A string to search for in the body of a health check response. Required for
     * HTTP_STR_MATCH and HTTPS_STR_MATCH health checks.</p>
     */
    inline HealthCheckConfig& WithSearchString(const char* value) { SetSearchString(value); return *this;}

    /**
     * <p>The number of seconds between the time that Amazon Route 53 gets a response
     * from your endpoint and the time that it sends the next health-check request.</p>
     * <p>Each Amazon Route 53 health checker makes requests at this interval. Valid
     * values are 10 and 30. The default value is 30.</p>
     */
    inline long GetRequestInterval() const{ return m_requestInterval; }

    /**
     * <p>The number of seconds between the time that Amazon Route 53 gets a response
     * from your endpoint and the time that it sends the next health-check request.</p>
     * <p>Each Amazon Route 53 health checker makes requests at this interval. Valid
     * values are 10 and 30. The default value is 30.</p>
     */
    inline void SetRequestInterval(long value) { m_requestIntervalHasBeenSet = true; m_requestInterval = value; }

    /**
     * <p>The number of seconds between the time that Amazon Route 53 gets a response
     * from your endpoint and the time that it sends the next health-check request.</p>
     * <p>Each Amazon Route 53 health checker makes requests at this interval. Valid
     * values are 10 and 30. The default value is 30.</p>
     */
    inline HealthCheckConfig& WithRequestInterval(long value) { SetRequestInterval(value); return *this;}

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa.</p> <p>Valid values are integers between 1 and 10. For
     * more information, see "How Amazon Route 53 Determines Whether an Endpoint Is
     * Healthy" in the Amazon Route 53 Developer Guide.</p>
     */
    inline long GetFailureThreshold() const{ return m_failureThreshold; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa.</p> <p>Valid values are integers between 1 and 10. For
     * more information, see "How Amazon Route 53 Determines Whether an Endpoint Is
     * Healthy" in the Amazon Route 53 Developer Guide.</p>
     */
    inline void SetFailureThreshold(long value) { m_failureThresholdHasBeenSet = true; m_failureThreshold = value; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa.</p> <p>Valid values are integers between 1 and 10. For
     * more information, see "How Amazon Route 53 Determines Whether an Endpoint Is
     * Healthy" in the Amazon Route 53 Developer Guide.</p>
     */
    inline HealthCheckConfig& WithFailureThreshold(long value) { SetFailureThreshold(value); return *this;}

    /**
     * <p>A Boolean value that indicates whether you want Amazon Route 53 to measure
     * the latency between health checkers in multiple AWS regions and your endpoint
     * and to display CloudWatch latency graphs in the Amazon Route 53 console.</p>
     */
    inline bool GetMeasureLatency() const{ return m_measureLatency; }

    /**
     * <p>A Boolean value that indicates whether you want Amazon Route 53 to measure
     * the latency between health checkers in multiple AWS regions and your endpoint
     * and to display CloudWatch latency graphs in the Amazon Route 53 console.</p>
     */
    inline void SetMeasureLatency(bool value) { m_measureLatencyHasBeenSet = true; m_measureLatency = value; }

    /**
     * <p>A Boolean value that indicates whether you want Amazon Route 53 to measure
     * the latency between health checkers in multiple AWS regions and your endpoint
     * and to display CloudWatch latency graphs in the Amazon Route 53 console.</p>
     */
    inline HealthCheckConfig& WithMeasureLatency(bool value) { SetMeasureLatency(value); return *this;}

    /**
     * <p>A boolean value that indicates whether the status of health check should be
     * inverted. For example, if a health check is healthy but <code>Inverted</code> is
     * <code>True</code>, then Amazon Route 53 considers the health check to be
     * unhealthy.</p>
     */
    inline bool GetInverted() const{ return m_inverted; }

    /**
     * <p>A boolean value that indicates whether the status of health check should be
     * inverted. For example, if a health check is healthy but <code>Inverted</code> is
     * <code>True</code>, then Amazon Route 53 considers the health check to be
     * unhealthy.</p>
     */
    inline void SetInverted(bool value) { m_invertedHasBeenSet = true; m_inverted = value; }

    /**
     * <p>A boolean value that indicates whether the status of health check should be
     * inverted. For example, if a health check is healthy but <code>Inverted</code> is
     * <code>True</code>, then Amazon Route 53 considers the health check to be
     * unhealthy.</p>
     */
    inline HealthCheckConfig& WithInverted(bool value) { SetInverted(value); return *this;}

    /**
     * <p>The minimum number of child health checks that must be healthy for Amazon
     * Route 53 to consider the parent health check to be healthy. Valid values are
     * integers between 0 and 256, inclusive.</p>
     */
    inline long GetHealthThreshold() const{ return m_healthThreshold; }

    /**
     * <p>The minimum number of child health checks that must be healthy for Amazon
     * Route 53 to consider the parent health check to be healthy. Valid values are
     * integers between 0 and 256, inclusive.</p>
     */
    inline void SetHealthThreshold(long value) { m_healthThresholdHasBeenSet = true; m_healthThreshold = value; }

    /**
     * <p>The minimum number of child health checks that must be healthy for Amazon
     * Route 53 to consider the parent health check to be healthy. Valid values are
     * integers between 0 and 256, inclusive.</p>
     */
    inline HealthCheckConfig& WithHealthThreshold(long value) { SetHealthThreshold(value); return *this;}

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChildHealthChecks() const{ return m_childHealthChecks; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p>
     */
    inline void SetChildHealthChecks(const Aws::Vector<Aws::String>& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks = value; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p>
     */
    inline void SetChildHealthChecks(Aws::Vector<Aws::String>&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks = value; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p>
     */
    inline HealthCheckConfig& WithChildHealthChecks(const Aws::Vector<Aws::String>& value) { SetChildHealthChecks(value); return *this;}

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p>
     */
    inline HealthCheckConfig& WithChildHealthChecks(Aws::Vector<Aws::String>&& value) { SetChildHealthChecks(value); return *this;}

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p>
     */
    inline HealthCheckConfig& AddChildHealthChecks(const Aws::String& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p>
     */
    inline HealthCheckConfig& AddChildHealthChecks(Aws::String&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p>
     */
    inline HealthCheckConfig& AddChildHealthChecks(const char* value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

  private:
    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    HealthCheckType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_resourcePath;
    bool m_resourcePathHasBeenSet;
    Aws::String m_fullyQualifiedDomainName;
    bool m_fullyQualifiedDomainNameHasBeenSet;
    Aws::String m_searchString;
    bool m_searchStringHasBeenSet;
    long m_requestInterval;
    bool m_requestIntervalHasBeenSet;
    long m_failureThreshold;
    bool m_failureThresholdHasBeenSet;
    bool m_measureLatency;
    bool m_measureLatencyHasBeenSet;
    bool m_inverted;
    bool m_invertedHasBeenSet;
    long m_healthThreshold;
    bool m_healthThresholdHasBeenSet;
    Aws::Vector<Aws::String> m_childHealthChecks;
    bool m_childHealthChecksHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
