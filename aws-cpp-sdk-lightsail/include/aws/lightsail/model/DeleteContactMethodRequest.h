/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
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
  class DeleteContactMethodRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteContactMethodRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteContactMethod"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The protocol that will be deleted, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p>  <p>To delete an <code>Email</code>
     * and an <code>SMS</code> contact method if you added both, you must run separate
     * <code>DeleteContactMethod</code> actions to delete each protocol.</p> 
     */
    inline const ContactProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol that will be deleted, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p>  <p>To delete an <code>Email</code>
     * and an <code>SMS</code> contact method if you added both, you must run separate
     * <code>DeleteContactMethod</code> actions to delete each protocol.</p> 
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol that will be deleted, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p>  <p>To delete an <code>Email</code>
     * and an <code>SMS</code> contact method if you added both, you must run separate
     * <code>DeleteContactMethod</code> actions to delete each protocol.</p> 
     */
    inline void SetProtocol(const ContactProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol that will be deleted, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p>  <p>To delete an <code>Email</code>
     * and an <code>SMS</code> contact method if you added both, you must run separate
     * <code>DeleteContactMethod</code> actions to delete each protocol.</p> 
     */
    inline void SetProtocol(ContactProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol that will be deleted, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p>  <p>To delete an <code>Email</code>
     * and an <code>SMS</code> contact method if you added both, you must run separate
     * <code>DeleteContactMethod</code> actions to delete each protocol.</p> 
     */
    inline DeleteContactMethodRequest& WithProtocol(const ContactProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol that will be deleted, such as <code>Email</code> or
     * <code>SMS</code> (text messaging).</p>  <p>To delete an <code>Email</code>
     * and an <code>SMS</code> contact method if you added both, you must run separate
     * <code>DeleteContactMethod</code> actions to delete each protocol.</p> 
     */
    inline DeleteContactMethodRequest& WithProtocol(ContactProtocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    ContactProtocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
