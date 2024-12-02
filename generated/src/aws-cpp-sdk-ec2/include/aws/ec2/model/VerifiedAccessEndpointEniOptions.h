/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VerifiedAccessEndpointProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VerifiedAccessEndpointPortRange.h>
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
   * <p>Options for a network-interface type endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessEndpointEniOptions">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessEndpointEniOptions
  {
  public:
    AWS_EC2_API VerifiedAccessEndpointEniOptions();
    AWS_EC2_API VerifiedAccessEndpointEniOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessEndpointEniOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline VerifiedAccessEndpointEniOptions& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline VerifiedAccessEndpointEniOptions& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline VerifiedAccessEndpointEniOptions& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP protocol.</p>
     */
    inline const VerifiedAccessEndpointProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const VerifiedAccessEndpointProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(VerifiedAccessEndpointProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline VerifiedAccessEndpointEniOptions& WithProtocol(const VerifiedAccessEndpointProtocol& value) { SetProtocol(value); return *this;}
    inline VerifiedAccessEndpointEniOptions& WithProtocol(VerifiedAccessEndpointProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP port number.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline VerifiedAccessEndpointEniOptions& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port ranges.</p>
     */
    inline const Aws::Vector<VerifiedAccessEndpointPortRange>& GetPortRanges() const{ return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    inline void SetPortRanges(const Aws::Vector<VerifiedAccessEndpointPortRange>& value) { m_portRangesHasBeenSet = true; m_portRanges = value; }
    inline void SetPortRanges(Aws::Vector<VerifiedAccessEndpointPortRange>&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::move(value); }
    inline VerifiedAccessEndpointEniOptions& WithPortRanges(const Aws::Vector<VerifiedAccessEndpointPortRange>& value) { SetPortRanges(value); return *this;}
    inline VerifiedAccessEndpointEniOptions& WithPortRanges(Aws::Vector<VerifiedAccessEndpointPortRange>&& value) { SetPortRanges(std::move(value)); return *this;}
    inline VerifiedAccessEndpointEniOptions& AddPortRanges(const VerifiedAccessEndpointPortRange& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    inline VerifiedAccessEndpointEniOptions& AddPortRanges(VerifiedAccessEndpointPortRange&& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    VerifiedAccessEndpointProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::Vector<VerifiedAccessEndpointPortRange> m_portRanges;
    bool m_portRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
