/**
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
   * <p>The event buses the endpoint is associated with.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/EndpointEventBus">AWS
   * API Reference</a></p>
   */
  class EndpointEventBus
  {
  public:
    AWS_EVENTBRIDGE_API EndpointEventBus() = default;
    AWS_EVENTBRIDGE_API EndpointEventBus(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API EndpointEventBus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the event bus the endpoint is associated with.</p>
     */
    inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
    inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }
    template<typename EventBusArnT = Aws::String>
    void SetEventBusArn(EventBusArnT&& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = std::forward<EventBusArnT>(value); }
    template<typename EventBusArnT = Aws::String>
    EndpointEventBus& WithEventBusArn(EventBusArnT&& value) { SetEventBusArn(std::forward<EventBusArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventBusArn;
    bool m_eventBusArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
