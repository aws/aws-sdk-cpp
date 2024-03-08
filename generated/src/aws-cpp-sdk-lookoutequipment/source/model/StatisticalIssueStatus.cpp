/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/StatisticalIssueStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace StatisticalIssueStatusMapper
      {

        static const int POTENTIAL_ISSUE_DETECTED_HASH = HashingUtils::HashString("POTENTIAL_ISSUE_DETECTED");
        static const int NO_ISSUE_DETECTED_HASH = HashingUtils::HashString("NO_ISSUE_DETECTED");


        StatisticalIssueStatus GetStatisticalIssueStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POTENTIAL_ISSUE_DETECTED_HASH)
          {
            return StatisticalIssueStatus::POTENTIAL_ISSUE_DETECTED;
          }
          else if (hashCode == NO_ISSUE_DETECTED_HASH)
          {
            return StatisticalIssueStatus::NO_ISSUE_DETECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatisticalIssueStatus>(hashCode);
          }

          return StatisticalIssueStatus::NOT_SET;
        }

        Aws::String GetNameForStatisticalIssueStatus(StatisticalIssueStatus enumValue)
        {
          switch(enumValue)
          {
          case StatisticalIssueStatus::NOT_SET:
            return {};
          case StatisticalIssueStatus::POTENTIAL_ISSUE_DETECTED:
            return "POTENTIAL_ISSUE_DETECTED";
          case StatisticalIssueStatus::NO_ISSUE_DETECTED:
            return "NO_ISSUE_DETECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatisticalIssueStatusMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
