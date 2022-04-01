/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FilterAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace FilterActionMapper
      {

        static const int NOOP_HASH = HashingUtils::HashString("NOOP");
        static const int ARCHIVE_HASH = HashingUtils::HashString("ARCHIVE");


        FilterAction GetFilterActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOOP_HASH)
          {
            return FilterAction::NOOP;
          }
          else if (hashCode == ARCHIVE_HASH)
          {
            return FilterAction::ARCHIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterAction>(hashCode);
          }

          return FilterAction::NOT_SET;
        }

        Aws::String GetNameForFilterAction(FilterAction enumValue)
        {
          switch(enumValue)
          {
          case FilterAction::NOOP:
            return "NOOP";
          case FilterAction::ARCHIVE:
            return "ARCHIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterActionMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
