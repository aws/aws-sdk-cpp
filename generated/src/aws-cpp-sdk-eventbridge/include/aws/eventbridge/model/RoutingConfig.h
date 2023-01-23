/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/FailoverConfig.h>
#include <utility>

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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The routing configuration of the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RoutingConfig">AWS
   * API Reference</a></p>
   */
  class RoutingConfig
  {
  public:
    AWS_EVENTBRIDGE_API RoutingConfig();
    AWS_EVENTBRIDGE_API RoutingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API RoutingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline const FailoverConfig& GetFailoverConfig() const{ return m_failoverConfig; }

    /**
     * <p>The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline bool FailoverConfigHasBeenSet() const { return m_failoverConfigHasBeenSet; }

    /**
     * <p>The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline void SetFailoverConfig(const FailoverConfig& value) { m_failoverConfigHasBeenSet = true; m_failoverConfig = value; }

    /**
     * <p>The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline void SetFailoverConfig(FailoverConfig&& value) { m_failoverConfigHasBeenSet = true; m_failoverConfig = std::move(value); }

    /**
     * <p>The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline RoutingConfig& WithFailoverConfig(const FailoverConfig& value) { SetFailoverConfig(value); return *this;}

    /**
     * <p>The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline RoutingConfig& WithFailoverConfig(FailoverConfig&& value) { SetFailoverConfig(std::move(value)); return *this;}

  private:

    FailoverConfig m_failoverConfig;
    bool m_failoverConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
