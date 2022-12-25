/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientVpnConnectionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about a terminated Client VPN endpoint client
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TerminateConnectionStatus">AWS
   * API Reference</a></p>
   */
  class TerminateConnectionStatus
  {
  public:
    AWS_EC2_API TerminateConnectionStatus();
    AWS_EC2_API TerminateConnectionStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TerminateConnectionStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the client connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the client connection.</p>
     */
    inline TerminateConnectionStatus& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the client connection.</p>
     */
    inline TerminateConnectionStatus& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client connection.</p>
     */
    inline TerminateConnectionStatus& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The state of the client connection.</p>
     */
    inline const ClientVpnConnectionStatus& GetPreviousStatus() const{ return m_previousStatus; }

    /**
     * <p>The state of the client connection.</p>
     */
    inline bool PreviousStatusHasBeenSet() const { return m_previousStatusHasBeenSet; }

    /**
     * <p>The state of the client connection.</p>
     */
    inline void SetPreviousStatus(const ClientVpnConnectionStatus& value) { m_previousStatusHasBeenSet = true; m_previousStatus = value; }

    /**
     * <p>The state of the client connection.</p>
     */
    inline void SetPreviousStatus(ClientVpnConnectionStatus&& value) { m_previousStatusHasBeenSet = true; m_previousStatus = std::move(value); }

    /**
     * <p>The state of the client connection.</p>
     */
    inline TerminateConnectionStatus& WithPreviousStatus(const ClientVpnConnectionStatus& value) { SetPreviousStatus(value); return *this;}

    /**
     * <p>The state of the client connection.</p>
     */
    inline TerminateConnectionStatus& WithPreviousStatus(ClientVpnConnectionStatus&& value) { SetPreviousStatus(std::move(value)); return *this;}


    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline const ClientVpnConnectionStatus& GetCurrentStatus() const{ return m_currentStatus; }

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline bool CurrentStatusHasBeenSet() const { return m_currentStatusHasBeenSet; }

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline void SetCurrentStatus(const ClientVpnConnectionStatus& value) { m_currentStatusHasBeenSet = true; m_currentStatus = value; }

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline void SetCurrentStatus(ClientVpnConnectionStatus&& value) { m_currentStatusHasBeenSet = true; m_currentStatus = std::move(value); }

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline TerminateConnectionStatus& WithCurrentStatus(const ClientVpnConnectionStatus& value) { SetCurrentStatus(value); return *this;}

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline TerminateConnectionStatus& WithCurrentStatus(ClientVpnConnectionStatus&& value) { SetCurrentStatus(std::move(value)); return *this;}

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    ClientVpnConnectionStatus m_previousStatus;
    bool m_previousStatusHasBeenSet = false;

    ClientVpnConnectionStatus m_currentStatus;
    bool m_currentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
