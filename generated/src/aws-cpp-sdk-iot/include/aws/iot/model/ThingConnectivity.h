/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The connectivity status of the thing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingConnectivity">AWS
   * API Reference</a></p>
   */
  class ThingConnectivity
  {
  public:
    AWS_IOT_API ThingConnectivity();
    AWS_IOT_API ThingConnectivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingConnectivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if the thing is connected to the Amazon Web Services IoT Core service;
     * false if it is not connected.</p>
     */
    inline bool GetConnected() const{ return m_connected; }

    /**
     * <p>True if the thing is connected to the Amazon Web Services IoT Core service;
     * false if it is not connected.</p>
     */
    inline bool ConnectedHasBeenSet() const { return m_connectedHasBeenSet; }

    /**
     * <p>True if the thing is connected to the Amazon Web Services IoT Core service;
     * false if it is not connected.</p>
     */
    inline void SetConnected(bool value) { m_connectedHasBeenSet = true; m_connected = value; }

    /**
     * <p>True if the thing is connected to the Amazon Web Services IoT Core service;
     * false if it is not connected.</p>
     */
    inline ThingConnectivity& WithConnected(bool value) { SetConnected(value); return *this;}


    /**
     * <p>The epoch time (in milliseconds) when the thing last connected or
     * disconnected. If the thing has been disconnected for approximately an hour, the
     * time value might be missing.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The epoch time (in milliseconds) when the thing last connected or
     * disconnected. If the thing has been disconnected for approximately an hour, the
     * time value might be missing.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The epoch time (in milliseconds) when the thing last connected or
     * disconnected. If the thing has been disconnected for approximately an hour, the
     * time value might be missing.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The epoch time (in milliseconds) when the thing last connected or
     * disconnected. If the thing has been disconnected for approximately an hour, the
     * time value might be missing.</p>
     */
    inline ThingConnectivity& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>The reason why the client is disconnected. If the thing has been disconnected
     * for approximately an hour, the <code>disconnectReason</code> value might be
     * missing.</p>
     */
    inline const Aws::String& GetDisconnectReason() const{ return m_disconnectReason; }

    /**
     * <p>The reason why the client is disconnected. If the thing has been disconnected
     * for approximately an hour, the <code>disconnectReason</code> value might be
     * missing.</p>
     */
    inline bool DisconnectReasonHasBeenSet() const { return m_disconnectReasonHasBeenSet; }

    /**
     * <p>The reason why the client is disconnected. If the thing has been disconnected
     * for approximately an hour, the <code>disconnectReason</code> value might be
     * missing.</p>
     */
    inline void SetDisconnectReason(const Aws::String& value) { m_disconnectReasonHasBeenSet = true; m_disconnectReason = value; }

    /**
     * <p>The reason why the client is disconnected. If the thing has been disconnected
     * for approximately an hour, the <code>disconnectReason</code> value might be
     * missing.</p>
     */
    inline void SetDisconnectReason(Aws::String&& value) { m_disconnectReasonHasBeenSet = true; m_disconnectReason = std::move(value); }

    /**
     * <p>The reason why the client is disconnected. If the thing has been disconnected
     * for approximately an hour, the <code>disconnectReason</code> value might be
     * missing.</p>
     */
    inline void SetDisconnectReason(const char* value) { m_disconnectReasonHasBeenSet = true; m_disconnectReason.assign(value); }

    /**
     * <p>The reason why the client is disconnected. If the thing has been disconnected
     * for approximately an hour, the <code>disconnectReason</code> value might be
     * missing.</p>
     */
    inline ThingConnectivity& WithDisconnectReason(const Aws::String& value) { SetDisconnectReason(value); return *this;}

    /**
     * <p>The reason why the client is disconnected. If the thing has been disconnected
     * for approximately an hour, the <code>disconnectReason</code> value might be
     * missing.</p>
     */
    inline ThingConnectivity& WithDisconnectReason(Aws::String&& value) { SetDisconnectReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the client is disconnected. If the thing has been disconnected
     * for approximately an hour, the <code>disconnectReason</code> value might be
     * missing.</p>
     */
    inline ThingConnectivity& WithDisconnectReason(const char* value) { SetDisconnectReason(value); return *this;}

  private:

    bool m_connected;
    bool m_connectedHasBeenSet = false;

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_disconnectReason;
    bool m_disconnectReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
