/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>This action deletes a health check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteHealthCheckRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API DeleteHealthCheckRequest : public Route53Request
  {
  public:
    DeleteHealthCheckRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHealthCheck"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the health check that you want to delete.</p>
     */
    inline const Aws::String& GetHealthCheckId() const{ return m_healthCheckId; }

    /**
     * <p>The ID of the health check that you want to delete.</p>
     */
    inline bool HealthCheckIdHasBeenSet() const { return m_healthCheckIdHasBeenSet; }

    /**
     * <p>The ID of the health check that you want to delete.</p>
     */
    inline void SetHealthCheckId(const Aws::String& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = value; }

    /**
     * <p>The ID of the health check that you want to delete.</p>
     */
    inline void SetHealthCheckId(Aws::String&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = std::move(value); }

    /**
     * <p>The ID of the health check that you want to delete.</p>
     */
    inline void SetHealthCheckId(const char* value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId.assign(value); }

    /**
     * <p>The ID of the health check that you want to delete.</p>
     */
    inline DeleteHealthCheckRequest& WithHealthCheckId(const Aws::String& value) { SetHealthCheckId(value); return *this;}

    /**
     * <p>The ID of the health check that you want to delete.</p>
     */
    inline DeleteHealthCheckRequest& WithHealthCheckId(Aws::String&& value) { SetHealthCheckId(std::move(value)); return *this;}

    /**
     * <p>The ID of the health check that you want to delete.</p>
     */
    inline DeleteHealthCheckRequest& WithHealthCheckId(const char* value) { SetHealthCheckId(value); return *this;}

  private:

    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
