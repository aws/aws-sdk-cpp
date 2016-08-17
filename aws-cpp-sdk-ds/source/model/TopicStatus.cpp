/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int Registered_HASH = HashingUtils::HashString("Registered");
        static const int Topic_not_found_HASH = HashingUtils::HashString("Topic not found");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        TopicStatus GetTopicStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace TopicStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
