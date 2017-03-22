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
   * <p>A complex type that contains information about the request to get health
   * check status for a health check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckStatusRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetHealthCheckStatusRequest : public Route53Request
  {
  public:
    GetHealthCheckStatusRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the health check for which you want the current status. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p> <note> <p>If you want
     * to check the status of a calculated health check, you must use the Amazon Route
     * 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckStatus</code> to get the status of a calculated health
     * check.</p> </note>
     */
    inline const Aws::String& GetHealthCheckId() const{ return m_healthCheckId; }

    /**
     * <p>The ID for the health check for which you want the current status. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p> <note> <p>If you want
     * to check the status of a calculated health check, you must use the Amazon Route
     * 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckStatus</code> to get the status of a calculated health
     * check.</p> </note>
     */
    inline void SetHealthCheckId(const Aws::String& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID for the health check for which you want the current status. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p> <note> <p>If you want
     * to check the status of a calculated health check, you must use the Amazon Route
     * 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckStatus</code> to get the status of a calculated health
     * check.</p> </note>
     */
    inline void SetHealthCheckId(Aws::String&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID for the health check for which you want the current status. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p> <note> <p>If you want
     * to check the status of a calculated health check, you must use the Amazon Route
     * 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckStatus</code> to get the status of a calculated health
     * check.</p> </note>
     */
    inline void SetHealthCheckId(const char* value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId.assign(value); }

    /**
     * <p>The ID for the health check for which you want the current status. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p> <note> <p>If you want
     * to check the status of a calculated health check, you must use the Amazon Route
     * 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckStatus</code> to get the status of a calculated health
     * check.</p> </note>
     */
    inline GetHealthCheckStatusRequest& WithHealthCheckId(const Aws::String& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID for the health check for which you want the current status. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p> <note> <p>If you want
     * to check the status of a calculated health check, you must use the Amazon Route
     * 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckStatus</code> to get the status of a calculated health
     * check.</p> </note>
     */
    inline GetHealthCheckStatusRequest& WithHealthCheckId(Aws::String&& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID for the health check for which you want the current status. When you
     * created the health check, <code>CreateHealthCheck</code> returned the ID in the
     * response, in the <code>HealthCheckId</code> element.</p> <note> <p>If you want
     * to check the status of a calculated health check, you must use the Amazon Route
     * 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckStatus</code> to get the status of a calculated health
     * check.</p> </note>
     */
    inline GetHealthCheckStatusRequest& WithHealthCheckId(const char* value) { SetHealthCheckId(value); return *this;}

  private:
    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
