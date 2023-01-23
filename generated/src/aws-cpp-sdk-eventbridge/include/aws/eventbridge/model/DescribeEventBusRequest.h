/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class DescribeEventBusRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API DescribeEventBusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventBus"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name or ARN of the event bus to show details for. If you omit this, the
     * default event bus is displayed.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name or ARN of the event bus to show details for. If you omit this, the
     * default event bus is displayed.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name or ARN of the event bus to show details for. If you omit this, the
     * default event bus is displayed.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name or ARN of the event bus to show details for. If you omit this, the
     * default event bus is displayed.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name or ARN of the event bus to show details for. If you omit this, the
     * default event bus is displayed.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name or ARN of the event bus to show details for. If you omit this, the
     * default event bus is displayed.</p>
     */
    inline DescribeEventBusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name or ARN of the event bus to show details for. If you omit this, the
     * default event bus is displayed.</p>
     */
    inline DescribeEventBusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the event bus to show details for. If you omit this, the
     * default event bus is displayed.</p>
     */
    inline DescribeEventBusRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
