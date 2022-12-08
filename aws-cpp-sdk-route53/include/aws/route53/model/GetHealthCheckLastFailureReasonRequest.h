/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A request for the reason that a health check failed most
   * recently.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckLastFailureReasonRequest">AWS
   * API Reference</a></p>
   */
  class GetHealthCheckLastFailureReasonRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API GetHealthCheckLastFailureReasonRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHealthCheckLastFailureReason"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>  <p>If you
     * want to get the last failure reason for a calculated health check, you must use
     * the Amazon Route 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckLastFailureReason</code> for a calculated health check.</p>
     * 
     */
    inline const Aws::String& GetHealthCheckId() const{ return m_healthCheckId; }

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>  <p>If you
     * want to get the last failure reason for a calculated health check, you must use
     * the Amazon Route 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckLastFailureReason</code> for a calculated health check.</p>
     * 
     */
    inline bool HealthCheckIdHasBeenSet() const { return m_healthCheckIdHasBeenSet; }

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>  <p>If you
     * want to get the last failure reason for a calculated health check, you must use
     * the Amazon Route 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckLastFailureReason</code> for a calculated health check.</p>
     * 
     */
    inline void SetHealthCheckId(const Aws::String& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>  <p>If you
     * want to get the last failure reason for a calculated health check, you must use
     * the Amazon Route 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckLastFailureReason</code> for a calculated health check.</p>
     * 
     */
    inline void SetHealthCheckId(Aws::String&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = std::move(value); }

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>  <p>If you
     * want to get the last failure reason for a calculated health check, you must use
     * the Amazon Route 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckLastFailureReason</code> for a calculated health check.</p>
     * 
     */
    inline void SetHealthCheckId(const char* value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId.assign(value); }

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>  <p>If you
     * want to get the last failure reason for a calculated health check, you must use
     * the Amazon Route 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckLastFailureReason</code> for a calculated health check.</p>
     * 
     */
    inline GetHealthCheckLastFailureReasonRequest& WithHealthCheckId(const Aws::String& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>  <p>If you
     * want to get the last failure reason for a calculated health check, you must use
     * the Amazon Route 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckLastFailureReason</code> for a calculated health check.</p>
     * 
     */
    inline GetHealthCheckLastFailureReasonRequest& WithHealthCheckId(Aws::String&& value) { SetHealthCheckId(std::move(value)); return *this;}

    /**
     * <p>The ID for the health check for which you want the last failure reason. When
     * you created the health check, <code>CreateHealthCheck</code> returned the ID in
     * the response, in the <code>HealthCheckId</code> element.</p>  <p>If you
     * want to get the last failure reason for a calculated health check, you must use
     * the Amazon Route 53 console or the CloudWatch console. You can't use
     * <code>GetHealthCheckLastFailureReason</code> for a calculated health check.</p>
     * 
     */
    inline GetHealthCheckLastFailureReasonRequest& WithHealthCheckId(const char* value) { SetHealthCheckId(value); return *this;}

  private:

    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
