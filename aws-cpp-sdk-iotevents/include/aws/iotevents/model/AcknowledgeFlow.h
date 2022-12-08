/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>

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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Specifies whether to get notified for alarm state changes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AcknowledgeFlow">AWS
   * API Reference</a></p>
   */
  class AcknowledgeFlow
  {
  public:
    AWS_IOTEVENTS_API AcknowledgeFlow();
    AWS_IOTEVENTS_API AcknowledgeFlow(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AcknowledgeFlow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value must be <code>TRUE</code> or <code>FALSE</code>. If
     * <code>TRUE</code>, you receive a notification when the alarm state changes. You
     * must choose to acknowledge the notification before the alarm state can return to
     * <code>NORMAL</code>. If <code>FALSE</code>, you won't receive notifications. The
     * alarm automatically changes to the <code>NORMAL</code> state when the input
     * property value returns to the specified range.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>The value must be <code>TRUE</code> or <code>FALSE</code>. If
     * <code>TRUE</code>, you receive a notification when the alarm state changes. You
     * must choose to acknowledge the notification before the alarm state can return to
     * <code>NORMAL</code>. If <code>FALSE</code>, you won't receive notifications. The
     * alarm automatically changes to the <code>NORMAL</code> state when the input
     * property value returns to the specified range.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>The value must be <code>TRUE</code> or <code>FALSE</code>. If
     * <code>TRUE</code>, you receive a notification when the alarm state changes. You
     * must choose to acknowledge the notification before the alarm state can return to
     * <code>NORMAL</code>. If <code>FALSE</code>, you won't receive notifications. The
     * alarm automatically changes to the <code>NORMAL</code> state when the input
     * property value returns to the specified range.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>The value must be <code>TRUE</code> or <code>FALSE</code>. If
     * <code>TRUE</code>, you receive a notification when the alarm state changes. You
     * must choose to acknowledge the notification before the alarm state can return to
     * <code>NORMAL</code>. If <code>FALSE</code>, you won't receive notifications. The
     * alarm automatically changes to the <code>NORMAL</code> state when the input
     * property value returns to the specified range.</p>
     */
    inline AcknowledgeFlow& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
