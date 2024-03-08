/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/DatasourcePackageIngestState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Detective
  {
    namespace Model
    {
      namespace DatasourcePackageIngestStateMapper
      {

        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DatasourcePackageIngestState GetDatasourcePackageIngestStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTED_HASH)
          {
            return DatasourcePackageIngestState::STARTED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DatasourcePackageIngestState::STOPPED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DatasourcePackageIngestState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasourcePackageIngestState>(hashCode);
          }

          return DatasourcePackageIngestState::NOT_SET;
        }

        Aws::String GetNameForDatasourcePackageIngestState(DatasourcePackageIngestState enumValue)
        {
          switch(enumValue)
          {
          case DatasourcePackageIngestState::NOT_SET:
            return {};
          case DatasourcePackageIngestState::STARTED:
            return "STARTED";
          case DatasourcePackageIngestState::STOPPED:
            return "STOPPED";
          case DatasourcePackageIngestState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasourcePackageIngestStateMapper
    } // namespace Model
  } // namespace Detective
} // namespace Aws
