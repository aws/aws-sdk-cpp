/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DestinationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace DestinationStatusMapper
      {

        static constexpr uint32_t ENABLING_HASH = ConstExprHashingUtils::HashString("ENABLING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DISABLING_HASH = ConstExprHashingUtils::HashString("DISABLING");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLE_FAILED_HASH = ConstExprHashingUtils::HashString("ENABLE_FAILED");


        DestinationStatus GetDestinationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return DestinationStatus::ENABLING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DestinationStatus::ACTIVE;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return DestinationStatus::DISABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DestinationStatus::DISABLED;
          }
          else if (hashCode == ENABLE_FAILED_HASH)
          {
            return DestinationStatus::ENABLE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationStatus>(hashCode);
          }

          return DestinationStatus::NOT_SET;
        }

        Aws::String GetNameForDestinationStatus(DestinationStatus enumValue)
        {
          switch(enumValue)
          {
          case DestinationStatus::NOT_SET:
            return {};
          case DestinationStatus::ENABLING:
            return "ENABLING";
          case DestinationStatus::ACTIVE:
            return "ACTIVE";
          case DestinationStatus::DISABLING:
            return "DISABLING";
          case DestinationStatus::DISABLED:
            return "DISABLED";
          case DestinationStatus::ENABLE_FAILED:
            return "ENABLE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
