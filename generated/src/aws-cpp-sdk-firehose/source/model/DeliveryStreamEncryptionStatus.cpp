/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DeliveryStreamEncryptionStatus.h>
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
      namespace DeliveryStreamEncryptionStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int ENABLING_FAILED_HASH = HashingUtils::HashString("ENABLING_FAILED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLING_FAILED_HASH = HashingUtils::HashString("DISABLING_FAILED");


        DeliveryStreamEncryptionStatus GetDeliveryStreamEncryptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DeliveryStreamEncryptionStatus::ENABLED;
          }
          else if (hashCode == ENABLING_HASH)
          {
            return DeliveryStreamEncryptionStatus::ENABLING;
          }
          else if (hashCode == ENABLING_FAILED_HASH)
          {
            return DeliveryStreamEncryptionStatus::ENABLING_FAILED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DeliveryStreamEncryptionStatus::DISABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return DeliveryStreamEncryptionStatus::DISABLING;
          }
          else if (hashCode == DISABLING_FAILED_HASH)
          {
            return DeliveryStreamEncryptionStatus::DISABLING_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryStreamEncryptionStatus>(hashCode);
          }

          return DeliveryStreamEncryptionStatus::NOT_SET;
        }

        Aws::String GetNameForDeliveryStreamEncryptionStatus(DeliveryStreamEncryptionStatus enumValue)
        {
          switch(enumValue)
          {
          case DeliveryStreamEncryptionStatus::ENABLED:
            return "ENABLED";
          case DeliveryStreamEncryptionStatus::ENABLING:
            return "ENABLING";
          case DeliveryStreamEncryptionStatus::ENABLING_FAILED:
            return "ENABLING_FAILED";
          case DeliveryStreamEncryptionStatus::DISABLED:
            return "DISABLED";
          case DeliveryStreamEncryptionStatus::DISABLING:
            return "DISABLING";
          case DeliveryStreamEncryptionStatus::DISABLING_FAILED:
            return "DISABLING_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryStreamEncryptionStatusMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
