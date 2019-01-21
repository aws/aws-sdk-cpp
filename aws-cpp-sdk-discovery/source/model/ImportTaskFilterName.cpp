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

#include <aws/discovery/model/ImportTaskFilterName.h>
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
      namespace ImportTaskFilterNameMapper
      {

        static const int IMPORT_TASK_ID_HASH = HashingUtils::HashString("IMPORT_TASK_ID");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int NAME_HASH = HashingUtils::HashString("NAME");


        ImportTaskFilterName GetImportTaskFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORT_TASK_ID_HASH)
          {
            return ImportTaskFilterName::IMPORT_TASK_ID;
          }
          else if (hashCode == STATUS_HASH)
          {
            return ImportTaskFilterName::STATUS;
          }
          else if (hashCode == NAME_HASH)
          {
            return ImportTaskFilterName::NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportTaskFilterName>(hashCode);
          }

          return ImportTaskFilterName::NOT_SET;
        }

        Aws::String GetNameForImportTaskFilterName(ImportTaskFilterName enumValue)
        {
          switch(enumValue)
          {
          case ImportTaskFilterName::IMPORT_TASK_ID:
            return "IMPORT_TASK_ID";
          case ImportTaskFilterName::STATUS:
            return "STATUS";
          case ImportTaskFilterName::NAME:
            return "NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportTaskFilterNameMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
