/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/FieldContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace FieldContentTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int PHONE_NUMBER_HASH = HashingUtils::HashString("PHONE_NUMBER");
        static const int EMAIL_ADDRESS_HASH = HashingUtils::HashString("EMAIL_ADDRESS");
        static const int NAME_HASH = HashingUtils::HashString("NAME");


        FieldContentType GetFieldContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return FieldContentType::STRING;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return FieldContentType::NUMBER;
          }
          else if (hashCode == PHONE_NUMBER_HASH)
          {
            return FieldContentType::PHONE_NUMBER;
          }
          else if (hashCode == EMAIL_ADDRESS_HASH)
          {
            return FieldContentType::EMAIL_ADDRESS;
          }
          else if (hashCode == NAME_HASH)
          {
            return FieldContentType::NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldContentType>(hashCode);
          }

          return FieldContentType::NOT_SET;
        }

        Aws::String GetNameForFieldContentType(FieldContentType enumValue)
        {
          switch(enumValue)
          {
          case FieldContentType::NOT_SET:
            return {};
          case FieldContentType::STRING:
            return "STRING";
          case FieldContentType::NUMBER:
            return "NUMBER";
          case FieldContentType::PHONE_NUMBER:
            return "PHONE_NUMBER";
          case FieldContentType::EMAIL_ADDRESS:
            return "EMAIL_ADDRESS";
          case FieldContentType::NAME:
            return "NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldContentTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
