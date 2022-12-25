/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/model/ContactMethodVerificationProtocol.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class SendContactMethodVerificationRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API SendContactMethodVerificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendContactMethodVerification"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The protocol to verify, such as <code>Email</code> or <code>SMS</code> (text
     * messaging).</p>
     */
    inline const ContactMethodVerificationProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to verify, such as <code>Email</code> or <code>SMS</code> (text
     * messaging).</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to verify, such as <code>Email</code> or <code>SMS</code> (text
     * messaging).</p>
     */
    inline void SetProtocol(const ContactMethodVerificationProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to verify, such as <code>Email</code> or <code>SMS</code> (text
     * messaging).</p>
     */
    inline void SetProtocol(ContactMethodVerificationProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to verify, such as <code>Email</code> or <code>SMS</code> (text
     * messaging).</p>
     */
    inline SendContactMethodVerificationRequest& WithProtocol(const ContactMethodVerificationProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to verify, such as <code>Email</code> or <code>SMS</code> (text
     * messaging).</p>
     */
    inline SendContactMethodVerificationRequest& WithProtocol(ContactMethodVerificationProtocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    ContactMethodVerificationProtocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
