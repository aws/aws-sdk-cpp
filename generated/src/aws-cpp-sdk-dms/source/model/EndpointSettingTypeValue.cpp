/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/EndpointSettingTypeValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace EndpointSettingTypeValueMapper
      {

        static const int string_HASH = HashingUtils::HashString("string");
        static const int boolean_HASH = HashingUtils::HashString("boolean");
        static const int integer_HASH = HashingUtils::HashString("integer");
        static const int enum__HASH = HashingUtils::HashString("enum");


        EndpointSettingTypeValue GetEndpointSettingTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == string_HASH)
          {
            return EndpointSettingTypeValue::string;
          }
          else if (hashCode == boolean_HASH)
          {
            return EndpointSettingTypeValue::boolean;
          }
          else if (hashCode == integer_HASH)
          {
            return EndpointSettingTypeValue::integer;
          }
          else if (hashCode == enum__HASH)
          {
            return EndpointSettingTypeValue::enum_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointSettingTypeValue>(hashCode);
          }

          return EndpointSettingTypeValue::NOT_SET;
        }

        Aws::String GetNameForEndpointSettingTypeValue(EndpointSettingTypeValue enumValue)
        {
          switch(enumValue)
          {
          case EndpointSettingTypeValue::NOT_SET:
            return {};
          case EndpointSettingTypeValue::string:
            return "string";
          case EndpointSettingTypeValue::boolean:
            return "boolean";
          case EndpointSettingTypeValue::integer:
            return "integer";
          case EndpointSettingTypeValue::enum_:
            return "enum";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointSettingTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
