﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The secondary Region that processes events when failover is triggered or
   * replication is enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/Secondary">AWS
   * API Reference</a></p>
   */
  class Secondary
  {
  public:
    AWS_EVENTBRIDGE_API Secondary() = default;
    AWS_EVENTBRIDGE_API Secondary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Secondary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the secondary Region.</p>
     */
    inline const Aws::String& GetRoute() const { return m_route; }
    inline bool RouteHasBeenSet() const { return m_routeHasBeenSet; }
    template<typename RouteT = Aws::String>
    void SetRoute(RouteT&& value) { m_routeHasBeenSet = true; m_route = std::forward<RouteT>(value); }
    template<typename RouteT = Aws::String>
    Secondary& WithRoute(RouteT&& value) { SetRoute(std::forward<RouteT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_route;
    bool m_routeHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
