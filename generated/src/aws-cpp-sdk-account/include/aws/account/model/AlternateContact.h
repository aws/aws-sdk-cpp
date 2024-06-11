/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/AlternateContactType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Account
{
namespace Model
{

  /**
   * <p>A structure that contains the details of an alternate contact associated with
   * an Amazon Web Services account</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/account-2021-02-01/AlternateContact">AWS
   * API Reference</a></p>
   */
  class AlternateContact
  {
  public:
    AWS_ACCOUNT_API AlternateContact();
    AWS_ACCOUNT_API AlternateContact(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API AlternateContact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of alternate contact.</p>
     */
    inline const AlternateContactType& GetAlternateContactType() const{ return m_alternateContactType; }
    inline bool AlternateContactTypeHasBeenSet() const { return m_alternateContactTypeHasBeenSet; }
    inline void SetAlternateContactType(const AlternateContactType& value) { m_alternateContactTypeHasBeenSet = true; m_alternateContactType = value; }
    inline void SetAlternateContactType(AlternateContactType&& value) { m_alternateContactTypeHasBeenSet = true; m_alternateContactType = std::move(value); }
    inline AlternateContact& WithAlternateContactType(const AlternateContactType& value) { SetAlternateContactType(value); return *this;}
    inline AlternateContact& WithAlternateContactType(AlternateContactType&& value) { SetAlternateContactType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address associated with this alternate contact.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline AlternateContact& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline AlternateContact& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline AlternateContact& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name associated with this alternate contact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AlternateContact& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AlternateContact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AlternateContact& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number associated with this alternate contact.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline AlternateContact& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline AlternateContact& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline AlternateContact& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title associated with this alternate contact.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline AlternateContact& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline AlternateContact& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline AlternateContact& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    AlternateContactType m_alternateContactType;
    bool m_alternateContactTypeHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
