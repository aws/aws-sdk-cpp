/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbSubDestinationTeletextGridControl.h>
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
      namespace DvbSubDestinationTeletextGridControlMapper
      {

        static const int FIXED_HASH = HashingUtils::HashString("FIXED");
        static const int SCALED_HASH = HashingUtils::HashString("SCALED");


        DvbSubDestinationTeletextGridControl GetDvbSubDestinationTeletextGridControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_HASH)
          {
            return DvbSubDestinationTeletextGridControl::FIXED;
          }
          else if (hashCode == SCALED_HASH)
          {
            return DvbSubDestinationTeletextGridControl::SCALED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubDestinationTeletextGridControl>(hashCode);
          }

          return DvbSubDestinationTeletextGridControl::NOT_SET;
        }

        Aws::String GetNameForDvbSubDestinationTeletextGridControl(DvbSubDestinationTeletextGridControl enumValue)
        {
          switch(enumValue)
          {
          case DvbSubDestinationTeletextGridControl::FIXED:
            return "FIXED";
          case DvbSubDestinationTeletextGridControl::SCALED:
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

      } // namespace DvbSubDestinationTeletextGridControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
