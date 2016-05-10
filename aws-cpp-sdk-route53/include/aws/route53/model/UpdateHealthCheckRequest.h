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
   * <p>>A complex type that contains information about the request to update a
   * health check.</p>
   */
  class AWS_ROUTE53_API UpdateHealthCheckRequest : public Route53Request
  {
  public:
    UpdateHealthCheckRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the health check to update.</p>
     */
    inline const Aws::String& GetHealthCheckId() const{ return m_healthCheckId; }

    /**
     * <p>The ID of the health check to update.</p>
     */
    inline void SetHealthCheckId(const Aws::String& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID of the health check to update.</p>
     */
    inline void SetHealthCheckId(Aws::String&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID of the health check to update.</p>
     */
    inline void SetHealthCheckId(const char* value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId.assign(value); }

    /**
     * <p>The ID of the health check to update.</p>
     */
    inline UpdateHealthCheckRequest& WithHealthCheckId(const Aws::String& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID of the health check to update.</p>
     */
    inline UpdateHealthCheckRequest& WithHealthCheckId(Aws::String&& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID of the health check to update.</p>
     */
    inline UpdateHealthCheckRequest& WithHealthCheckId(const char* value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>Optional. When you specify a health check version, Amazon Route 53 compares
     * this value with the current value in the health check, which prevents you from
     * updating the health check when the versions don't match. Using
     * <code>HealthCheckVersion</code> lets you prevent overwriting another change to
     * the health check.</p>
     */
    inline long long GetHealthCheckVersion() const{ return m_healthCheckVersion; }

    /**
     * <p>Optional. When you specify a health check version, Amazon Route 53 compares
     * this value with the current value in the health check, which prevents you from
     * updating the health check when the versions don't match. Using
     * <code>HealthCheckVersion</code> lets you prevent overwriting another change to
     * the health check.</p>
     */
    inline void SetHealthCheckVersion(long long value) { m_healthCheckVersionHasBeenSet = true; m_healthCheckVersion = value; }

    /**
     * <p>Optional. When you specify a health check version, Amazon Route 53 compares
     * this value with the current value in the health check, which prevents you from
     * updating the health check when the versions don't match. Using
     * <code>HealthCheckVersion</code> lets you prevent overwriting another change to
     * the health check.</p>
     */
    inline UpdateHealthCheckRequest& WithHealthCheckVersion(long long value) { SetHealthCheckVersion(value); return *this;}

    /**
     * <p>The IP address of the resource that you want to check.</p> <p>Specify this
     * value only if you want to change it.</p>
     */
    inline const Aws::String& GetIPAddress() const{ return m_iPAddress; }

    /**
     * <p>The IP address of the resource that you want to check.</p> <p>Specify this
     * value only if you want to change it.</p>
     */
    inline void SetIPAddress(const Aws::String& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>The IP address of the resource that you want to check.</p> <p>Specify this
     * value only if you want to change it.</p>
     */
    inline void SetIPAddress(Aws::String&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>The IP address of the resource that you want to check.</p> <p>Specify this
     * value only if you want to change it.</p>
     */
    inline void SetIPAddress(const char* value) { m_iPAddressHasBeenSet = true; m_iPAddress.assign(value); }

    /**
     * <p>The IP address of the resource that you want to check.</p> <p>Specify this
     * value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithIPAddress(const Aws::String& value) { SetIPAddress(value); return *this;}

    /**
     * <p>The IP address of the resource that you want to check.</p> <p>Specify this
     * value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithIPAddress(Aws::String&& value) { SetIPAddress(value); return *this;}

    /**
     * <p>The IP address of the resource that you want to check.</p> <p>Specify this
     * value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithIPAddress(const char* value) { SetIPAddress(value); return *this;}

    /**
     * <p>The port on which you want Amazon Route 53 to open a connection to perform
     * health checks.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline long GetPort() const{ return m_port; }

    /**
     * <p>The port on which you want Amazon Route 53 to open a connection to perform
     * health checks.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which you want Amazon Route 53 to open a connection to perform
     * health checks.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithPort(long value) { SetPort(value); return *this;}

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
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline const Aws::String& GetFullyQualifiedDomainName() const{ return m_fullyQualifiedDomainName; }

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline void SetFullyQualifiedDomainName(const Aws::String& value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName = value; }

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline void SetFullyQualifiedDomainName(Aws::String&& value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName = value; }

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline void SetFullyQualifiedDomainName(const char* value) { m_fullyQualifiedDomainNameHasBeenSet = true; m_fullyQualifiedDomainName.assign(value); }

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithFullyQualifiedDomainName(const Aws::String& value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithFullyQualifiedDomainName(Aws::String&& value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the instance to be health checked.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithFullyQualifiedDomainName(const char* value) { SetFullyQualifiedDomainName(value); return *this;}

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. Amazon Route
     * 53 considers case when searching for <code>SearchString</code> in the response
     * body.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline const Aws::String& GetSearchString() const{ return m_searchString; }

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. Amazon Route
     * 53 considers case when searching for <code>SearchString</code> in the response
     * body.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. Amazon Route
     * 53 considers case when searching for <code>SearchString</code> in the response
     * body.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. Amazon Route
     * 53 considers case when searching for <code>SearchString</code> in the response
     * body.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. Amazon Route
     * 53 considers case when searching for <code>SearchString</code> in the response
     * body.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. Amazon Route
     * 53 considers case when searching for <code>SearchString</code> in the response
     * body.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithSearchString(Aws::String&& value) { SetSearchString(value); return *this;}

    /**
     * <p>If the value of <code>Type</code> is <code>HTTP_STR_MATCH</code> or
     * <code>HTTP_STR_MATCH</code>, the string that you want Amazon Route 53 to search
     * for in the response body from the specified resource. If the string appears in
     * the response body, Amazon Route 53 considers the resource healthy. Amazon Route
     * 53 considers case when searching for <code>SearchString</code> in the response
     * body.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithSearchString(const char* value) { SetSearchString(value); return *this;}

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa.</p> <p>Valid values are integers between 1 and 10. For
     * more information, see "How Amazon Route 53 Determines Whether an Endpoint Is
     * Healthy" in the Amazon Route 53 Developer Guide.</p> <p>Specify this value only
     * if you want to change it.</p>
     */
    inline long GetFailureThreshold() const{ return m_failureThreshold; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa.</p> <p>Valid values are integers between 1 and 10. For
     * more information, see "How Amazon Route 53 Determines Whether an Endpoint Is
     * Healthy" in the Amazon Route 53 Developer Guide.</p> <p>Specify this value only
     * if you want to change it.</p>
     */
    inline void SetFailureThreshold(long value) { m_failureThresholdHasBeenSet = true; m_failureThreshold = value; }

    /**
     * <p>The number of consecutive health checks that an endpoint must pass or fail
     * for Amazon Route 53 to change the current status of the endpoint from unhealthy
     * to healthy or vice versa.</p> <p>Valid values are integers between 1 and 10. For
     * more information, see "How Amazon Route 53 Determines Whether an Endpoint Is
     * Healthy" in the Amazon Route 53 Developer Guide.</p> <p>Specify this value only
     * if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithFailureThreshold(long value) { SetFailureThreshold(value); return *this;}

    /**
     * <p>A boolean value that indicates whether the status of health check should be
     * inverted. For example, if a health check is healthy but <code>Inverted</code> is
     * <code>True</code>, then Amazon Route 53 considers the health check to be
     * unhealthy.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline bool GetInverted() const{ return m_inverted; }

    /**
     * <p>A boolean value that indicates whether the status of health check should be
     * inverted. For example, if a health check is healthy but <code>Inverted</code> is
     * <code>True</code>, then Amazon Route 53 considers the health check to be
     * unhealthy.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline void SetInverted(bool value) { m_invertedHasBeenSet = true; m_inverted = value; }

    /**
     * <p>A boolean value that indicates whether the status of health check should be
     * inverted. For example, if a health check is healthy but <code>Inverted</code> is
     * <code>True</code>, then Amazon Route 53 considers the health check to be
     * unhealthy.</p> <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithInverted(bool value) { SetInverted(value); return *this;}

    /**
     * <p>The minimum number of child health checks that must be healthy for Amazon
     * Route 53 to consider the parent health check to be healthy. Valid values are
     * integers between 0 and 256, inclusive.</p> <p>Specify this value only if you
     * want to change it.</p>
     */
    inline long GetHealthThreshold() const{ return m_healthThreshold; }

    /**
     * <p>The minimum number of child health checks that must be healthy for Amazon
     * Route 53 to consider the parent health check to be healthy. Valid values are
     * integers between 0 and 256, inclusive.</p> <p>Specify this value only if you
     * want to change it.</p>
     */
    inline void SetHealthThreshold(long value) { m_healthThresholdHasBeenSet = true; m_healthThreshold = value; }

    /**
     * <p>The minimum number of child health checks that must be healthy for Amazon
     * Route 53 to consider the parent health check to be healthy. Valid values are
     * integers between 0 and 256, inclusive.</p> <p>Specify this value only if you
     * want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithHealthThreshold(long value) { SetHealthThreshold(value); return *this;}

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p> <p>Specify this value only if
     * you want to change it.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChildHealthChecks() const{ return m_childHealthChecks; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p> <p>Specify this value only if
     * you want to change it.</p>
     */
    inline void SetChildHealthChecks(const Aws::Vector<Aws::String>& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks = value; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p> <p>Specify this value only if
     * you want to change it.</p>
     */
    inline void SetChildHealthChecks(Aws::Vector<Aws::String>&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks = value; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p> <p>Specify this value only if
     * you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithChildHealthChecks(const Aws::Vector<Aws::String>& value) { SetChildHealthChecks(value); return *this;}

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p> <p>Specify this value only if
     * you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithChildHealthChecks(Aws::Vector<Aws::String>&& value) { SetChildHealthChecks(value); return *this;}

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p> <p>Specify this value only if
     * you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& AddChildHealthChecks(const Aws::String& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p> <p>Specify this value only if
     * you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& AddChildHealthChecks(Aws::String&& value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>For a specified parent health check, a list of <code>HealthCheckId</code>
     * values for the associated child health checks.</p> <p>Specify this value only if
     * you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& AddChildHealthChecks(const char* value) { m_childHealthChecksHasBeenSet = true; m_childHealthChecks.push_back(value); return *this; }

    /**
     * <p>Specify whether you want Amazon Route 53 to send the value of
     * <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>client_hello</code> message during TLS negotiation. If you don't specify a
     * value for <code>EnableSNI</code>, Amazon Route 53 defaults to <code>true</code>
     * when <code>Type</code> is <code>HTTPS</code> or <code>HTTPS_STR_MATCH</code> and
     * defaults to <code>false</code> when <code>Type</code> is any other value.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline bool GetEnableSNI() const{ return m_enableSNI; }

    /**
     * <p>Specify whether you want Amazon Route 53 to send the value of
     * <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>client_hello</code> message during TLS negotiation. If you don't specify a
     * value for <code>EnableSNI</code>, Amazon Route 53 defaults to <code>true</code>
     * when <code>Type</code> is <code>HTTPS</code> or <code>HTTPS_STR_MATCH</code> and
     * defaults to <code>false</code> when <code>Type</code> is any other value.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline void SetEnableSNI(bool value) { m_enableSNIHasBeenSet = true; m_enableSNI = value; }

    /**
     * <p>Specify whether you want Amazon Route 53 to send the value of
     * <code>FullyQualifiedDomainName</code> to the endpoint in the
     * <code>client_hello</code> message during TLS negotiation. If you don't specify a
     * value for <code>EnableSNI</code>, Amazon Route 53 defaults to <code>true</code>
     * when <code>Type</code> is <code>HTTPS</code> or <code>HTTPS_STR_MATCH</code> and
     * defaults to <code>false</code> when <code>Type</code> is any other value.</p>
     * <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithEnableSNI(bool value) { SetEnableSNI(value); return *this;}

    /**
     * <p>A list of <code>HealthCheckRegion</code> values that specify the Amazon EC2
     * regions that you want Amazon Route 53 to use to perform health checks. You must
     * specify at least three regions.</p> <note>When you remove a region from the
     * list, Amazon Route 53 will briefly continue to check your endpoint from that
     * region.</note> <p>Specify this value only if you want to change it.</p>
     */
    inline const Aws::Vector<HealthCheckRegion>& GetRegions() const{ return m_regions; }

    /**
     * <p>A list of <code>HealthCheckRegion</code> values that specify the Amazon EC2
     * regions that you want Amazon Route 53 to use to perform health checks. You must
     * specify at least three regions.</p> <note>When you remove a region from the
     * list, Amazon Route 53 will briefly continue to check your endpoint from that
     * region.</note> <p>Specify this value only if you want to change it.</p>
     */
    inline void SetRegions(const Aws::Vector<HealthCheckRegion>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A list of <code>HealthCheckRegion</code> values that specify the Amazon EC2
     * regions that you want Amazon Route 53 to use to perform health checks. You must
     * specify at least three regions.</p> <note>When you remove a region from the
     * list, Amazon Route 53 will briefly continue to check your endpoint from that
     * region.</note> <p>Specify this value only if you want to change it.</p>
     */
    inline void SetRegions(Aws::Vector<HealthCheckRegion>&& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A list of <code>HealthCheckRegion</code> values that specify the Amazon EC2
     * regions that you want Amazon Route 53 to use to perform health checks. You must
     * specify at least three regions.</p> <note>When you remove a region from the
     * list, Amazon Route 53 will briefly continue to check your endpoint from that
     * region.</note> <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithRegions(const Aws::Vector<HealthCheckRegion>& value) { SetRegions(value); return *this;}

    /**
     * <p>A list of <code>HealthCheckRegion</code> values that specify the Amazon EC2
     * regions that you want Amazon Route 53 to use to perform health checks. You must
     * specify at least three regions.</p> <note>When you remove a region from the
     * list, Amazon Route 53 will briefly continue to check your endpoint from that
     * region.</note> <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& WithRegions(Aws::Vector<HealthCheckRegion>&& value) { SetRegions(value); return *this;}

    /**
     * <p>A list of <code>HealthCheckRegion</code> values that specify the Amazon EC2
     * regions that you want Amazon Route 53 to use to perform health checks. You must
     * specify at least three regions.</p> <note>When you remove a region from the
     * list, Amazon Route 53 will briefly continue to check your endpoint from that
     * region.</note> <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& AddRegions(const HealthCheckRegion& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A list of <code>HealthCheckRegion</code> values that specify the Amazon EC2
     * regions that you want Amazon Route 53 to use to perform health checks. You must
     * specify at least three regions.</p> <note>When you remove a region from the
     * list, Amazon Route 53 will briefly continue to check your endpoint from that
     * region.</note> <p>Specify this value only if you want to change it.</p>
     */
    inline UpdateHealthCheckRequest& AddRegions(HealthCheckRegion&& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    
    inline const AlarmIdentifier& GetAlarmIdentifier() const{ return m_alarmIdentifier; }

    
    inline void SetAlarmIdentifier(const AlarmIdentifier& value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier = value; }

    
    inline void SetAlarmIdentifier(AlarmIdentifier&& value) { m_alarmIdentifierHasBeenSet = true; m_alarmIdentifier = value; }

    
    inline UpdateHealthCheckRequest& WithAlarmIdentifier(const AlarmIdentifier& value) { SetAlarmIdentifier(value); return *this;}

    
    inline UpdateHealthCheckRequest& WithAlarmIdentifier(AlarmIdentifier&& value) { SetAlarmIdentifier(value); return *this;}

    
    inline const InsufficientDataHealthStatus& GetInsufficientDataHealthStatus() const{ return m_insufficientDataHealthStatus; }

    
    inline void SetInsufficientDataHealthStatus(const InsufficientDataHealthStatus& value) { m_insufficientDataHealthStatusHasBeenSet = true; m_insufficientDataHealthStatus = value; }

    
    inline void SetInsufficientDataHealthStatus(InsufficientDataHealthStatus&& value) { m_insufficientDataHealthStatusHasBeenSet = true; m_insufficientDataHealthStatus = value; }

    
    inline UpdateHealthCheckRequest& WithInsufficientDataHealthStatus(const InsufficientDataHealthStatus& value) { SetInsufficientDataHealthStatus(value); return *this;}

    
    inline UpdateHealthCheckRequest& WithInsufficientDataHealthStatus(InsufficientDataHealthStatus&& value) { SetInsufficientDataHealthStatus(value); return *this;}

  private:
    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet;
    long long m_healthCheckVersion;
    bool m_healthCheckVersionHasBeenSet;
    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    Aws::String m_resourcePath;
    bool m_resourcePathHasBeenSet;
    Aws::String m_fullyQualifiedDomainName;
    bool m_fullyQualifiedDomainNameHasBeenSet;
    Aws::String m_searchString;
    bool m_searchStringHasBeenSet;
    long m_failureThreshold;
    bool m_failureThresholdHasBeenSet;
    bool m_inverted;
    bool m_invertedHasBeenSet;
    long m_healthThreshold;
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
