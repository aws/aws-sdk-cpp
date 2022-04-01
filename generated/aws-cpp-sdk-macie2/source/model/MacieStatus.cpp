/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/MacieStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace MacieStatusMapper
      {

        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        MacieStatus GetMacieStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PAUSED_HASH)
          {
            return MacieStatus::PAUSED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return MacieStatus::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MacieStatus>(hashCode);
          }

          return MacieStatus::NOT_SET;
        }

        Aws::String GetNameForMacieStatus(MacieStatus enumValue)
        {
          switch(enumValue)
          {
          case MacieStatus::PAUSED:
            return "PAUSED";
          case MacieStatus::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MacieStatusMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
