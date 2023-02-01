/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class DisassociateContactFromAddressBookRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API DisassociateContactFromAddressBookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateContactFromAddressBook"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the contact to disassociate from an address book.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the contact to disassociate from an address book.</p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>The ARN of the contact to disassociate from an address book.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>The ARN of the contact to disassociate from an address book.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the contact to disassociate from an address book.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>The ARN of the contact to disassociate from an address book.</p>
     */
    inline DisassociateContactFromAddressBookRequest& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the contact to disassociate from an address book.</p>
     */
    inline DisassociateContactFromAddressBookRequest& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the contact to disassociate from an address book.</p>
     */
    inline DisassociateContactFromAddressBookRequest& WithContactArn(const char* value) { SetContactArn(value); return *this;}


    /**
     * <p>The ARN of the address from which to disassociate the contact.</p>
     */
    inline const Aws::String& GetAddressBookArn() const{ return m_addressBookArn; }

    /**
     * <p>The ARN of the address from which to disassociate the contact.</p>
     */
    inline bool AddressBookArnHasBeenSet() const { return m_addressBookArnHasBeenSet; }

    /**
     * <p>The ARN of the address from which to disassociate the contact.</p>
     */
    inline void SetAddressBookArn(const Aws::String& value) { m_addressBookArnHasBeenSet = true; m_addressBookArn = value; }

    /**
     * <p>The ARN of the address from which to disassociate the contact.</p>
     */
    inline void SetAddressBookArn(Aws::String&& value) { m_addressBookArnHasBeenSet = true; m_addressBookArn = std::move(value); }

    /**
     * <p>The ARN of the address from which to disassociate the contact.</p>
     */
    inline void SetAddressBookArn(const char* value) { m_addressBookArnHasBeenSet = true; m_addressBookArn.assign(value); }

    /**
     * <p>The ARN of the address from which to disassociate the contact.</p>
     */
    inline DisassociateContactFromAddressBookRequest& WithAddressBookArn(const Aws::String& value) { SetAddressBookArn(value); return *this;}

    /**
     * <p>The ARN of the address from which to disassociate the contact.</p>
     */
    inline DisassociateContactFromAddressBookRequest& WithAddressBookArn(Aws::String&& value) { SetAddressBookArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the address from which to disassociate the contact.</p>
     */
    inline DisassociateContactFromAddressBookRequest& WithAddressBookArn(const char* value) { SetAddressBookArn(value); return *this;}

  private:

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_addressBookArn;
    bool m_addressBookArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
