/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>The BGP options for the Connect attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayConnectRequestBgpOptions">AWS
   * API Reference</a></p>
   */
  class TransitGatewayConnectRequestBgpOptions
  {
  public:
    AWS_EC2_API TransitGatewayConnectRequestBgpOptions();
    AWS_EC2_API TransitGatewayConnectRequestBgpOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayConnectRequestBgpOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The peer Autonomous System Number (ASN).</p>
     */
    inline long long GetPeerAsn() const{ return m_peerAsn; }

    /**
     * <p>The peer Autonomous System Number (ASN).</p>
     */
    inline bool PeerAsnHasBeenSet() const { return m_peerAsnHasBeenSet; }

    /**
     * <p>The peer Autonomous System Number (ASN).</p>
     */
    inline void SetPeerAsn(long long value) { m_peerAsnHasBeenSet = true; m_peerAsn = value; }

    /**
     * <p>The peer Autonomous System Number (ASN).</p>
     */
    inline TransitGatewayConnectRequestBgpOptions& WithPeerAsn(long long value) { SetPeerAsn(value); return *this;}

  private:

    long long m_peerAsn;
    bool m_peerAsnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
