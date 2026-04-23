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

#include <aws/medialive/model/AacProfile.h>
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
      namespace AacProfileMapper
      {

        static const int HEV1_HASH = HashingUtils::HashString("HEV1");
        static const int HEV2_HASH = HashingUtils::HashString("HEV2");
        static const int LC_HASH = HashingUtils::HashString("LC");


        AacProfile GetAacProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEV1_HASH)
          {
            return AacProfile::HEV1;
          }
          else if (hashCode == HEV2_HASH)
          {
            return AacProfile::HEV2;
          }
          else if (hashCode == LC_HASH)
          {
            return AacProfile::LC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacProfile>(hashCode);
          }

          return AacProfile::NOT_SET;
        }

        Aws::String GetNameForAacProfile(AacProfile enumValue)
        {
          switch(enumValue)
          {
          case AacProfile::HEV1:
            return "HEV1";
          case AacProfile::HEV2:
            return "HEV2";
          case AacProfile::LC:
            return "LC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacProfileMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
