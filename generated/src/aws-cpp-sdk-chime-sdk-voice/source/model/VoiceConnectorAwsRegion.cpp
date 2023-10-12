/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/VoiceConnectorAwsRegion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace VoiceConnectorAwsRegionMapper
      {

        static constexpr uint32_t us_east_1_HASH = ConstExprHashingUtils::HashString("us-east-1");
        static constexpr uint32_t us_west_2_HASH = ConstExprHashingUtils::HashString("us-west-2");
        static constexpr uint32_t ca_central_1_HASH = ConstExprHashingUtils::HashString("ca-central-1");
        static constexpr uint32_t eu_central_1_HASH = ConstExprHashingUtils::HashString("eu-central-1");
        static constexpr uint32_t eu_west_1_HASH = ConstExprHashingUtils::HashString("eu-west-1");
        static constexpr uint32_t eu_west_2_HASH = ConstExprHashingUtils::HashString("eu-west-2");
        static constexpr uint32_t ap_northeast_2_HASH = ConstExprHashingUtils::HashString("ap-northeast-2");
        static constexpr uint32_t ap_northeast_1_HASH = ConstExprHashingUtils::HashString("ap-northeast-1");
        static constexpr uint32_t ap_southeast_1_HASH = ConstExprHashingUtils::HashString("ap-southeast-1");
        static constexpr uint32_t ap_southeast_2_HASH = ConstExprHashingUtils::HashString("ap-southeast-2");


        VoiceConnectorAwsRegion GetVoiceConnectorAwsRegionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == us_east_1_HASH)
          {
            return VoiceConnectorAwsRegion::us_east_1;
          }
          else if (hashCode == us_west_2_HASH)
          {
            return VoiceConnectorAwsRegion::us_west_2;
          }
          else if (hashCode == ca_central_1_HASH)
          {
            return VoiceConnectorAwsRegion::ca_central_1;
          }
          else if (hashCode == eu_central_1_HASH)
          {
            return VoiceConnectorAwsRegion::eu_central_1;
          }
          else if (hashCode == eu_west_1_HASH)
          {
            return VoiceConnectorAwsRegion::eu_west_1;
          }
          else if (hashCode == eu_west_2_HASH)
          {
            return VoiceConnectorAwsRegion::eu_west_2;
          }
          else if (hashCode == ap_northeast_2_HASH)
          {
            return VoiceConnectorAwsRegion::ap_northeast_2;
          }
          else if (hashCode == ap_northeast_1_HASH)
          {
            return VoiceConnectorAwsRegion::ap_northeast_1;
          }
          else if (hashCode == ap_southeast_1_HASH)
          {
            return VoiceConnectorAwsRegion::ap_southeast_1;
          }
          else if (hashCode == ap_southeast_2_HASH)
          {
            return VoiceConnectorAwsRegion::ap_southeast_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceConnectorAwsRegion>(hashCode);
          }

          return VoiceConnectorAwsRegion::NOT_SET;
        }

        Aws::String GetNameForVoiceConnectorAwsRegion(VoiceConnectorAwsRegion enumValue)
        {
          switch(enumValue)
          {
          case VoiceConnectorAwsRegion::NOT_SET:
            return {};
          case VoiceConnectorAwsRegion::us_east_1:
            return "us-east-1";
          case VoiceConnectorAwsRegion::us_west_2:
            return "us-west-2";
          case VoiceConnectorAwsRegion::ca_central_1:
            return "ca-central-1";
          case VoiceConnectorAwsRegion::eu_central_1:
            return "eu-central-1";
          case VoiceConnectorAwsRegion::eu_west_1:
            return "eu-west-1";
          case VoiceConnectorAwsRegion::eu_west_2:
            return "eu-west-2";
          case VoiceConnectorAwsRegion::ap_northeast_2:
            return "ap-northeast-2";
          case VoiceConnectorAwsRegion::ap_northeast_1:
            return "ap-northeast-1";
          case VoiceConnectorAwsRegion::ap_southeast_1:
            return "ap-southeast-1";
          case VoiceConnectorAwsRegion::ap_southeast_2:
            return "ap-southeast-2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceConnectorAwsRegionMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
