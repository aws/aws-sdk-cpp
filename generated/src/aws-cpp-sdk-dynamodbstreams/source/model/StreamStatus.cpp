/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/StreamStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDBStreams
  {
    namespace Model
    {
      namespace StreamStatusMapper
      {

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        StreamStatus GetStreamStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return StreamStatus::ENABLING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return StreamStatus::ENABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return StreamStatus::DISABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return StreamStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamStatus>(hashCode);
          }

          return StreamStatus::NOT_SET;
        }

        Aws::String GetNameForStreamStatus(StreamStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamStatus::ENABLING:
            return "ENABLING";
          case StreamStatus::ENABLED:
            return "ENABLED";
          case StreamStatus::DISABLING:
            return "DISABLING";
          case StreamStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamStatusMapper
    } // namespace Model
  } // namespace DynamoDBStreams
} // namespace Aws
