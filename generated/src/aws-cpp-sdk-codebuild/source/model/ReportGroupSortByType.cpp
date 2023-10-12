/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportGroupSortByType.h>
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
      namespace ReportGroupSortByTypeMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t CREATED_TIME_HASH = ConstExprHashingUtils::HashString("CREATED_TIME");
        static constexpr uint32_t LAST_MODIFIED_TIME_HASH = ConstExprHashingUtils::HashString("LAST_MODIFIED_TIME");


        ReportGroupSortByType GetReportGroupSortByTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return ReportGroupSortByType::NAME;
          }
          else if (hashCode == CREATED_TIME_HASH)
          {
            return ReportGroupSortByType::CREATED_TIME;
          }
          else if (hashCode == LAST_MODIFIED_TIME_HASH)
          {
            return ReportGroupSortByType::LAST_MODIFIED_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportGroupSortByType>(hashCode);
          }

          return ReportGroupSortByType::NOT_SET;
        }

        Aws::String GetNameForReportGroupSortByType(ReportGroupSortByType enumValue)
        {
          switch(enumValue)
          {
          case ReportGroupSortByType::NOT_SET:
            return {};
          case ReportGroupSortByType::NAME:
            return "NAME";
          case ReportGroupSortByType::CREATED_TIME:
            return "CREATED_TIME";
          case ReportGroupSortByType::LAST_MODIFIED_TIME:
            return "LAST_MODIFIED_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportGroupSortByTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
