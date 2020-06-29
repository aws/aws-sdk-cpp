/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265RateControlMode.h>
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
      namespace H265RateControlModeMapper
      {

        static const int VBR_HASH = HashingUtils::HashString("VBR");
        static const int CBR_HASH = HashingUtils::HashString("CBR");
        static const int QVBR_HASH = HashingUtils::HashString("QVBR");


        H265RateControlMode GetH265RateControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VBR_HASH)
          {
            return H265RateControlMode::VBR;
          }
          else if (hashCode == CBR_HASH)
          {
            return H265RateControlMode::CBR;
          }
          else if (hashCode == QVBR_HASH)
          {
            return H265RateControlMode::QVBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265RateControlMode>(hashCode);
          }

          return H265RateControlMode::NOT_SET;
        }

        Aws::String GetNameForH265RateControlMode(H265RateControlMode enumValue)
        {
          switch(enumValue)
          {
          case H265RateControlMode::VBR:
            return "VBR";
          case H265RateControlMode::CBR:
            return "CBR";
          case H265RateControlMode::QVBR:
            return "QVBR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265RateControlModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
