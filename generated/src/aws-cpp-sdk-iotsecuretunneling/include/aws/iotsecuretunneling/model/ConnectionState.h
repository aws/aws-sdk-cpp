/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/model/ConnectionStatus.h>
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
namespace IoTSecureTunneling
{
namespace Model
{

  /**
   * <p>The state of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/ConnectionState">AWS
   * API Reference</a></p>
   */
  class ConnectionState
  {
  public:
    AWS_IOTSECURETUNNELING_API ConnectionState();
    AWS_IOTSECURETUNNELING_API ConnectionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API ConnectionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The connection status of the tunnel. Valid values are <code>CONNECTED</code>
     * and <code>DISCONNECTED</code>.</p>
     */
    inline const ConnectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The connection status of the tunnel. Valid values are <code>CONNECTED</code>
     * and <code>DISCONNECTED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The connection status of the tunnel. Valid values are <code>CONNECTED</code>
     * and <code>DISCONNECTED</code>.</p>
     */
    inline void SetStatus(const ConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The connection status of the tunnel. Valid values are <code>CONNECTED</code>
     * and <code>DISCONNECTED</code>.</p>
     */
    inline void SetStatus(ConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The connection status of the tunnel. Valid values are <code>CONNECTED</code>
     * and <code>DISCONNECTED</code>.</p>
     */
    inline ConnectionState& WithStatus(const ConnectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The connection status of the tunnel. Valid values are <code>CONNECTED</code>
     * and <code>DISCONNECTED</code>.</p>
     */
    inline ConnectionState& WithStatus(ConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The last time the connection status was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The last time the connection status was updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The last time the connection status was updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The last time the connection status was updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The last time the connection status was updated.</p>
     */
    inline ConnectionState& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The last time the connection status was updated.</p>
     */
    inline ConnectionState& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}

  private:

    ConnectionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
