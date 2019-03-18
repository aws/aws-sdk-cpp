/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API ClientVpnEndpointStatus
  {
  public:
    ClientVpnEndpointStatus();
    ClientVpnEndpointStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClientVpnEndpointStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline const ClientVpnEndpointStatusCode& GetCode() const{ return m_code; }

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
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

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
    inline void SetCode(const ClientVpnEndpointStatusCode& value) { m_codeHasBeenSet = true; m_code = value; }

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
    inline void SetCode(ClientVpnEndpointStatusCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

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
    inline ClientVpnEndpointStatus& WithCode(const ClientVpnEndpointStatusCode& value) { SetCode(value); return *this;}

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
    inline ClientVpnEndpointStatus& WithCode(ClientVpnEndpointStatusCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A message about the status of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the status of the Client VPN endpoint.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message about the status of the Client VPN endpoint.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the status of the Client VPN endpoint.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message about the status of the Client VPN endpoint.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the status of the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpointStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the status of the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpointStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the status of the Client VPN endpoint.</p>
     */
    inline ClientVpnEndpointStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ClientVpnEndpointStatusCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
