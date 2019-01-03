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

#include <aws/inspector/model/ReportFileFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace ReportFileFormatMapper
      {

        static const int HTML_HASH = HashingUtils::HashString("HTML");
        static const int PDF_HASH = HashingUtils::HashString("PDF");


        ReportFileFormat GetReportFileFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTML_HASH)
          {
            return ReportFileFormat::HTML;
          }
          else if (hashCode == PDF_HASH)
          {
            return ReportFileFormat::PDF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportFileFormat>(hashCode);
          }

          return ReportFileFormat::NOT_SET;
        }

        Aws::String GetNameForReportFileFormat(ReportFileFormat enumValue)
        {
          switch(enumValue)
          {
          case ReportFileFormat::HTML:
            return "HTML";
          case ReportFileFormat::PDF:
            return "PDF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportFileFormatMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
