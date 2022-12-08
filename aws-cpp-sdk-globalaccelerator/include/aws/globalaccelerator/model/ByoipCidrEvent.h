/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>A complex type that contains a <code>Message</code> and a
   * <code>Timestamp</code> value for changes that you make in the status of an IP
   * address range that you bring to Global Accelerator through bring your own IP
   * address (BYOIP).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/ByoipCidrEvent">AWS
   * API Reference</a></p>
   */
  class ByoipCidrEvent
  {
  public:
    AWS_GLOBALACCELERATOR_API ByoipCidrEvent();
    AWS_GLOBALACCELERATOR_API ByoipCidrEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API ByoipCidrEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string that contains an <code>Event</code> message describing changes that
     * you make in the status of an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A string that contains an <code>Event</code> message describing changes that
     * you make in the status of an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A string that contains an <code>Event</code> message describing changes that
     * you make in the status of an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A string that contains an <code>Event</code> message describing changes that
     * you make in the status of an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A string that contains an <code>Event</code> message describing changes that
     * you make in the status of an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A string that contains an <code>Event</code> message describing changes that
     * you make in the status of an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline ByoipCidrEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A string that contains an <code>Event</code> message describing changes that
     * you make in the status of an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline ByoipCidrEvent& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A string that contains an <code>Event</code> message describing changes that
     * you make in the status of an IP address range that you bring to Global
     * Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline ByoipCidrEvent& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>A timestamp for when you make a status change for an IP address range that
     * you bring to Global Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>A timestamp for when you make a status change for an IP address range that
     * you bring to Global Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>A timestamp for when you make a status change for an IP address range that
     * you bring to Global Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>A timestamp for when you make a status change for an IP address range that
     * you bring to Global Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>A timestamp for when you make a status change for an IP address range that
     * you bring to Global Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline ByoipCidrEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>A timestamp for when you make a status change for an IP address range that
     * you bring to Global Accelerator through bring your own IP address (BYOIP).</p>
     */
    inline ByoipCidrEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
