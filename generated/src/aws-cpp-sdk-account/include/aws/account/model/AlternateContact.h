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


    /**
     * <p>The type of alternate contact.</p>
     */
    inline const AlternateContactType& GetAlternateContactType() const{ return m_alternateContactType; }

    /**
     * <p>The type of alternate contact.</p>
     */
    inline bool AlternateContactTypeHasBeenSet() const { return m_alternateContactTypeHasBeenSet; }

    /**
     * <p>The type of alternate contact.</p>
     */
    inline void SetAlternateContactType(const AlternateContactType& value) { m_alternateContactTypeHasBeenSet = true; m_alternateContactType = value; }

    /**
     * <p>The type of alternate contact.</p>
     */
    inline void SetAlternateContactType(AlternateContactType&& value) { m_alternateContactTypeHasBeenSet = true; m_alternateContactType = std::move(value); }

    /**
     * <p>The type of alternate contact.</p>
     */
    inline AlternateContact& WithAlternateContactType(const AlternateContactType& value) { SetAlternateContactType(value); return *this;}

    /**
     * <p>The type of alternate contact.</p>
     */
    inline AlternateContact& WithAlternateContactType(AlternateContactType&& value) { SetAlternateContactType(std::move(value)); return *this;}


    /**
     * <p>The email address associated with this alternate contact.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address associated with this alternate contact.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address associated with this alternate contact.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address associated with this alternate contact.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address associated with this alternate contact.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address associated with this alternate contact.</p>
     */
    inline AlternateContact& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address associated with this alternate contact.</p>
     */
    inline AlternateContact& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address associated with this alternate contact.</p>
     */
    inline AlternateContact& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The name associated with this alternate contact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name associated with this alternate contact.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name associated with this alternate contact.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name associated with this alternate contact.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name associated with this alternate contact.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name associated with this alternate contact.</p>
     */
    inline AlternateContact& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name associated with this alternate contact.</p>
     */
    inline AlternateContact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name associated with this alternate contact.</p>
     */
    inline AlternateContact& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The phone number associated with this alternate contact.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number associated with this alternate contact.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number associated with this alternate contact.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number associated with this alternate contact.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number associated with this alternate contact.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number associated with this alternate contact.</p>
     */
    inline AlternateContact& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number associated with this alternate contact.</p>
     */
    inline AlternateContact& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number associated with this alternate contact.</p>
     */
    inline AlternateContact& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The title associated with this alternate contact.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title associated with this alternate contact.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title associated with this alternate contact.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title associated with this alternate contact.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title associated with this alternate contact.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title associated with this alternate contact.</p>
     */
    inline AlternateContact& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title associated with this alternate contact.</p>
     */
    inline AlternateContact& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title associated with this alternate contact.</p>
     */
    inline AlternateContact& WithTitle(const char* value) { SetTitle(value); return *this;}

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
