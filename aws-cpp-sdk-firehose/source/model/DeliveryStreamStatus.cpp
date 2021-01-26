/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DeliveryStreamStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace DeliveryStreamStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATING_FAILED_HASH = HashingUtils::HashString("CREATING_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETING_FAILED_HASH = HashingUtils::HashString("DELETING_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        DeliveryStreamStatus GetDeliveryStreamStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DeliveryStreamStatus::CREATING;
          }
          else if (hashCode == CREATING_FAILED_HASH)
          {
            return DeliveryStreamStatus::CREATING_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DeliveryStreamStatus::DELETING;
          }
          else if (hashCode == DELETING_FAILED_HASH)
          {
            return DeliveryStreamStatus::DELETING_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DeliveryStreamStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryStreamStatus>(hashCode);
          }

          return DeliveryStreamStatus::NOT_SET;
        }

        Aws::String GetNameForDeliveryStreamStatus(DeliveryStreamStatus enumValue)
        {
          switch(enumValue)
          {
          case DeliveryStreamStatus::CREATING:
            return "CREATING";
          case DeliveryStreamStatus::CREATING_FAILED:
            return "CREATING_FAILED";
          case DeliveryStreamStatus::DELETING:
            return "DELETING";
          case DeliveryStreamStatus::DELETING_FAILED:
            return "DELETING_FAILED";
          case DeliveryStreamStatus::ACTIVE:
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

      } // namespace DeliveryStreamStatusMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
