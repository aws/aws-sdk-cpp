/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CollectorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace CollectorStatusMapper
      {

        static constexpr uint32_t UNREGISTERED_HASH = ConstExprHashingUtils::HashString("UNREGISTERED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");


        CollectorStatus GetCollectorStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNREGISTERED_HASH)
          {
            return CollectorStatus::UNREGISTERED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return CollectorStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CollectorStatus>(hashCode);
          }

          return CollectorStatus::NOT_SET;
        }

        Aws::String GetNameForCollectorStatus(CollectorStatus enumValue)
        {
          switch(enumValue)
          {
          case CollectorStatus::NOT_SET:
            return {};
          case CollectorStatus::UNREGISTERED:
            return "UNREGISTERED";
          case CollectorStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CollectorStatusMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
