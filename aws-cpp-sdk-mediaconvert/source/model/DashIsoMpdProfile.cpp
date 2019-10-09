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

#include <aws/mediaconvert/model/DashIsoMpdProfile.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DashIsoMpdProfileMapper
      {

        static const int MAIN_PROFILE_HASH = HashingUtils::HashString("MAIN_PROFILE");
        static const int ON_DEMAND_PROFILE_HASH = HashingUtils::HashString("ON_DEMAND_PROFILE");


        DashIsoMpdProfile GetDashIsoMpdProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAIN_PROFILE_HASH)
          {
            return DashIsoMpdProfile::MAIN_PROFILE;
          }
          else if (hashCode == ON_DEMAND_PROFILE_HASH)
          {
            return DashIsoMpdProfile::ON_DEMAND_PROFILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoMpdProfile>(hashCode);
          }

          return DashIsoMpdProfile::NOT_SET;
        }

        Aws::String GetNameForDashIsoMpdProfile(DashIsoMpdProfile enumValue)
        {
          switch(enumValue)
          {
          case DashIsoMpdProfile::MAIN_PROFILE:
            return "MAIN_PROFILE";
          case DashIsoMpdProfile::ON_DEMAND_PROFILE:
            return "ON_DEMAND_PROFILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoMpdProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
