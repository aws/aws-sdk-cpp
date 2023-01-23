﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/BackfillMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace BackfillModeMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        BackfillMode GetBackfillModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return BackfillMode::AUTOMATIC;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return BackfillMode::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackfillMode>(hashCode);
          }

          return BackfillMode::NOT_SET;
        }

        Aws::String GetNameForBackfillMode(BackfillMode enumValue)
        {
          switch(enumValue)
          {
          case BackfillMode::AUTOMATIC:
            return "AUTOMATIC";
          case BackfillMode::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackfillModeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
