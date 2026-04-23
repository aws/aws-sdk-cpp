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

#include <aws/discovery/model/ExportDataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace ExportDataFormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int GRAPHML_HASH = HashingUtils::HashString("GRAPHML");


        ExportDataFormat GetExportDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return ExportDataFormat::CSV;
          }
          else if (hashCode == GRAPHML_HASH)
          {
            return ExportDataFormat::GRAPHML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportDataFormat>(hashCode);
          }

          return ExportDataFormat::NOT_SET;
        }

        Aws::String GetNameForExportDataFormat(ExportDataFormat enumValue)
        {
          switch(enumValue)
          {
          case ExportDataFormat::CSV:
            return "CSV";
          case ExportDataFormat::GRAPHML:
            return "GRAPHML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportDataFormatMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
