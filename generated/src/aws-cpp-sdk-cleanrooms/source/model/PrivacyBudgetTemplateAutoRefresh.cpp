/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PrivacyBudgetTemplateAutoRefresh.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace PrivacyBudgetTemplateAutoRefreshMapper
      {

        static const int CALENDAR_MONTH_HASH = HashingUtils::HashString("CALENDAR_MONTH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        PrivacyBudgetTemplateAutoRefresh GetPrivacyBudgetTemplateAutoRefreshForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CALENDAR_MONTH_HASH)
          {
            return PrivacyBudgetTemplateAutoRefresh::CALENDAR_MONTH;
          }
          else if (hashCode == NONE_HASH)
          {
            return PrivacyBudgetTemplateAutoRefresh::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrivacyBudgetTemplateAutoRefresh>(hashCode);
          }

          return PrivacyBudgetTemplateAutoRefresh::NOT_SET;
        }

        Aws::String GetNameForPrivacyBudgetTemplateAutoRefresh(PrivacyBudgetTemplateAutoRefresh enumValue)
        {
          switch(enumValue)
          {
          case PrivacyBudgetTemplateAutoRefresh::NOT_SET:
            return {};
          case PrivacyBudgetTemplateAutoRefresh::CALENDAR_MONTH:
            return "CALENDAR_MONTH";
          case PrivacyBudgetTemplateAutoRefresh::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrivacyBudgetTemplateAutoRefreshMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
