/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DataProtectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace DataProtectionStatusMapper
      {

        static constexpr uint32_t ACTIVATED_HASH = ConstExprHashingUtils::HashString("ACTIVATED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t ARCHIVED_HASH = ConstExprHashingUtils::HashString("ARCHIVED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        DataProtectionStatus GetDataProtectionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATED_HASH)
          {
            return DataProtectionStatus::ACTIVATED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return DataProtectionStatus::DELETED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return DataProtectionStatus::ARCHIVED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DataProtectionStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataProtectionStatus>(hashCode);
          }

          return DataProtectionStatus::NOT_SET;
        }

        Aws::String GetNameForDataProtectionStatus(DataProtectionStatus enumValue)
        {
          switch(enumValue)
          {
          case DataProtectionStatus::NOT_SET:
            return {};
          case DataProtectionStatus::ACTIVATED:
            return "ACTIVATED";
          case DataProtectionStatus::DELETED:
            return "DELETED";
          case DataProtectionStatus::ARCHIVED:
            return "ARCHIVED";
          case DataProtectionStatus::DISABLED:
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

      } // namespace DataProtectionStatusMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
