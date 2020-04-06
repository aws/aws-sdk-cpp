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

#include <aws/chime/model/GeoMatchLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace GeoMatchLevelMapper
      {

        static const int Country_HASH = HashingUtils::HashString("Country");
        static const int AreaCode_HASH = HashingUtils::HashString("AreaCode");


        GeoMatchLevel GetGeoMatchLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Country_HASH)
          {
            return GeoMatchLevel::Country;
          }
          else if (hashCode == AreaCode_HASH)
          {
            return GeoMatchLevel::AreaCode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeoMatchLevel>(hashCode);
          }

          return GeoMatchLevel::NOT_SET;
        }

        Aws::String GetNameForGeoMatchLevel(GeoMatchLevel enumValue)
        {
          switch(enumValue)
          {
          case GeoMatchLevel::Country:
            return "Country";
          case GeoMatchLevel::AreaCode:
            return "AreaCode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeoMatchLevelMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
