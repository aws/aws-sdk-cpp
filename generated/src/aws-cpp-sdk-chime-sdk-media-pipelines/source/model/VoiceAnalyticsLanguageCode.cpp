/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/VoiceAnalyticsLanguageCode.h>
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
      namespace VoiceAnalyticsLanguageCodeMapper
      {

        static const int en_US_HASH = HashingUtils::HashString("en-US");


        VoiceAnalyticsLanguageCode GetVoiceAnalyticsLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return VoiceAnalyticsLanguageCode::en_US;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceAnalyticsLanguageCode>(hashCode);
          }

          return VoiceAnalyticsLanguageCode::NOT_SET;
        }

        Aws::String GetNameForVoiceAnalyticsLanguageCode(VoiceAnalyticsLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case VoiceAnalyticsLanguageCode::NOT_SET:
            return {};
          case VoiceAnalyticsLanguageCode::en_US:
            return "en-US";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceAnalyticsLanguageCodeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
