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

        static const int BLUETOOTH_HASH = HashingUtils::HashString("BLUETOOTH");
        static const int VOLUME_HASH = HashingUtils::HashString("VOLUME");
        static const int NOTIFICATIONS_HASH = HashingUtils::HashString("NOTIFICATIONS");
        static const int LISTS_HASH = HashingUtils::HashString("LISTS");
        static const int SKILLS_HASH = HashingUtils::HashString("SKILLS");
        static const int NETWORK_PROFILE_HASH = HashingUtils::HashString("NETWORK_PROFILE");
        static const int SETTINGS_HASH = HashingUtils::HashString("SETTINGS");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        Feature GetFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
