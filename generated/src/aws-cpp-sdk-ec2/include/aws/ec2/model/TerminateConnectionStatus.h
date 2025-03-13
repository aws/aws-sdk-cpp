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
    AWS_EC2_API TerminateConnectionStatus() = default;
    AWS_EC2_API TerminateConnectionStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TerminateConnectionStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the client connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    TerminateConnectionStatus& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the client connection.</p>
     */
    inline const ClientVpnConnectionStatus& GetPreviousStatus() const { return m_previousStatus; }
    inline bool PreviousStatusHasBeenSet() const { return m_previousStatusHasBeenSet; }
    template<typename PreviousStatusT = ClientVpnConnectionStatus>
    void SetPreviousStatus(PreviousStatusT&& value) { m_previousStatusHasBeenSet = true; m_previousStatus = std::forward<PreviousStatusT>(value); }
    template<typename PreviousStatusT = ClientVpnConnectionStatus>
    TerminateConnectionStatus& WithPreviousStatus(PreviousStatusT&& value) { SetPreviousStatus(std::forward<PreviousStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline const ClientVpnConnectionStatus& GetCurrentStatus() const { return m_currentStatus; }
    inline bool CurrentStatusHasBeenSet() const { return m_currentStatusHasBeenSet; }
    template<typename CurrentStatusT = ClientVpnConnectionStatus>
    void SetCurrentStatus(CurrentStatusT&& value) { m_currentStatusHasBeenSet = true; m_currentStatus = std::forward<CurrentStatusT>(value); }
    template<typename CurrentStatusT = ClientVpnConnectionStatus>
    TerminateConnectionStatus& WithCurrentStatus(CurrentStatusT&& value) { SetCurrentStatus(std::forward<CurrentStatusT>(value)); return *this;}
    ///@}
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
