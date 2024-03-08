/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CustomMetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace CustomMetricTypeMapper
      {

        static const int string_list_HASH = HashingUtils::HashString("string-list");
        static const int ip_address_list_HASH = HashingUtils::HashString("ip-address-list");
        static const int number_list_HASH = HashingUtils::HashString("number-list");
        static const int number_HASH = HashingUtils::HashString("number");


        CustomMetricType GetCustomMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == string_list_HASH)
          {
            return CustomMetricType::string_list;
          }
          else if (hashCode == ip_address_list_HASH)
          {
            return CustomMetricType::ip_address_list;
          }
          else if (hashCode == number_list_HASH)
          {
            return CustomMetricType::number_list;
          }
          else if (hashCode == number_HASH)
          {
            return CustomMetricType::number;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomMetricType>(hashCode);
          }

          return CustomMetricType::NOT_SET;
        }

        Aws::String GetNameForCustomMetricType(CustomMetricType enumValue)
        {
          switch(enumValue)
          {
          case CustomMetricType::NOT_SET:
            return {};
          case CustomMetricType::string_list:
            return "string-list";
          case CustomMetricType::ip_address_list:
            return "ip-address-list";
          case CustomMetricType::number_list:
            return "number-list";
          case CustomMetricType::number:
            return "number";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomMetricTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
