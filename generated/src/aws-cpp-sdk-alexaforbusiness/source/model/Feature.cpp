/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/Feature.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace FeatureMapper
      {

        static constexpr uint32_t BLUETOOTH_HASH = ConstExprHashingUtils::HashString("BLUETOOTH");
        static constexpr uint32_t VOLUME_HASH = ConstExprHashingUtils::HashString("VOLUME");
        static constexpr uint32_t NOTIFICATIONS_HASH = ConstExprHashingUtils::HashString("NOTIFICATIONS");
        static constexpr uint32_t LISTS_HASH = ConstExprHashingUtils::HashString("LISTS");
        static constexpr uint32_t SKILLS_HASH = ConstExprHashingUtils::HashString("SKILLS");
        static constexpr uint32_t NETWORK_PROFILE_HASH = ConstExprHashingUtils::HashString("NETWORK_PROFILE");
        static constexpr uint32_t SETTINGS_HASH = ConstExprHashingUtils::HashString("SETTINGS");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        Feature GetFeatureForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLUETOOTH_HASH)
          {
            return Feature::BLUETOOTH;
          }
          else if (hashCode == VOLUME_HASH)
          {
            return Feature::VOLUME;
          }
          else if (hashCode == NOTIFICATIONS_HASH)
          {
            return Feature::NOTIFICATIONS;
          }
          else if (hashCode == LISTS_HASH)
          {
            return Feature::LISTS;
          }
          else if (hashCode == SKILLS_HASH)
          {
            return Feature::SKILLS;
          }
          else if (hashCode == NETWORK_PROFILE_HASH)
          {
            return Feature::NETWORK_PROFILE;
          }
          else if (hashCode == SETTINGS_HASH)
          {
            return Feature::SETTINGS;
          }
          else if (hashCode == ALL_HASH)
          {
            return Feature::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Feature>(hashCode);
          }

          return Feature::NOT_SET;
        }

        Aws::String GetNameForFeature(Feature enumValue)
        {
          switch(enumValue)
          {
          case Feature::NOT_SET:
            return {};
          case Feature::BLUETOOTH:
            return "BLUETOOTH";
          case Feature::VOLUME:
            return "VOLUME";
          case Feature::NOTIFICATIONS:
            return "NOTIFICATIONS";
          case Feature::LISTS:
            return "LISTS";
          case Feature::SKILLS:
            return "SKILLS";
          case Feature::NETWORK_PROFILE:
            return "NETWORK_PROFILE";
          case Feature::SETTINGS:
            return "SETTINGS";
          case Feature::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
