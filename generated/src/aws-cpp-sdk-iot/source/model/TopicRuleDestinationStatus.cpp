/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TopicRuleDestinationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace TopicRuleDestinationStatusMapper
      {

        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        TopicRuleDestinationStatus GetTopicRuleDestinationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return TopicRuleDestinationStatus::ENABLED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return TopicRuleDestinationStatus::IN_PROGRESS;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return TopicRuleDestinationStatus::DISABLED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return TopicRuleDestinationStatus::ERROR_;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TopicRuleDestinationStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicRuleDestinationStatus>(hashCode);
          }

          return TopicRuleDestinationStatus::NOT_SET;
        }

        Aws::String GetNameForTopicRuleDestinationStatus(TopicRuleDestinationStatus enumValue)
        {
          switch(enumValue)
          {
          case TopicRuleDestinationStatus::NOT_SET:
            return {};
          case TopicRuleDestinationStatus::ENABLED:
            return "ENABLED";
          case TopicRuleDestinationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case TopicRuleDestinationStatus::DISABLED:
            return "DISABLED";
          case TopicRuleDestinationStatus::ERROR_:
            return "ERROR";
          case TopicRuleDestinationStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicRuleDestinationStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
