/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AttributeDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace AttributeDataTypeMapper
      {

        static const int String_HASH = HashingUtils::HashString("String");
        static const int Number_HASH = HashingUtils::HashString("Number");
        static const int DateTime_HASH = HashingUtils::HashString("DateTime");
        static const int Boolean_HASH = HashingUtils::HashString("Boolean");


        AttributeDataType GetAttributeDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == String_HASH)
          {
            return AttributeDataType::String;
          }
          else if (hashCode == Number_HASH)
          {
            return AttributeDataType::Number;
          }
          else if (hashCode == DateTime_HASH)
          {
            return AttributeDataType::DateTime;
          }
          else if (hashCode == Boolean_HASH)
          {
            return AttributeDataType::Boolean;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeDataType>(hashCode);
          }

          return AttributeDataType::NOT_SET;
        }

        Aws::String GetNameForAttributeDataType(AttributeDataType enumValue)
        {
          switch(enumValue)
          {
          case AttributeDataType::String:
            return "String";
          case AttributeDataType::Number:
            return "Number";
          case AttributeDataType::DateTime:
            return "DateTime";
          case AttributeDataType::Boolean:
            return "Boolean";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeDataTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
