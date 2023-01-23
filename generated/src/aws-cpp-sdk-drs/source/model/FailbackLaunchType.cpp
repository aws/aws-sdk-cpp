/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/FailbackLaunchType.h>
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
      namespace FailbackLaunchTypeMapper
      {

        static const int RECOVERY_HASH = HashingUtils::HashString("RECOVERY");
        static const int DRILL_HASH = HashingUtils::HashString("DRILL");


        FailbackLaunchType GetFailbackLaunchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECOVERY_HASH)
          {
            return FailbackLaunchType::RECOVERY;
          }
          else if (hashCode == DRILL_HASH)
          {
            return FailbackLaunchType::DRILL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailbackLaunchType>(hashCode);
          }

          return FailbackLaunchType::NOT_SET;
        }

        Aws::String GetNameForFailbackLaunchType(FailbackLaunchType enumValue)
        {
          switch(enumValue)
          {
          case FailbackLaunchType::RECOVERY:
            return "RECOVERY";
          case FailbackLaunchType::DRILL:
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

      } // namespace FailbackLaunchTypeMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
