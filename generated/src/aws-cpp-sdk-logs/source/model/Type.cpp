/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/Type.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace TypeMapper
      {

        static const int boolean_HASH = HashingUtils::HashString("boolean");
        static const int integer_HASH = HashingUtils::HashString("integer");
        static const int double__HASH = HashingUtils::HashString("double");
        static const int string_HASH = HashingUtils::HashString("string");


        Type GetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == boolean_HASH)
          {
            return Type::boolean;
          }
          else if (hashCode == integer_HASH)
          {
            return Type::integer;
          }
          else if (hashCode == double__HASH)
          {
            return Type::double_;
          }
          else if (hashCode == string_HASH)
          {
            return Type::string;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::NOT_SET:
            return {};
          case Type::boolean:
            return "boolean";
          case Type::integer:
            return "integer";
          case Type::double_:
            return "double";
          case Type::string:
            return "string";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
