/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/lex-models/model/ChannelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace ChannelStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ChannelStatus GetChannelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ChannelStatus::IN_PROGRESS;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ChannelStatus::CREATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChannelStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelStatus>(hashCode);
          }

          return ChannelStatus::NOT_SET;
        }

        Aws::String GetNameForChannelStatus(ChannelStatus enumValue)
        {
          switch(enumValue)
          {
          case ChannelStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ChannelStatus::CREATED:
            return "CREATED";
          case ChannelStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelStatusMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
