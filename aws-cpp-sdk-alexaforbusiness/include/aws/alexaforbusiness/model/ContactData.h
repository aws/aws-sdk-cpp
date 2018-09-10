﻿/*
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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>Information related to a contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ContactData">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API ContactData
  {
  public:
    ContactData();
    ContactData(Aws::Utils::Json::JsonView jsonValue);
    ContactData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the contact.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>The ARN of the contact.</p>
     */
    inline ContactData& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the contact.</p>
     */
    inline ContactData& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the contact.</p>
     */
    inline ContactData& WithContactArn(const char* value) { SetContactArn(value); return *this;}


    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline ContactData& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline ContactData& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact to display on the console.</p>
     */
    inline ContactData& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the contact, used to call the contact on the device.</p>
     */
    inline ContactData& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The phone number of the contact.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number of the contact.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number of the contact.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number of the contact.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number of the contact.</p>
     */
    inline ContactData& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number of the contact.</p>
     */
    inline ContactData& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number of the contact.</p>
     */
    inline ContactData& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}

  private:

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
