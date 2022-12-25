/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about the connection draining configuration for the load
   * balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerConnectionDraining">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerConnectionDraining
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerConnectionDraining();
    AWS_SECURITYHUB_API AwsElbLoadBalancerConnectionDraining(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerConnectionDraining& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether connection draining is enabled for the load balancer.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether connection draining is enabled for the load balancer.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether connection draining is enabled for the load balancer.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether connection draining is enabled for the load balancer.</p>
     */
    inline AwsElbLoadBalancerConnectionDraining& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The maximum time, in seconds, to keep the existing connections open before
     * deregistering the instances.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The maximum time, in seconds, to keep the existing connections open before
     * deregistering the instances.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, to keep the existing connections open before
     * deregistering the instances.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The maximum time, in seconds, to keep the existing connections open before
     * deregistering the instances.</p>
     */
    inline AwsElbLoadBalancerConnectionDraining& WithTimeout(int value) { SetTimeout(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
