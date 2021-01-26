/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace FindingStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
        static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");


        FindingStatus GetFindingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return FindingStatus::ACTIVE;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return FindingStatus::ARCHIVED;
          }
          else if (hashCode == RESOLVED_HASH)
          {
            return FindingStatus::RESOLVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingStatus>(hashCode);
          }

          return FindingStatus::NOT_SET;
        }

        Aws::String GetNameForFindingStatus(FindingStatus enumValue)
        {
          switch(enumValue)
          {
          case FindingStatus::ACTIVE:
            return "ACTIVE";
          case FindingStatus::ARCHIVED:
            return "ARCHIVED";
          case FindingStatus::RESOLVED:
            return "RESOLVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingStatusMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
