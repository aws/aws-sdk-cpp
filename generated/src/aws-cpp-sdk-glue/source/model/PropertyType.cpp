/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PropertyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace PropertyTypeMapper
      {

        static const int USER_INPUT_HASH = HashingUtils::HashString("USER_INPUT");
        static const int SECRET_HASH = HashingUtils::HashString("SECRET");
        static const int READ_ONLY_HASH = HashingUtils::HashString("READ_ONLY");
        static const int UNUSED_HASH = HashingUtils::HashString("UNUSED");
        static const int SECRET_OR_USER_INPUT_HASH = HashingUtils::HashString("SECRET_OR_USER_INPUT");


        PropertyType GetPropertyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_INPUT_HASH)
          {
            return PropertyType::USER_INPUT;
          }
          else if (hashCode == SECRET_HASH)
          {
            return PropertyType::SECRET;
          }
          else if (hashCode == READ_ONLY_HASH)
          {
            return PropertyType::READ_ONLY;
          }
          else if (hashCode == UNUSED_HASH)
          {
            return PropertyType::UNUSED;
          }
          else if (hashCode == SECRET_OR_USER_INPUT_HASH)
          {
            return PropertyType::SECRET_OR_USER_INPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropertyType>(hashCode);
          }

          return PropertyType::NOT_SET;
        }

        Aws::String GetNameForPropertyType(PropertyType enumValue)
        {
          switch(enumValue)
          {
          case PropertyType::NOT_SET:
            return {};
          case PropertyType::USER_INPUT:
            return "USER_INPUT";
          case PropertyType::SECRET:
            return "SECRET";
          case PropertyType::READ_ONLY:
            return "READ_ONLY";
          case PropertyType::UNUSED:
            return "UNUSED";
          case PropertyType::SECRET_OR_USER_INPUT:
            return "SECRET_OR_USER_INPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PropertyTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
