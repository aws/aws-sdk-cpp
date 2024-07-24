/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/FilterStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace FilterStatusMapper
      {

        static const int VALID_HASH = HashingUtils::HashString("VALID");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");


        FilterStatus GetFilterStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALID_HASH)
          {
            return FilterStatus::VALID;
          }
          else if (hashCode == INVALID_HASH)
          {
            return FilterStatus::INVALID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterStatus>(hashCode);
          }

          return FilterStatus::NOT_SET;
        }

        Aws::String GetNameForFilterStatus(FilterStatus enumValue)
        {
          switch(enumValue)
          {
          case FilterStatus::NOT_SET:
            return {};
          case FilterStatus::VALID:
            return "VALID";
          case FilterStatus::INVALID:
            return "INVALID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
