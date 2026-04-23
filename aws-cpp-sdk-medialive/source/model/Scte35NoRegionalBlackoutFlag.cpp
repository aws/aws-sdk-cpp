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

#include <aws/medialive/model/Scte35NoRegionalBlackoutFlag.h>
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
      namespace Scte35NoRegionalBlackoutFlagMapper
      {

        static const int REGIONAL_BLACKOUT_HASH = HashingUtils::HashString("REGIONAL_BLACKOUT");
        static const int NO_REGIONAL_BLACKOUT_HASH = HashingUtils::HashString("NO_REGIONAL_BLACKOUT");


        Scte35NoRegionalBlackoutFlag GetScte35NoRegionalBlackoutFlagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGIONAL_BLACKOUT_HASH)
          {
            return Scte35NoRegionalBlackoutFlag::REGIONAL_BLACKOUT;
          }
          else if (hashCode == NO_REGIONAL_BLACKOUT_HASH)
          {
            return Scte35NoRegionalBlackoutFlag::NO_REGIONAL_BLACKOUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35NoRegionalBlackoutFlag>(hashCode);
          }

          return Scte35NoRegionalBlackoutFlag::NOT_SET;
        }

        Aws::String GetNameForScte35NoRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag enumValue)
        {
          switch(enumValue)
          {
          case Scte35NoRegionalBlackoutFlag::REGIONAL_BLACKOUT:
            return "REGIONAL_BLACKOUT";
          case Scte35NoRegionalBlackoutFlag::NO_REGIONAL_BLACKOUT:
            return "NO_REGIONAL_BLACKOUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte35NoRegionalBlackoutFlagMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
