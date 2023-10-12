/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ReportLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace ReportLevelMapper
      {

        static constexpr uint32_t ERRORS_ONLY_HASH = ConstExprHashingUtils::HashString("ERRORS_ONLY");
        static constexpr uint32_t SUCCESSES_AND_ERRORS_HASH = ConstExprHashingUtils::HashString("SUCCESSES_AND_ERRORS");


        ReportLevel GetReportLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERRORS_ONLY_HASH)
          {
            return ReportLevel::ERRORS_ONLY;
          }
          else if (hashCode == SUCCESSES_AND_ERRORS_HASH)
          {
            return ReportLevel::SUCCESSES_AND_ERRORS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportLevel>(hashCode);
          }

          return ReportLevel::NOT_SET;
        }

        Aws::String GetNameForReportLevel(ReportLevel enumValue)
        {
          switch(enumValue)
          {
          case ReportLevel::NOT_SET:
            return {};
          case ReportLevel::ERRORS_ONLY:
            return "ERRORS_ONLY";
          case ReportLevel::SUCCESSES_AND_ERRORS:
            return "SUCCESSES_AND_ERRORS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportLevelMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
