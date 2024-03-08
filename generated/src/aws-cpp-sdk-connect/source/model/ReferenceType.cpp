/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReferenceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ReferenceTypeMapper
      {

        static const int URL_HASH = HashingUtils::HashString("URL");
        static const int ATTACHMENT_HASH = HashingUtils::HashString("ATTACHMENT");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");


        ReferenceType GetReferenceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == URL_HASH)
          {
            return ReferenceType::URL;
          }
          else if (hashCode == ATTACHMENT_HASH)
          {
            return ReferenceType::ATTACHMENT;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return ReferenceType::NUMBER;
          }
          else if (hashCode == STRING_HASH)
          {
            return ReferenceType::STRING;
          }
          else if (hashCode == DATE_HASH)
          {
            return ReferenceType::DATE;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return ReferenceType::EMAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceType>(hashCode);
          }

          return ReferenceType::NOT_SET;
        }

        Aws::String GetNameForReferenceType(ReferenceType enumValue)
        {
          switch(enumValue)
          {
          case ReferenceType::NOT_SET:
            return {};
          case ReferenceType::URL:
            return "URL";
          case ReferenceType::ATTACHMENT:
            return "ATTACHMENT";
          case ReferenceType::NUMBER:
            return "NUMBER";
          case ReferenceType::STRING:
            return "STRING";
          case ReferenceType::DATE:
            return "DATE";
          case ReferenceType::EMAIL:
            return "EMAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
