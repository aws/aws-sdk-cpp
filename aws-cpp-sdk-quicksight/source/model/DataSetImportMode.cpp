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

#include <aws/quicksight/model/DataSetImportMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace DataSetImportModeMapper
      {

        static const int SPICE_HASH = HashingUtils::HashString("SPICE");
        static const int DIRECT_QUERY_HASH = HashingUtils::HashString("DIRECT_QUERY");


        DataSetImportMode GetDataSetImportModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPICE_HASH)
          {
            return DataSetImportMode::SPICE;
          }
          else if (hashCode == DIRECT_QUERY_HASH)
          {
            return DataSetImportMode::DIRECT_QUERY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSetImportMode>(hashCode);
          }

          return DataSetImportMode::NOT_SET;
        }

        Aws::String GetNameForDataSetImportMode(DataSetImportMode enumValue)
        {
          switch(enumValue)
          {
          case DataSetImportMode::SPICE:
            return "SPICE";
          case DataSetImportMode::DIRECT_QUERY:
            return "DIRECT_QUERY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSetImportModeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
