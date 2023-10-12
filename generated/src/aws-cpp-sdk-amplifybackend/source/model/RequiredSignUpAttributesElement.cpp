/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/RequiredSignUpAttributesElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace RequiredSignUpAttributesElementMapper
      {

        static constexpr uint32_t ADDRESS_HASH = ConstExprHashingUtils::HashString("ADDRESS");
        static constexpr uint32_t BIRTHDATE_HASH = ConstExprHashingUtils::HashString("BIRTHDATE");
        static constexpr uint32_t EMAIL_HASH = ConstExprHashingUtils::HashString("EMAIL");
        static constexpr uint32_t FAMILY_NAME_HASH = ConstExprHashingUtils::HashString("FAMILY_NAME");
        static constexpr uint32_t GENDER_HASH = ConstExprHashingUtils::HashString("GENDER");
        static constexpr uint32_t GIVEN_NAME_HASH = ConstExprHashingUtils::HashString("GIVEN_NAME");
        static constexpr uint32_t LOCALE_HASH = ConstExprHashingUtils::HashString("LOCALE");
        static constexpr uint32_t MIDDLE_NAME_HASH = ConstExprHashingUtils::HashString("MIDDLE_NAME");
        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t NICKNAME_HASH = ConstExprHashingUtils::HashString("NICKNAME");
        static constexpr uint32_t PHONE_NUMBER_HASH = ConstExprHashingUtils::HashString("PHONE_NUMBER");
        static constexpr uint32_t PICTURE_HASH = ConstExprHashingUtils::HashString("PICTURE");
        static constexpr uint32_t PREFERRED_USERNAME_HASH = ConstExprHashingUtils::HashString("PREFERRED_USERNAME");
        static constexpr uint32_t PROFILE_HASH = ConstExprHashingUtils::HashString("PROFILE");
        static constexpr uint32_t UPDATED_AT_HASH = ConstExprHashingUtils::HashString("UPDATED_AT");
        static constexpr uint32_t WEBSITE_HASH = ConstExprHashingUtils::HashString("WEBSITE");
        static constexpr uint32_t ZONE_INFO_HASH = ConstExprHashingUtils::HashString("ZONE_INFO");


        RequiredSignUpAttributesElement GetRequiredSignUpAttributesElementForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADDRESS_HASH)
          {
            return RequiredSignUpAttributesElement::ADDRESS;
          }
          else if (hashCode == BIRTHDATE_HASH)
          {
            return RequiredSignUpAttributesElement::BIRTHDATE;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return RequiredSignUpAttributesElement::EMAIL;
          }
          else if (hashCode == FAMILY_NAME_HASH)
          {
            return RequiredSignUpAttributesElement::FAMILY_NAME;
          }
          else if (hashCode == GENDER_HASH)
          {
            return RequiredSignUpAttributesElement::GENDER;
          }
          else if (hashCode == GIVEN_NAME_HASH)
          {
            return RequiredSignUpAttributesElement::GIVEN_NAME;
          }
          else if (hashCode == LOCALE_HASH)
          {
            return RequiredSignUpAttributesElement::LOCALE;
          }
          else if (hashCode == MIDDLE_NAME_HASH)
          {
            return RequiredSignUpAttributesElement::MIDDLE_NAME;
          }
          else if (hashCode == NAME_HASH)
          {
            return RequiredSignUpAttributesElement::NAME;
          }
          else if (hashCode == NICKNAME_HASH)
          {
            return RequiredSignUpAttributesElement::NICKNAME;
          }
          else if (hashCode == PHONE_NUMBER_HASH)
          {
            return RequiredSignUpAttributesElement::PHONE_NUMBER;
          }
          else if (hashCode == PICTURE_HASH)
          {
            return RequiredSignUpAttributesElement::PICTURE;
          }
          else if (hashCode == PREFERRED_USERNAME_HASH)
          {
            return RequiredSignUpAttributesElement::PREFERRED_USERNAME;
          }
          else if (hashCode == PROFILE_HASH)
          {
            return RequiredSignUpAttributesElement::PROFILE;
          }
          else if (hashCode == UPDATED_AT_HASH)
          {
            return RequiredSignUpAttributesElement::UPDATED_AT;
          }
          else if (hashCode == WEBSITE_HASH)
          {
            return RequiredSignUpAttributesElement::WEBSITE;
          }
          else if (hashCode == ZONE_INFO_HASH)
          {
            return RequiredSignUpAttributesElement::ZONE_INFO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequiredSignUpAttributesElement>(hashCode);
          }

          return RequiredSignUpAttributesElement::NOT_SET;
        }

        Aws::String GetNameForRequiredSignUpAttributesElement(RequiredSignUpAttributesElement enumValue)
        {
          switch(enumValue)
          {
          case RequiredSignUpAttributesElement::NOT_SET:
            return {};
          case RequiredSignUpAttributesElement::ADDRESS:
            return "ADDRESS";
          case RequiredSignUpAttributesElement::BIRTHDATE:
            return "BIRTHDATE";
          case RequiredSignUpAttributesElement::EMAIL:
            return "EMAIL";
          case RequiredSignUpAttributesElement::FAMILY_NAME:
            return "FAMILY_NAME";
          case RequiredSignUpAttributesElement::GENDER:
            return "GENDER";
          case RequiredSignUpAttributesElement::GIVEN_NAME:
            return "GIVEN_NAME";
          case RequiredSignUpAttributesElement::LOCALE:
            return "LOCALE";
          case RequiredSignUpAttributesElement::MIDDLE_NAME:
            return "MIDDLE_NAME";
          case RequiredSignUpAttributesElement::NAME:
            return "NAME";
          case RequiredSignUpAttributesElement::NICKNAME:
            return "NICKNAME";
          case RequiredSignUpAttributesElement::PHONE_NUMBER:
            return "PHONE_NUMBER";
          case RequiredSignUpAttributesElement::PICTURE:
            return "PICTURE";
          case RequiredSignUpAttributesElement::PREFERRED_USERNAME:
            return "PREFERRED_USERNAME";
          case RequiredSignUpAttributesElement::PROFILE:
            return "PROFILE";
          case RequiredSignUpAttributesElement::UPDATED_AT:
            return "UPDATED_AT";
          case RequiredSignUpAttributesElement::WEBSITE:
            return "WEBSITE";
          case RequiredSignUpAttributesElement::ZONE_INFO:
            return "ZONE_INFO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequiredSignUpAttributesElementMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
