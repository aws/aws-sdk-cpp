/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an Amazon EventBridge bus data source configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/EventBridgeDataSourceConfig">AWS
   * API Reference</a></p>
   */
  class EventBridgeDataSourceConfig
  {
  public:
    AWS_APPSYNC_API EventBridgeDataSourceConfig();
    AWS_APPSYNC_API EventBridgeDataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API EventBridgeDataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the event bus. For more information about event buses, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus.html">Amazon
     * EventBridge event buses</a>.</p>
     */
    inline const Aws::String& GetEventBusArn() const{ return m_eventBusArn; }

    /**
     * <p>The ARN of the event bus. For more information about event buses, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus.html">Amazon
     * EventBridge event buses</a>.</p>
     */
    inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }

    /**
     * <p>The ARN of the event bus. For more information about event buses, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus.html">Amazon
     * EventBridge event buses</a>.</p>
     */
    inline void SetEventBusArn(const Aws::String& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = value; }

    /**
     * <p>The ARN of the event bus. For more information about event buses, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus.html">Amazon
     * EventBridge event buses</a>.</p>
     */
    inline void SetEventBusArn(Aws::String&& value) { m_eventBusArnHasBeenSet = true; m_eventBusArn = std::move(value); }

    /**
     * <p>The ARN of the event bus. For more information about event buses, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus.html">Amazon
     * EventBridge event buses</a>.</p>
     */
    inline void SetEventBusArn(const char* value) { m_eventBusArnHasBeenSet = true; m_eventBusArn.assign(value); }

    /**
     * <p>The ARN of the event bus. For more information about event buses, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus.html">Amazon
     * EventBridge event buses</a>.</p>
     */
    inline EventBridgeDataSourceConfig& WithEventBusArn(const Aws::String& value) { SetEventBusArn(value); return *this;}

    /**
     * <p>The ARN of the event bus. For more information about event buses, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus.html">Amazon
     * EventBridge event buses</a>.</p>
     */
    inline EventBridgeDataSourceConfig& WithEventBusArn(Aws::String&& value) { SetEventBusArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event bus. For more information about event buses, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus.html">Amazon
     * EventBridge event buses</a>.</p>
     */
    inline EventBridgeDataSourceConfig& WithEventBusArn(const char* value) { SetEventBusArn(value); return *this;}

  private:

    Aws::String m_eventBusArn;
    bool m_eventBusArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
