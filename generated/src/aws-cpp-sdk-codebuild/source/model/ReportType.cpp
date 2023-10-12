/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportType.h>
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
      namespace ReportTypeMapper
      {

        static constexpr uint32_t TEST_HASH = ConstExprHashingUtils::HashString("TEST");
        static constexpr uint32_t CODE_COVERAGE_HASH = ConstExprHashingUtils::HashString("CODE_COVERAGE");


        ReportType GetReportTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEST_HASH)
          {
            return ReportType::TEST;
          }
          else if (hashCode == CODE_COVERAGE_HASH)
          {
            return ReportType::CODE_COVERAGE;
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
          case ReportType::NOT_SET:
            return {};
          case ReportType::TEST:
            return "TEST";
          case ReportType::CODE_COVERAGE:
            return "CODE_COVERAGE";
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
  } // namespace CodeBuild
} // namespace Aws
