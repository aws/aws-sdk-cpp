/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FreeTrialStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace FreeTrialStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        FreeTrialStatus GetFreeTrialStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return FreeTrialStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return FreeTrialStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FreeTrialStatus>(hashCode);
          }

          return FreeTrialStatus::NOT_SET;
        }

        Aws::String GetNameForFreeTrialStatus(FreeTrialStatus enumValue)
        {
          switch(enumValue)
          {
          case FreeTrialStatus::NOT_SET:
            return {};
          case FreeTrialStatus::ACTIVE:
            return "ACTIVE";
          case FreeTrialStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FreeTrialStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
