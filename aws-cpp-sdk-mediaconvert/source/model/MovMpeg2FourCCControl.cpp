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

#include <aws/mediaconvert/model/MovMpeg2FourCCControl.h>
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
      namespace MovMpeg2FourCCControlMapper
      {

        static const int XDCAM_HASH = HashingUtils::HashString("XDCAM");
        static const int MPEG_HASH = HashingUtils::HashString("MPEG");


        MovMpeg2FourCCControl GetMovMpeg2FourCCControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == XDCAM_HASH)
          {
            return MovMpeg2FourCCControl::XDCAM;
          }
          else if (hashCode == MPEG_HASH)
          {
            return MovMpeg2FourCCControl::MPEG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MovMpeg2FourCCControl>(hashCode);
          }

          return MovMpeg2FourCCControl::NOT_SET;
        }

        Aws::String GetNameForMovMpeg2FourCCControl(MovMpeg2FourCCControl enumValue)
        {
          switch(enumValue)
          {
          case MovMpeg2FourCCControl::XDCAM:
            return "XDCAM";
          case MovMpeg2FourCCControl::MPEG:
            return "MPEG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MovMpeg2FourCCControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
