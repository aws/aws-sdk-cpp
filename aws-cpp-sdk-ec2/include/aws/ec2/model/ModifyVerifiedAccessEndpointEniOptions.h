/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VerifiedAccessEndpointProtocol.h>
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
   * <p>Options for a network-interface type Verified Access endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessEndpointEniOptions">AWS
   * API Reference</a></p>
   */
  class ModifyVerifiedAccessEndpointEniOptions
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessEndpointEniOptions();
    AWS_EC2_API ModifyVerifiedAccessEndpointEniOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyVerifiedAccessEndpointEniOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IP protocol.</p>
     */
    inline const VerifiedAccessEndpointProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The IP protocol.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The IP protocol.</p>
     */
    inline void SetProtocol(const VerifiedAccessEndpointProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The IP protocol.</p>
     */
    inline void SetProtocol(VerifiedAccessEndpointProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The IP protocol.</p>
     */
    inline ModifyVerifiedAccessEndpointEniOptions& WithProtocol(const VerifiedAccessEndpointProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The IP protocol.</p>
     */
    inline ModifyVerifiedAccessEndpointEniOptions& WithProtocol(VerifiedAccessEndpointProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The IP port number.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The IP port number.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The IP port number.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The IP port number.</p>
     */
    inline ModifyVerifiedAccessEndpointEniOptions& WithPort(int value) { SetPort(value); return *this;}

  private:

    VerifiedAccessEndpointProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
