/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class DeregisterMemberFromAddressListRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API DeregisterMemberFromAddressListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterMemberFromAddressList"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The address to be removed from the address list.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline DeregisterMemberFromAddressListRequest& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline DeregisterMemberFromAddressListRequest& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline DeregisterMemberFromAddressListRequest& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the address list to remove the address from.</p>
     */
    inline const Aws::String& GetAddressListId() const{ return m_addressListId; }
    inline bool AddressListIdHasBeenSet() const { return m_addressListIdHasBeenSet; }
    inline void SetAddressListId(const Aws::String& value) { m_addressListIdHasBeenSet = true; m_addressListId = value; }
    inline void SetAddressListId(Aws::String&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::move(value); }
    inline void SetAddressListId(const char* value) { m_addressListIdHasBeenSet = true; m_addressListId.assign(value); }
    inline DeregisterMemberFromAddressListRequest& WithAddressListId(const Aws::String& value) { SetAddressListId(value); return *this;}
    inline DeregisterMemberFromAddressListRequest& WithAddressListId(Aws::String&& value) { SetAddressListId(std::move(value)); return *this;}
    inline DeregisterMemberFromAddressListRequest& WithAddressListId(const char* value) { SetAddressListId(value); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_addressListId;
    bool m_addressListIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
