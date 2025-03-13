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
    AWS_EVENTBRIDGE_API RoutingConfig() = default;
    AWS_EVENTBRIDGE_API RoutingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API RoutingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline const FailoverConfig& GetFailoverConfig() const { return m_failoverConfig; }
    inline bool FailoverConfigHasBeenSet() const { return m_failoverConfigHasBeenSet; }
    template<typename FailoverConfigT = FailoverConfig>
    void SetFailoverConfig(FailoverConfigT&& value) { m_failoverConfigHasBeenSet = true; m_failoverConfig = std::forward<FailoverConfigT>(value); }
    template<typename FailoverConfigT = FailoverConfig>
    RoutingConfig& WithFailoverConfig(FailoverConfigT&& value) { SetFailoverConfig(std::forward<FailoverConfigT>(value)); return *this;}
    ///@}
  private:

    FailoverConfig m_failoverConfig;
    bool m_failoverConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
