/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
