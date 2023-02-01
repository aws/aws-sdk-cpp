/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancing/model/HealthCheck.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for ConfigureHealthCheck.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ConfigureHealthCheckInput">AWS
   * API Reference</a></p>
   */
  class ConfigureHealthCheckRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API ConfigureHealthCheckRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureHealthCheck"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ConfigureHealthCheckRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ConfigureHealthCheckRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ConfigureHealthCheckRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The configuration information.</p>
     */
    inline const HealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>The configuration information.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>The configuration information.</p>
     */
    inline void SetHealthCheck(const HealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>The configuration information.</p>
     */
    inline void SetHealthCheck(HealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>The configuration information.</p>
     */
    inline ConfigureHealthCheckRequest& WithHealthCheck(const HealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>The configuration information.</p>
     */
    inline ConfigureHealthCheckRequest& WithHealthCheck(HealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    HealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
