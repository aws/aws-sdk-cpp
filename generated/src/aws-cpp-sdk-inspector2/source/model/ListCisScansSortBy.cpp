/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCisScansSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ListCisScansSortByMapper
      {

        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int SCHEDULED_BY_HASH = HashingUtils::HashString("SCHEDULED_BY");
        static const int SCAN_START_DATE_HASH = HashingUtils::HashString("SCAN_START_DATE");
        static const int FAILED_CHECKS_HASH = HashingUtils::HashString("FAILED_CHECKS");


        ListCisScansSortBy GetListCisScansSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATUS_HASH)
          {
            return ListCisScansSortBy::STATUS;
          }
          else if (hashCode == SCHEDULED_BY_HASH)
          {
            return ListCisScansSortBy::SCHEDULED_BY;
          }
          else if (hashCode == SCAN_START_DATE_HASH)
          {
            return ListCisScansSortBy::SCAN_START_DATE;
          }
          else if (hashCode == FAILED_CHECKS_HASH)
          {
            return ListCisScansSortBy::FAILED_CHECKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListCisScansSortBy>(hashCode);
          }

          return ListCisScansSortBy::NOT_SET;
        }

        Aws::String GetNameForListCisScansSortBy(ListCisScansSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListCisScansSortBy::NOT_SET:
            return {};
          case ListCisScansSortBy::STATUS:
            return "STATUS";
          case ListCisScansSortBy::SCHEDULED_BY:
            return "SCHEDULED_BY";
          case ListCisScansSortBy::SCAN_START_DATE:
            return "SCAN_START_DATE";
          case ListCisScansSortBy::FAILED_CHECKS:
            return "FAILED_CHECKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListCisScansSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
