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

#include <aws/mediaconvert/model/Mpeg2RateControlMode.h>
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
      namespace Mpeg2RateControlModeMapper
      {

        static const int VBR_HASH = HashingUtils::HashString("VBR");
        static const int CBR_HASH = HashingUtils::HashString("CBR");


        Mpeg2RateControlMode GetMpeg2RateControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VBR_HASH)
          {
            return Mpeg2RateControlMode::VBR;
          }
          else if (hashCode == CBR_HASH)
          {
            return Mpeg2RateControlMode::CBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2RateControlMode>(hashCode);
          }

          return Mpeg2RateControlMode::NOT_SET;
        }

        Aws::String GetNameForMpeg2RateControlMode(Mpeg2RateControlMode enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2RateControlMode::VBR:
            return "VBR";
          case Mpeg2RateControlMode::CBR:
            return "CBR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2RateControlModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
