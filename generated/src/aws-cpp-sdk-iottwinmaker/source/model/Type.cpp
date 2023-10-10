/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/Type.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace TypeMapper
      {

        static const int RELATIONSHIP_HASH = HashingUtils::HashString("RELATIONSHIP");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int LONG_HASH = HashingUtils::HashString("LONG");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int LIST_HASH = HashingUtils::HashString("LIST");
        static const int MAP_HASH = HashingUtils::HashString("MAP");


        Type GetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RELATIONSHIP_HASH)
          {
            return Type::RELATIONSHIP;
          }
          else if (hashCode == STRING_HASH)
          {
            return Type::STRING;
          }
          else if (hashCode == LONG_HASH)
          {
            return Type::LONG;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return Type::BOOLEAN;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return Type::INTEGER;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return Type::DOUBLE;
          }
          else if (hashCode == LIST_HASH)
          {
            return Type::LIST;
          }
          else if (hashCode == MAP_HASH)
          {
            return Type::MAP;
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
          case Type::RELATIONSHIP:
            return "RELATIONSHIP";
          case Type::STRING:
            return "STRING";
          case Type::LONG:
            return "LONG";
          case Type::BOOLEAN:
            return "BOOLEAN";
          case Type::INTEGER:
            return "INTEGER";
          case Type::DOUBLE:
            return "DOUBLE";
          case Type::LIST:
            return "LIST";
          case Type::MAP:
            return "MAP";
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
  } // namespace IoTTwinMaker
} // namespace Aws
