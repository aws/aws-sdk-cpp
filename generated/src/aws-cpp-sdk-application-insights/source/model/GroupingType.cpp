/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/GroupingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace GroupingTypeMapper
      {

        static const int ACCOUNT_BASED_HASH = HashingUtils::HashString("ACCOUNT_BASED");


        GroupingType GetGroupingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_BASED_HASH)
          {
            return GroupingType::ACCOUNT_BASED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupingType>(hashCode);
          }

          return GroupingType::NOT_SET;
        }

        Aws::String GetNameForGroupingType(GroupingType enumValue)
        {
          switch(enumValue)
          {
          case GroupingType::NOT_SET:
            return {};
          case GroupingType::ACCOUNT_BASED:
            return "ACCOUNT_BASED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupingTypeMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
