/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/SbomReportFormat.h>
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
      namespace SbomReportFormatMapper
      {

        static const int CYCLONEDX_1_4_HASH = HashingUtils::HashString("CYCLONEDX_1_4");
        static const int SPDX_2_3_HASH = HashingUtils::HashString("SPDX_2_3");


        SbomReportFormat GetSbomReportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CYCLONEDX_1_4_HASH)
          {
            return SbomReportFormat::CYCLONEDX_1_4;
          }
          else if (hashCode == SPDX_2_3_HASH)
          {
            return SbomReportFormat::SPDX_2_3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SbomReportFormat>(hashCode);
          }

          return SbomReportFormat::NOT_SET;
        }

        Aws::String GetNameForSbomReportFormat(SbomReportFormat enumValue)
        {
          switch(enumValue)
          {
          case SbomReportFormat::NOT_SET:
            return {};
          case SbomReportFormat::CYCLONEDX_1_4:
            return "CYCLONEDX_1_4";
          case SbomReportFormat::SPDX_2_3:
            return "SPDX_2_3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SbomReportFormatMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
