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

#include <aws/medialive/model/H265Tier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace H265TierMapper
      {

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MAIN_HASH = HashingUtils::HashString("MAIN");


        H265Tier GetH265TierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return H265Tier::HIGH;
          }
          else if (hashCode == MAIN_HASH)
          {
            return H265Tier::MAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265Tier>(hashCode);
          }

          return H265Tier::NOT_SET;
        }

        Aws::String GetNameForH265Tier(H265Tier enumValue)
        {
          switch(enumValue)
          {
          case H265Tier::HIGH:
            return "HIGH";
          case H265Tier::MAIN:
            return "MAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265TierMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
