/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BurnInTeletextGridControl.h>
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
      namespace BurnInTeletextGridControlMapper
      {

        static const int FIXED_HASH = HashingUtils::HashString("FIXED");
        static const int SCALED_HASH = HashingUtils::HashString("SCALED");


        BurnInTeletextGridControl GetBurnInTeletextGridControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_HASH)
          {
            return BurnInTeletextGridControl::FIXED;
          }
          else if (hashCode == SCALED_HASH)
          {
            return BurnInTeletextGridControl::SCALED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInTeletextGridControl>(hashCode);
          }

          return BurnInTeletextGridControl::NOT_SET;
        }

        Aws::String GetNameForBurnInTeletextGridControl(BurnInTeletextGridControl enumValue)
        {
          switch(enumValue)
          {
          case BurnInTeletextGridControl::FIXED:
            return "FIXED";
          case BurnInTeletextGridControl::SCALED:
            return "SCALED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurnInTeletextGridControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
