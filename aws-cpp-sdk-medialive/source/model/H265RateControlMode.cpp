/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265RateControlMode.h>
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
      namespace H265RateControlModeMapper
      {

        static const int CBR_HASH = HashingUtils::HashString("CBR");
        static const int MULTIPLEX_HASH = HashingUtils::HashString("MULTIPLEX");
        static const int QVBR_HASH = HashingUtils::HashString("QVBR");


        H265RateControlMode GetH265RateControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CBR_HASH)
          {
            return H265RateControlMode::CBR;
          }
          else if (hashCode == MULTIPLEX_HASH)
          {
            return H265RateControlMode::MULTIPLEX;
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
          case H265RateControlMode::CBR:
            return "CBR";
          case H265RateControlMode::MULTIPLEX:
            return "MULTIPLEX";
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
  } // namespace MediaLive
} // namespace Aws
