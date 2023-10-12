/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportGroupStatusType.h>
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
      namespace ReportGroupStatusTypeMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        ReportGroupStatusType GetReportGroupStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ReportGroupStatusType::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReportGroupStatusType::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportGroupStatusType>(hashCode);
          }

          return ReportGroupStatusType::NOT_SET;
        }

        Aws::String GetNameForReportGroupStatusType(ReportGroupStatusType enumValue)
        {
          switch(enumValue)
          {
          case ReportGroupStatusType::NOT_SET:
            return {};
          case ReportGroupStatusType::ACTIVE:
            return "ACTIVE";
          case ReportGroupStatusType::DELETING:
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

      } // namespace ReportGroupStatusTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
