/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ReportOutputType.h>
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
      namespace ReportOutputTypeMapper
      {

        static constexpr uint32_t SUMMARY_ONLY_HASH = ConstExprHashingUtils::HashString("SUMMARY_ONLY");
        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");


        ReportOutputType GetReportOutputTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUMMARY_ONLY_HASH)
          {
            return ReportOutputType::SUMMARY_ONLY;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return ReportOutputType::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportOutputType>(hashCode);
          }

          return ReportOutputType::NOT_SET;
        }

        Aws::String GetNameForReportOutputType(ReportOutputType enumValue)
        {
          switch(enumValue)
          {
          case ReportOutputType::NOT_SET:
            return {};
          case ReportOutputType::SUMMARY_ONLY:
            return "SUMMARY_ONLY";
          case ReportOutputType::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportOutputTypeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
