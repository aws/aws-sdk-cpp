/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PublishingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace PublishingStatusMapper
      {

        static constexpr uint32_t PENDING_VERIFICATION_HASH = ConstExprHashingUtils::HashString("PENDING_VERIFICATION");
        static constexpr uint32_t PUBLISHING_HASH = ConstExprHashingUtils::HashString("PUBLISHING");
        static constexpr uint32_t UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY_HASH = ConstExprHashingUtils::HashString("UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        PublishingStatus GetPublishingStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VERIFICATION_HASH)
          {
            return PublishingStatus::PENDING_VERIFICATION;
          }
          else if (hashCode == PUBLISHING_HASH)
          {
            return PublishingStatus::PUBLISHING;
          }
          else if (hashCode == UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY_HASH)
          {
            return PublishingStatus::UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return PublishingStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PublishingStatus>(hashCode);
          }

          return PublishingStatus::NOT_SET;
        }

        Aws::String GetNameForPublishingStatus(PublishingStatus enumValue)
        {
          switch(enumValue)
          {
          case PublishingStatus::NOT_SET:
            return {};
          case PublishingStatus::PENDING_VERIFICATION:
            return "PENDING_VERIFICATION";
          case PublishingStatus::PUBLISHING:
            return "PUBLISHING";
          case PublishingStatus::UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY:
            return "UNABLE_TO_PUBLISH_FIX_DESTINATION_PROPERTY";
          case PublishingStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PublishingStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
