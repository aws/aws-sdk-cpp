/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LastLaunchType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace LastLaunchTypeMapper
      {

        static constexpr uint32_t RECOVERY_HASH = ConstExprHashingUtils::HashString("RECOVERY");
        static constexpr uint32_t DRILL_HASH = ConstExprHashingUtils::HashString("DRILL");


        LastLaunchType GetLastLaunchTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECOVERY_HASH)
          {
            return LastLaunchType::RECOVERY;
          }
          else if (hashCode == DRILL_HASH)
          {
            return LastLaunchType::DRILL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastLaunchType>(hashCode);
          }

          return LastLaunchType::NOT_SET;
        }

        Aws::String GetNameForLastLaunchType(LastLaunchType enumValue)
        {
          switch(enumValue)
          {
          case LastLaunchType::NOT_SET:
            return {};
          case LastLaunchType::RECOVERY:
            return "RECOVERY";
          case LastLaunchType::DRILL:
            return "DRILL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastLaunchTypeMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
