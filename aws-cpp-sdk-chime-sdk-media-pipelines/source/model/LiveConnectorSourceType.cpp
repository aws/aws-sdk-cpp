/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace LiveConnectorSourceTypeMapper
      {

        static const int ChimeSdkMeeting_HASH = HashingUtils::HashString("ChimeSdkMeeting");


        LiveConnectorSourceType GetLiveConnectorSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ChimeSdkMeeting_HASH)
          {
            return LiveConnectorSourceType::ChimeSdkMeeting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LiveConnectorSourceType>(hashCode);
          }

          return LiveConnectorSourceType::NOT_SET;
        }

        Aws::String GetNameForLiveConnectorSourceType(LiveConnectorSourceType enumValue)
        {
          switch(enumValue)
          {
          case LiveConnectorSourceType::ChimeSdkMeeting:
            return "ChimeSdkMeeting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LiveConnectorSourceTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
