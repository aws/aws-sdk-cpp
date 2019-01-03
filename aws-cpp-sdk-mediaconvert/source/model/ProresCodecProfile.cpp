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

#include <aws/mediaconvert/model/ProresCodecProfile.h>
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
      namespace ProresCodecProfileMapper
      {

        static const int APPLE_PRORES_422_HASH = HashingUtils::HashString("APPLE_PRORES_422");
        static const int APPLE_PRORES_422_HQ_HASH = HashingUtils::HashString("APPLE_PRORES_422_HQ");
        static const int APPLE_PRORES_422_LT_HASH = HashingUtils::HashString("APPLE_PRORES_422_LT");
        static const int APPLE_PRORES_422_PROXY_HASH = HashingUtils::HashString("APPLE_PRORES_422_PROXY");


        ProresCodecProfile GetProresCodecProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLE_PRORES_422_HASH)
          {
            return ProresCodecProfile::APPLE_PRORES_422;
          }
          else if (hashCode == APPLE_PRORES_422_HQ_HASH)
          {
            return ProresCodecProfile::APPLE_PRORES_422_HQ;
          }
          else if (hashCode == APPLE_PRORES_422_LT_HASH)
          {
            return ProresCodecProfile::APPLE_PRORES_422_LT;
          }
          else if (hashCode == APPLE_PRORES_422_PROXY_HASH)
          {
            return ProresCodecProfile::APPLE_PRORES_422_PROXY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProresCodecProfile>(hashCode);
          }

          return ProresCodecProfile::NOT_SET;
        }

        Aws::String GetNameForProresCodecProfile(ProresCodecProfile enumValue)
        {
          switch(enumValue)
          {
          case ProresCodecProfile::APPLE_PRORES_422:
            return "APPLE_PRORES_422";
          case ProresCodecProfile::APPLE_PRORES_422_HQ:
            return "APPLE_PRORES_422_HQ";
          case ProresCodecProfile::APPLE_PRORES_422_LT:
            return "APPLE_PRORES_422_LT";
          case ProresCodecProfile::APPLE_PRORES_422_PROXY:
            return "APPLE_PRORES_422_PROXY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProresCodecProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
