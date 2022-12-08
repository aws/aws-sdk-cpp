/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HealthCheckConfig.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the health check request
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHealthCheckRequest">AWS
   * API Reference</a></p>
   */
  class CreateHealthCheckRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API CreateHealthCheckRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHealthCheck"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique string that identifies the request and that allows you to retry a
     * failed <code>CreateHealthCheck</code> request without the risk of creating two
     * identical health checks:</p> <ul> <li> <p>If you send a
     * <code>CreateHealthCheck</code> request with the same
     * <code>CallerReference</code> and settings as a previous request, and if the
     * health check doesn't exist, Amazon Route 53 creates the health check. If the
     * health check does exist, Route 53 returns the settings for the existing health
     * check.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as a deleted health check, regardless
     * of the settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as an existing health check but with
     * different settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with a unique <code>CallerReference</code> but settings identical to an existing
     * health check, Route 53 creates the health check.</p> </li> </ul>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request and that allows you to retry a
     * failed <code>CreateHealthCheck</code> request without the risk of creating two
     * identical health checks:</p> <ul> <li> <p>If you send a
     * <code>CreateHealthCheck</code> request with the same
     * <code>CallerReference</code> and settings as a previous request, and if the
     * health check doesn't exist, Amazon Route 53 creates the health check. If the
     * health check does exist, Route 53 returns the settings for the existing health
     * check.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as a deleted health check, regardless
     * of the settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as an existing health check but with
     * different settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with a unique <code>CallerReference</code> but settings identical to an existing
     * health check, Route 53 creates the health check.</p> </li> </ul>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows you to retry a
     * failed <code>CreateHealthCheck</code> request without the risk of creating two
     * identical health checks:</p> <ul> <li> <p>If you send a
     * <code>CreateHealthCheck</code> request with the same
     * <code>CallerReference</code> and settings as a previous request, and if the
     * health check doesn't exist, Amazon Route 53 creates the health check. If the
     * health check does exist, Route 53 returns the settings for the existing health
     * check.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as a deleted health check, regardless
     * of the settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as an existing health check but with
     * different settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with a unique <code>CallerReference</code> but settings identical to an existing
     * health check, Route 53 creates the health check.</p> </li> </ul>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows you to retry a
     * failed <code>CreateHealthCheck</code> request without the risk of creating two
     * identical health checks:</p> <ul> <li> <p>If you send a
     * <code>CreateHealthCheck</code> request with the same
     * <code>CallerReference</code> and settings as a previous request, and if the
     * health check doesn't exist, Amazon Route 53 creates the health check. If the
     * health check does exist, Route 53 returns the settings for the existing health
     * check.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as a deleted health check, regardless
     * of the settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as an existing health check but with
     * different settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with a unique <code>CallerReference</code> but settings identical to an existing
     * health check, Route 53 creates the health check.</p> </li> </ul>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows you to retry a
     * failed <code>CreateHealthCheck</code> request without the risk of creating two
     * identical health checks:</p> <ul> <li> <p>If you send a
     * <code>CreateHealthCheck</code> request with the same
     * <code>CallerReference</code> and settings as a previous request, and if the
     * health check doesn't exist, Amazon Route 53 creates the health check. If the
     * health check does exist, Route 53 returns the settings for the existing health
     * check.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as a deleted health check, regardless
     * of the settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as an existing health check but with
     * different settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with a unique <code>CallerReference</code> but settings identical to an existing
     * health check, Route 53 creates the health check.</p> </li> </ul>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows you to retry a
     * failed <code>CreateHealthCheck</code> request without the risk of creating two
     * identical health checks:</p> <ul> <li> <p>If you send a
     * <code>CreateHealthCheck</code> request with the same
     * <code>CallerReference</code> and settings as a previous request, and if the
     * health check doesn't exist, Amazon Route 53 creates the health check. If the
     * health check does exist, Route 53 returns the settings for the existing health
     * check.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as a deleted health check, regardless
     * of the settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as an existing health check but with
     * different settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with a unique <code>CallerReference</code> but settings identical to an existing
     * health check, Route 53 creates the health check.</p> </li> </ul>
     */
    inline CreateHealthCheckRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows you to retry a
     * failed <code>CreateHealthCheck</code> request without the risk of creating two
     * identical health checks:</p> <ul> <li> <p>If you send a
     * <code>CreateHealthCheck</code> request with the same
     * <code>CallerReference</code> and settings as a previous request, and if the
     * health check doesn't exist, Amazon Route 53 creates the health check. If the
     * health check does exist, Route 53 returns the settings for the existing health
     * check.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as a deleted health check, regardless
     * of the settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as an existing health check but with
     * different settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with a unique <code>CallerReference</code> but settings identical to an existing
     * health check, Route 53 creates the health check.</p> </li> </ul>
     */
    inline CreateHealthCheckRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows you to retry a
     * failed <code>CreateHealthCheck</code> request without the risk of creating two
     * identical health checks:</p> <ul> <li> <p>If you send a
     * <code>CreateHealthCheck</code> request with the same
     * <code>CallerReference</code> and settings as a previous request, and if the
     * health check doesn't exist, Amazon Route 53 creates the health check. If the
     * health check does exist, Route 53 returns the settings for the existing health
     * check.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as a deleted health check, regardless
     * of the settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with the same <code>CallerReference</code> as an existing health check but with
     * different settings, Route 53 returns a <code>HealthCheckAlreadyExists</code>
     * error.</p> </li> <li> <p>If you send a <code>CreateHealthCheck</code> request
     * with a unique <code>CallerReference</code> but settings identical to an existing
     * health check, Route 53 creates the health check.</p> </li> </ul>
     */
    inline CreateHealthCheckRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>A complex type that contains settings for a new health check.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const{ return m_healthCheckConfig; }

    /**
     * <p>A complex type that contains settings for a new health check.</p>
     */
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }

    /**
     * <p>A complex type that contains settings for a new health check.</p>
     */
    inline void SetHealthCheckConfig(const HealthCheckConfig& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = value; }

    /**
     * <p>A complex type that contains settings for a new health check.</p>
     */
    inline void SetHealthCheckConfig(HealthCheckConfig&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::move(value); }

    /**
     * <p>A complex type that contains settings for a new health check.</p>
     */
    inline CreateHealthCheckRequest& WithHealthCheckConfig(const HealthCheckConfig& value) { SetHealthCheckConfig(value); return *this;}

    /**
     * <p>A complex type that contains settings for a new health check.</p>
     */
    inline CreateHealthCheckRequest& WithHealthCheckConfig(HealthCheckConfig&& value) { SetHealthCheckConfig(std::move(value)); return *this;}

  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
