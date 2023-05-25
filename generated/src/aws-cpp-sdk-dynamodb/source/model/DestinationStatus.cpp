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

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLE_FAILED_HASH = HashingUtils::HashString("ENABLE_FAILED");


        DestinationStatus GetDestinationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
