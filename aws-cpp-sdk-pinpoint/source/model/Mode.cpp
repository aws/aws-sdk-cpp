/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Mode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace ModeMapper
      {

        static const int DELIVERY_HASH = HashingUtils::HashString("DELIVERY");
        static const int FILTER_HASH = HashingUtils::HashString("FILTER");


        Mode GetModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELIVERY_HASH)
          {
            return Mode::DELIVERY;
          }
          else if (hashCode == FILTER_HASH)
          {
            return Mode::FILTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mode>(hashCode);
          }

          return Mode::NOT_SET;
        }

        Aws::String GetNameForMode(Mode enumValue)
        {
          switch(enumValue)
          {
          case Mode::DELIVERY:
            return "DELIVERY";
          case Mode::FILTER:
            return "FILTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
