/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mp3RateControlMode.h>
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
      namespace Mp3RateControlModeMapper
      {

        static const int CBR_HASH = HashingUtils::HashString("CBR");
        static const int VBR_HASH = HashingUtils::HashString("VBR");


        Mp3RateControlMode GetMp3RateControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CBR_HASH)
          {
            return Mp3RateControlMode::CBR;
          }
          else if (hashCode == VBR_HASH)
          {
            return Mp3RateControlMode::VBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mp3RateControlMode>(hashCode);
          }

          return Mp3RateControlMode::NOT_SET;
        }

        Aws::String GetNameForMp3RateControlMode(Mp3RateControlMode enumValue)
        {
          switch(enumValue)
          {
          case Mp3RateControlMode::CBR:
            return "CBR";
          case Mp3RateControlMode::VBR:
            return "VBR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mp3RateControlModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
