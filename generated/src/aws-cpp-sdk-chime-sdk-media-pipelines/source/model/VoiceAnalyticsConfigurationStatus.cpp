/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/VoiceAnalyticsConfigurationStatus.h>
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
      namespace VoiceAnalyticsConfigurationStatusMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        VoiceAnalyticsConfigurationStatus GetVoiceAnalyticsConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return VoiceAnalyticsConfigurationStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return VoiceAnalyticsConfigurationStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceAnalyticsConfigurationStatus>(hashCode);
          }

          return VoiceAnalyticsConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForVoiceAnalyticsConfigurationStatus(VoiceAnalyticsConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case VoiceAnalyticsConfigurationStatus::NOT_SET:
            return {};
          case VoiceAnalyticsConfigurationStatus::Enabled:
            return "Enabled";
          case VoiceAnalyticsConfigurationStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceAnalyticsConfigurationStatusMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
