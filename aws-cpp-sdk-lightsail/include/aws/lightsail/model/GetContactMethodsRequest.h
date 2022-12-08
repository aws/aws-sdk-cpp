/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/ContactProtocol.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetContactMethodsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetContactMethodsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContactMethods"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The protocols used to send notifications, such as <code>Email</code>, or
     * <code>SMS</code> (text messaging).</p> <p>Specify a protocol in your request to
     * return information about a specific contact method protocol.</p>
     */
    inline const Aws::Vector<ContactProtocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>The protocols used to send notifications, such as <code>Email</code>, or
     * <code>SMS</code> (text messaging).</p> <p>Specify a protocol in your request to
     * return information about a specific contact method protocol.</p>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>The protocols used to send notifications, such as <code>Email</code>, or
     * <code>SMS</code> (text messaging).</p> <p>Specify a protocol in your request to
     * return information about a specific contact method protocol.</p>
     */
    inline void SetProtocols(const Aws::Vector<ContactProtocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>The protocols used to send notifications, such as <code>Email</code>, or
     * <code>SMS</code> (text messaging).</p> <p>Specify a protocol in your request to
     * return information about a specific contact method protocol.</p>
     */
    inline void SetProtocols(Aws::Vector<ContactProtocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>The protocols used to send notifications, such as <code>Email</code>, or
     * <code>SMS</code> (text messaging).</p> <p>Specify a protocol in your request to
     * return information about a specific contact method protocol.</p>
     */
    inline GetContactMethodsRequest& WithProtocols(const Aws::Vector<ContactProtocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>The protocols used to send notifications, such as <code>Email</code>, or
     * <code>SMS</code> (text messaging).</p> <p>Specify a protocol in your request to
     * return information about a specific contact method protocol.</p>
     */
    inline GetContactMethodsRequest& WithProtocols(Aws::Vector<ContactProtocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocols used to send notifications, such as <code>Email</code>, or
     * <code>SMS</code> (text messaging).</p> <p>Specify a protocol in your request to
     * return information about a specific contact method protocol.</p>
     */
    inline GetContactMethodsRequest& AddProtocols(const ContactProtocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>The protocols used to send notifications, such as <code>Email</code>, or
     * <code>SMS</code> (text messaging).</p> <p>Specify a protocol in your request to
     * return information about a specific contact method protocol.</p>
     */
    inline GetContactMethodsRequest& AddProtocols(ContactProtocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContactProtocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
