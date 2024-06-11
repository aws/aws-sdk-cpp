/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AssociatePhoneNumberWithUserRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API AssociatePhoneNumberWithUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociatePhoneNumberWithUser"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AssociatePhoneNumberWithUserRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AssociatePhoneNumberWithUserRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AssociatePhoneNumberWithUserRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline AssociatePhoneNumberWithUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline AssociatePhoneNumberWithUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline AssociatePhoneNumberWithUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetE164PhoneNumber() const{ return m_e164PhoneNumber; }
    inline bool E164PhoneNumberHasBeenSet() const { return m_e164PhoneNumberHasBeenSet; }
    inline void SetE164PhoneNumber(const Aws::String& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = value; }
    inline void SetE164PhoneNumber(Aws::String&& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = std::move(value); }
    inline void SetE164PhoneNumber(const char* value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber.assign(value); }
    inline AssociatePhoneNumberWithUserRequest& WithE164PhoneNumber(const Aws::String& value) { SetE164PhoneNumber(value); return *this;}
    inline AssociatePhoneNumberWithUserRequest& WithE164PhoneNumber(Aws::String&& value) { SetE164PhoneNumber(std::move(value)); return *this;}
    inline AssociatePhoneNumberWithUserRequest& WithE164PhoneNumber(const char* value) { SetE164PhoneNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_e164PhoneNumber;
    bool m_e164PhoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
