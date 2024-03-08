/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchReportModeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace BatchReportModeTypeMapper
      {

        static const int REPORT_INDIVIDUAL_BUILDS_HASH = HashingUtils::HashString("REPORT_INDIVIDUAL_BUILDS");
        static const int REPORT_AGGREGATED_BATCH_HASH = HashingUtils::HashString("REPORT_AGGREGATED_BATCH");


        BatchReportModeType GetBatchReportModeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPORT_INDIVIDUAL_BUILDS_HASH)
          {
            return BatchReportModeType::REPORT_INDIVIDUAL_BUILDS;
          }
          else if (hashCode == REPORT_AGGREGATED_BATCH_HASH)
          {
            return BatchReportModeType::REPORT_AGGREGATED_BATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchReportModeType>(hashCode);
          }

          return BatchReportModeType::NOT_SET;
        }

        Aws::String GetNameForBatchReportModeType(BatchReportModeType enumValue)
        {
          switch(enumValue)
          {
          case BatchReportModeType::NOT_SET:
            return {};
          case BatchReportModeType::REPORT_INDIVIDUAL_BUILDS:
            return "REPORT_INDIVIDUAL_BUILDS";
          case BatchReportModeType::REPORT_AGGREGATED_BATCH:
            return "REPORT_AGGREGATED_BATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchReportModeTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
