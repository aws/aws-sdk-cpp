/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ClientVpnEndpointAttributeStatusCode.h>
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
   * <p>Describes the status of the Client VPN endpoint attribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnEndpointAttributeStatus">AWS
   * API Reference</a></p>
   */
  class ClientVpnEndpointAttributeStatus
  {
  public:
    AWS_EC2_API ClientVpnEndpointAttributeStatus();
    AWS_EC2_API ClientVpnEndpointAttributeStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnEndpointAttributeStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status code.</p>
     */
    inline const ClientVpnEndpointAttributeStatusCode& GetCode() const{ return m_code; }

    /**
     * <p>The status code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status code.</p>
     */
    inline void SetCode(const ClientVpnEndpointAttributeStatusCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status code.</p>
     */
    inline void SetCode(ClientVpnEndpointAttributeStatusCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The status code.</p>
     */
    inline ClientVpnEndpointAttributeStatus& WithCode(const ClientVpnEndpointAttributeStatusCode& value) { SetCode(value); return *this;}

    /**
     * <p>The status code.</p>
     */
    inline ClientVpnEndpointAttributeStatus& WithCode(ClientVpnEndpointAttributeStatusCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The status message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The status message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The status message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The status message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The status message.</p>
     */
    inline ClientVpnEndpointAttributeStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline ClientVpnEndpointAttributeStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline ClientVpnEndpointAttributeStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ClientVpnEndpointAttributeStatusCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
