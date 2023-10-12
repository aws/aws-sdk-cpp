/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSinkType.h>
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
      namespace LiveConnectorSinkTypeMapper
      {

        static constexpr uint32_t RTMP_HASH = ConstExprHashingUtils::HashString("RTMP");


        LiveConnectorSinkType GetLiveConnectorSinkTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RTMP_HASH)
          {
            return LiveConnectorSinkType::RTMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LiveConnectorSinkType>(hashCode);
          }

          return LiveConnectorSinkType::NOT_SET;
        }

        Aws::String GetNameForLiveConnectorSinkType(LiveConnectorSinkType enumValue)
        {
          switch(enumValue)
          {
          case LiveConnectorSinkType::NOT_SET:
            return {};
          case LiveConnectorSinkType::RTMP:
            return "RTMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LiveConnectorSinkTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
