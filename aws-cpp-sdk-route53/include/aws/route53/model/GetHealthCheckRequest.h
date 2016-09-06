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
   * <p>This action gets information about a specified health check.</p> <p>Send a
   * <code>GET</code> request to the <code>/<i>Amazon Route 53 API
   * version</i>/gethealthcheckrequest</code> resource.</p> <p>For information about
   * getting information about a health check using the Amazon Route 53 console, see
   * <a
   * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-failover.html">Amazon
   * Route 53 Health Checks and DNS Failover</a> in the <i>Amazon Route 53 Developer
   * Guide</i>.</p>
   */
  class AWS_ROUTE53_API GetHealthCheckRequest : public Route53Request
  {
  public:
    GetHealthCheckRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters
     * long.</p>
     */
    inline const Aws::String& GetHealthCheckId() const{ return m_healthCheckId; }

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters
     * long.</p>
     */
    inline void SetHealthCheckId(const Aws::String& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters
     * long.</p>
     */
    inline void SetHealthCheckId(Aws::String&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters
     * long.</p>
     */
    inline void SetHealthCheckId(const char* value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId.assign(value); }

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters
     * long.</p>
     */
    inline GetHealthCheckRequest& WithHealthCheckId(const Aws::String& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters
     * long.</p>
     */
    inline GetHealthCheckRequest& WithHealthCheckId(Aws::String&& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters
     * long.</p>
     */
    inline GetHealthCheckRequest& WithHealthCheckId(const char* value) { SetHealthCheckId(value); return *this;}

  private:
    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
