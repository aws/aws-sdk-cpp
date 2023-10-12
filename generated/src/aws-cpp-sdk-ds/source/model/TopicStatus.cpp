/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/TopicStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace TopicStatusMapper
      {

        static constexpr uint32_t Registered_HASH = ConstExprHashingUtils::HashString("Registered");
        static constexpr uint32_t Topic_not_found_HASH = ConstExprHashingUtils::HashString("Topic not found");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");


        TopicStatus GetTopicStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Registered_HASH)
          {
            return TopicStatus::Registered;
          }
          else if (hashCode == Topic_not_found_HASH)
          {
            return TopicStatus::Topic_not_found;
          }
          else if (hashCode == Failed_HASH)
          {
            return TopicStatus::Failed;
          }
          else if (hashCode == Deleted_HASH)
          {
            return TopicStatus::Deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicStatus>(hashCode);
          }

          return TopicStatus::NOT_SET;
        }

        Aws::String GetNameForTopicStatus(TopicStatus enumValue)
        {
          switch(enumValue)
          {
          case TopicStatus::NOT_SET:
            return {};
          case TopicStatus::Registered:
            return "Registered";
          case TopicStatus::Topic_not_found:
            return "Topic not found";
          case TopicStatus::Failed:
            return "Failed";
          case TopicStatus::Deleted:
            return "Deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
