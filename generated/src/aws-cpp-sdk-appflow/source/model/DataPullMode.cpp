/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DataPullMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace DataPullModeMapper
      {

        static const int Incremental_HASH = HashingUtils::HashString("Incremental");
        static const int Complete_HASH = HashingUtils::HashString("Complete");


        DataPullMode GetDataPullModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Incremental_HASH)
          {
            return DataPullMode::Incremental;
          }
          else if (hashCode == Complete_HASH)
          {
            return DataPullMode::Complete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataPullMode>(hashCode);
          }

          return DataPullMode::NOT_SET;
        }

        Aws::String GetNameForDataPullMode(DataPullMode enumValue)
        {
          switch(enumValue)
          {
          case DataPullMode::Incremental:
            return "Incremental";
          case DataPullMode::Complete:
            return "Complete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataPullModeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
