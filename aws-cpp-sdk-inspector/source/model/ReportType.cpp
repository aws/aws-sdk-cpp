/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ReportType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace ReportTypeMapper
      {

        static const int FINDING_HASH = HashingUtils::HashString("FINDING");
        static const int FULL_HASH = HashingUtils::HashString("FULL");


        ReportType GetReportTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINDING_HASH)
          {
            return ReportType::FINDING;
          }
          else if (hashCode == FULL_HASH)
          {
            return ReportType::FULL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportType>(hashCode);
          }

          return ReportType::NOT_SET;
        }

        Aws::String GetNameForReportType(ReportType enumValue)
        {
          switch(enumValue)
          {
          case ReportType::FINDING:
            return "FINDING";
          case ReportType::FULL:
            return "FULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportTypeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
