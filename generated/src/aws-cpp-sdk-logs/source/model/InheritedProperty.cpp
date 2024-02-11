/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/InheritedProperty.h>
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
      namespace InheritedPropertyMapper
      {

        static const int ACCOUNT_DATA_PROTECTION_HASH = HashingUtils::HashString("ACCOUNT_DATA_PROTECTION");


        InheritedProperty GetInheritedPropertyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_DATA_PROTECTION_HASH)
          {
            return InheritedProperty::ACCOUNT_DATA_PROTECTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InheritedProperty>(hashCode);
          }

          return InheritedProperty::NOT_SET;
        }

        Aws::String GetNameForInheritedProperty(InheritedProperty enumValue)
        {
          switch(enumValue)
          {
          case InheritedProperty::NOT_SET:
            return {};
          case InheritedProperty::ACCOUNT_DATA_PROTECTION:
            return "ACCOUNT_DATA_PROTECTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InheritedPropertyMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
