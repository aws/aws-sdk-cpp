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

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>This action gets the reason that a specified health check failed most
   * recently.</p> <p>To get the reason for the last failure of a health check, send
   * a GET request to the /2013-04-01/healthcheck/health check ID/lastfailurereason
   * resource. </p> <p>For information about viewing the last failure reason for a
   * health check using the Amazon Route 53 console, see <a
   * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-monitor-view-status.html">Viewing
   * Health Check Status and the Reason for Health Check Failures</a> in the
   * <i>Amazon Route 53 Developer Guide</i>.</p>
   */
  class AWS_ROUTE53_API GetHealthCheckLastFailureReasonRequest : public Route53Request
  {
  public:
    GetHealthCheckLastFailureReasonRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>
     */
    inline const Aws::String& GetHealthCheckId() const{ return m_healthCheckId; }

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>
     */
    inline void SetHealthCheckId(const Aws::String& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>
     */
    inline void SetHealthCheckId(Aws::String&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>
     */
    inline void SetHealthCheckId(const char* value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId.assign(value); }

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>
     */
    inline GetHealthCheckLastFailureReasonRequest& WithHealthCheckId(const Aws::String& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>
     */
    inline GetHealthCheckLastFailureReasonRequest& WithHealthCheckId(Aws::String&& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>
     */
    inline GetHealthCheckLastFailureReasonRequest& WithHealthCheckId(const char* value) { SetHealthCheckId(value); return *this;}

  private:
    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
