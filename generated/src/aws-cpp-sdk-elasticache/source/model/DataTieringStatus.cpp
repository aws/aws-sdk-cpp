/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DataTieringStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace DataTieringStatusMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        DataTieringStatus GetDataTieringStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return DataTieringStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return DataTieringStatus::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataTieringStatus>(hashCode);
          }

          return DataTieringStatus::NOT_SET;
        }

        Aws::String GetNameForDataTieringStatus(DataTieringStatus enumValue)
        {
          switch(enumValue)
          {
          case DataTieringStatus::NOT_SET:
            return {};
          case DataTieringStatus::enabled:
            return "enabled";
          case DataTieringStatus::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataTieringStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
