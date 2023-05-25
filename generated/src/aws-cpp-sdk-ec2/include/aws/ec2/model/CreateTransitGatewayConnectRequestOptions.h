/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ProtocolValue.h>
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
   * <p>The options for a Connect attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayConnectRequestOptions">AWS
   * API Reference</a></p>
   */
  class CreateTransitGatewayConnectRequestOptions
  {
  public:
    AWS_EC2_API CreateTransitGatewayConnectRequestOptions();
    AWS_EC2_API CreateTransitGatewayConnectRequestOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateTransitGatewayConnectRequestOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The tunnel protocol.</p>
     */
    inline const ProtocolValue& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The tunnel protocol.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The tunnel protocol.</p>
     */
    inline void SetProtocol(const ProtocolValue& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The tunnel protocol.</p>
     */
    inline void SetProtocol(ProtocolValue&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The tunnel protocol.</p>
     */
    inline CreateTransitGatewayConnectRequestOptions& WithProtocol(const ProtocolValue& value) { SetProtocol(value); return *this;}

    /**
     * <p>The tunnel protocol.</p>
     */
    inline CreateTransitGatewayConnectRequestOptions& WithProtocol(ProtocolValue&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    ProtocolValue m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
