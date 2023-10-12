/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportStatusType.h>
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
      namespace ReportStatusTypeMapper
      {

        static constexpr uint32_t GENERATING_HASH = ConstExprHashingUtils::HashString("GENERATING");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t INCOMPLETE_HASH = ConstExprHashingUtils::HashString("INCOMPLETE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        ReportStatusType GetReportStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERATING_HASH)
          {
            return ReportStatusType::GENERATING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ReportStatusType::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReportStatusType::FAILED;
          }
          else if (hashCode == INCOMPLETE_HASH)
          {
            return ReportStatusType::INCOMPLETE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReportStatusType::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportStatusType>(hashCode);
          }

          return ReportStatusType::NOT_SET;
        }

        Aws::String GetNameForReportStatusType(ReportStatusType enumValue)
        {
          switch(enumValue)
          {
          case ReportStatusType::NOT_SET:
            return {};
          case ReportStatusType::GENERATING:
            return "GENERATING";
          case ReportStatusType::SUCCEEDED:
            return "SUCCEEDED";
          case ReportStatusType::FAILED:
            return "FAILED";
          case ReportStatusType::INCOMPLETE:
            return "INCOMPLETE";
          case ReportStatusType::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportStatusTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
