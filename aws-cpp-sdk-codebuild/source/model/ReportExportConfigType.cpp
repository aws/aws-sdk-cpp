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

#include <aws/codebuild/model/ReportExportConfigType.h>
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
      namespace ReportExportConfigTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int NO_EXPORT_HASH = HashingUtils::HashString("NO_EXPORT");


        ReportExportConfigType GetReportExportConfigTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return ReportExportConfigType::S3;
          }
          else if (hashCode == NO_EXPORT_HASH)
          {
            return ReportExportConfigType::NO_EXPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportExportConfigType>(hashCode);
          }

          return ReportExportConfigType::NOT_SET;
        }

        Aws::String GetNameForReportExportConfigType(ReportExportConfigType enumValue)
        {
          switch(enumValue)
          {
          case ReportExportConfigType::S3:
            return "S3";
          case ReportExportConfigType::NO_EXPORT:
            return "NO_EXPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportExportConfigTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
