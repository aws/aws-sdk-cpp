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

#include <aws/mediaconvert/model/H265CodecProfile.h>
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
      namespace H265CodecProfileMapper
      {

        static const int MAIN_MAIN_HASH = HashingUtils::HashString("MAIN_MAIN");
        static const int MAIN_HIGH_HASH = HashingUtils::HashString("MAIN_HIGH");
        static const int MAIN10_MAIN_HASH = HashingUtils::HashString("MAIN10_MAIN");
        static const int MAIN10_HIGH_HASH = HashingUtils::HashString("MAIN10_HIGH");
        static const int MAIN_422_8BIT_MAIN_HASH = HashingUtils::HashString("MAIN_422_8BIT_MAIN");
        static const int MAIN_422_8BIT_HIGH_HASH = HashingUtils::HashString("MAIN_422_8BIT_HIGH");
        static const int MAIN_422_10BIT_MAIN_HASH = HashingUtils::HashString("MAIN_422_10BIT_MAIN");
        static const int MAIN_422_10BIT_HIGH_HASH = HashingUtils::HashString("MAIN_422_10BIT_HIGH");


        H265CodecProfile GetH265CodecProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAIN_MAIN_HASH)
          {
            return H265CodecProfile::MAIN_MAIN;
          }
          else if (hashCode == MAIN_HIGH_HASH)
          {
            return H265CodecProfile::MAIN_HIGH;
          }
          else if (hashCode == MAIN10_MAIN_HASH)
          {
            return H265CodecProfile::MAIN10_MAIN;
          }
          else if (hashCode == MAIN10_HIGH_HASH)
          {
            return H265CodecProfile::MAIN10_HIGH;
          }
          else if (hashCode == MAIN_422_8BIT_MAIN_HASH)
          {
            return H265CodecProfile::MAIN_422_8BIT_MAIN;
          }
          else if (hashCode == MAIN_422_8BIT_HIGH_HASH)
          {
            return H265CodecProfile::MAIN_422_8BIT_HIGH;
          }
          else if (hashCode == MAIN_422_10BIT_MAIN_HASH)
          {
            return H265CodecProfile::MAIN_422_10BIT_MAIN;
          }
          else if (hashCode == MAIN_422_10BIT_HIGH_HASH)
          {
            return H265CodecProfile::MAIN_422_10BIT_HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265CodecProfile>(hashCode);
          }

          return H265CodecProfile::NOT_SET;
        }

        Aws::String GetNameForH265CodecProfile(H265CodecProfile enumValue)
        {
          switch(enumValue)
          {
          case H265CodecProfile::MAIN_MAIN:
            return "MAIN_MAIN";
          case H265CodecProfile::MAIN_HIGH:
            return "MAIN_HIGH";
          case H265CodecProfile::MAIN10_MAIN:
            return "MAIN10_MAIN";
          case H265CodecProfile::MAIN10_HIGH:
            return "MAIN10_HIGH";
          case H265CodecProfile::MAIN_422_8BIT_MAIN:
            return "MAIN_422_8BIT_MAIN";
          case H265CodecProfile::MAIN_422_8BIT_HIGH:
            return "MAIN_422_8BIT_HIGH";
          case H265CodecProfile::MAIN_422_10BIT_MAIN:
            return "MAIN_422_10BIT_MAIN";
          case H265CodecProfile::MAIN_422_10BIT_HIGH:
            return "MAIN_422_10BIT_HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265CodecProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
