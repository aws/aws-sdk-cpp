/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetDiscrepancyReportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace TestSetDiscrepancyReportStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        TestSetDiscrepancyReportStatus GetTestSetDiscrepancyReportStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return TestSetDiscrepancyReportStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return TestSetDiscrepancyReportStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return TestSetDiscrepancyReportStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestSetDiscrepancyReportStatus>(hashCode);
          }

          return TestSetDiscrepancyReportStatus::NOT_SET;
        }

        Aws::String GetNameForTestSetDiscrepancyReportStatus(TestSetDiscrepancyReportStatus enumValue)
        {
          switch(enumValue)
          {
          case TestSetDiscrepancyReportStatus::NOT_SET:
            return {};
          case TestSetDiscrepancyReportStatus::InProgress:
            return "InProgress";
          case TestSetDiscrepancyReportStatus::Completed:
            return "Completed";
          case TestSetDiscrepancyReportStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestSetDiscrepancyReportStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
