/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ClientVpnEndpointStatusCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the state of a Client VPN endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnEndpointStatus">AWS
   * API Reference</a></p>
   */
  class ClientVpnEndpointStatus
  {
  public:
    AWS_EC2_API ClientVpnEndpointStatus() = default;
    AWS_EC2_API ClientVpnEndpointStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnEndpointStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the Client VPN endpoint. Possible states include:</p> <ul> <li>
     * <p> <code>pending-associate</code> - The Client VPN endpoint has been created
     * but no target networks have been associated. The Client VPN endpoint cannot
     * accept connections.</p> </li> <li> <p> <code>available</code> - The Client VPN
     * endpoint has been created and a target network has been associated. The Client
     * VPN endpoint can accept connections.</p> </li> <li> <p> <code>deleting</code> -
     * The Client VPN endpoint is being deleted. The Client VPN endpoint cannot accept
     * connections.</p> </li> <li> <p> <code>deleted</code> - The Client VPN endpoint
     * has been deleted. The Client VPN endpoint cannot accept connections.</p> </li>
     * </ul>
     */
    inline ClientVpnEndpointStatusCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(ClientVpnEndpointStatusCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline ClientVpnEndpointStatus& WithCode(ClientVpnEndpointStatusCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the status of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ClientVpnEndpointStatus& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    ClientVpnEndpointStatusCode m_code{ClientVpnEndpointStatusCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
