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
#include <aws/route53/model/HealthCheckConfig.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the health check request information.</p>
   */
  class AWS_ROUTE53_API CreateHealthCheckRequest : public Route53Request
  {
  public:
    CreateHealthCheckRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHealthCheck</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a health check.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHealthCheck</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a health check.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHealthCheck</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a health check.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHealthCheck</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a health check.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHealthCheck</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a health check.</p>
     */
    inline CreateHealthCheckRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHealthCheck</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a health check.</p>
     */
    inline CreateHealthCheckRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHealthCheck</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you create a health check.</p>
     */
    inline CreateHealthCheckRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

    /**
     * <p>A complex type that contains the response to a <code>CreateHealthCheck</code>
     * request. </p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const{ return m_healthCheckConfig; }

    /**
     * <p>A complex type that contains the response to a <code>CreateHealthCheck</code>
     * request. </p>
     */
    inline void SetHealthCheckConfig(const HealthCheckConfig& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = value; }

    /**
     * <p>A complex type that contains the response to a <code>CreateHealthCheck</code>
     * request. </p>
     */
    inline void SetHealthCheckConfig(HealthCheckConfig&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = value; }

    /**
     * <p>A complex type that contains the response to a <code>CreateHealthCheck</code>
     * request. </p>
     */
    inline CreateHealthCheckRequest& WithHealthCheckConfig(const HealthCheckConfig& value) { SetHealthCheckConfig(value); return *this;}

    /**
     * <p>A complex type that contains the response to a <code>CreateHealthCheck</code>
     * request. </p>
     */
    inline CreateHealthCheckRequest& WithHealthCheckConfig(HealthCheckConfig&& value) { SetHealthCheckConfig(value); return *this;}

  private:
    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;
    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
