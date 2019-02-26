/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/cur/model/ReportVersioning.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostandUsageReportService
  {
    namespace Model
    {
      namespace ReportVersioningMapper
      {

        static const int CREATE_NEW_REPORT_HASH = HashingUtils::HashString("CREATE_NEW_REPORT");
        static const int OVERWRITE_REPORT_HASH = HashingUtils::HashString("OVERWRITE_REPORT");


        ReportVersioning GetReportVersioningForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_NEW_REPORT_HASH)
          {
            return ReportVersioning::CREATE_NEW_REPORT;
          }
          else if (hashCode == OVERWRITE_REPORT_HASH)
          {
            return ReportVersioning::OVERWRITE_REPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportVersioning>(hashCode);
          }

          return ReportVersioning::NOT_SET;
        }

        Aws::String GetNameForReportVersioning(ReportVersioning enumValue)
        {
          switch(enumValue)
          {
          case ReportVersioning::CREATE_NEW_REPORT:
            return "CREATE_NEW_REPORT";
          case ReportVersioning::OVERWRITE_REPORT:
            return "OVERWRITE_REPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportVersioningMapper
    } // namespace Model
  } // namespace CostandUsageReportService
} // namespace Aws
