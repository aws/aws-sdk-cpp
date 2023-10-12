/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DataPullMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace DataPullModeMapper
      {

        static constexpr uint32_t Incremental_HASH = ConstExprHashingUtils::HashString("Incremental");
        static constexpr uint32_t Complete_HASH = ConstExprHashingUtils::HashString("Complete");


        DataPullMode GetDataPullModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case DataPullMode::NOT_SET:
            return {};
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
  } // namespace CustomerProfiles
} // namespace Aws
