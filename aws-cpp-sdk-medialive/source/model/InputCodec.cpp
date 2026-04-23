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

#include <aws/medialive/model/InputCodec.h>
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
      namespace InputCodecMapper
      {

        static const int MPEG2_HASH = HashingUtils::HashString("MPEG2");
        static const int AVC_HASH = HashingUtils::HashString("AVC");
        static const int HEVC_HASH = HashingUtils::HashString("HEVC");


        InputCodec GetInputCodecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MPEG2_HASH)
          {
            return InputCodec::MPEG2;
          }
          else if (hashCode == AVC_HASH)
          {
            return InputCodec::AVC;
          }
          else if (hashCode == HEVC_HASH)
          {
            return InputCodec::HEVC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputCodec>(hashCode);
          }

          return InputCodec::NOT_SET;
        }

        Aws::String GetNameForInputCodec(InputCodec enumValue)
        {
          switch(enumValue)
          {
          case InputCodec::MPEG2:
            return "MPEG2";
          case InputCodec::AVC:
            return "AVC";
          case InputCodec::HEVC:
            return "HEVC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputCodecMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
