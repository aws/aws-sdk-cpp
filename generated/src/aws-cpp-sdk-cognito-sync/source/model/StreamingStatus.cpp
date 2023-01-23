/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/StreamingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoSync
  {
    namespace Model
    {
      namespace StreamingStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        StreamingStatus GetStreamingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return StreamingStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return StreamingStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamingStatus>(hashCode);
          }

          return StreamingStatus::NOT_SET;
        }

        Aws::String GetNameForStreamingStatus(StreamingStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamingStatus::ENABLED:
            return "ENABLED";
          case StreamingStatus::DISABLED:
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

      } // namespace StreamingStatusMapper
    } // namespace Model
  } // namespace CognitoSync
} // namespace Aws
