/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledBaselineDriftStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlTower
  {
    namespace Model
    {
      namespace EnabledBaselineDriftStatusMapper
      {

        static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");
        static const int DRIFTED_HASH = HashingUtils::HashString("DRIFTED");


        EnabledBaselineDriftStatus GetEnabledBaselineDriftStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_SYNC_HASH)
          {
            return EnabledBaselineDriftStatus::IN_SYNC;
          }
          else if (hashCode == DRIFTED_HASH)
          {
            return EnabledBaselineDriftStatus::DRIFTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnabledBaselineDriftStatus>(hashCode);
          }

          return EnabledBaselineDriftStatus::NOT_SET;
        }

        Aws::String GetNameForEnabledBaselineDriftStatus(EnabledBaselineDriftStatus enumValue)
        {
          switch(enumValue)
          {
          case EnabledBaselineDriftStatus::NOT_SET:
            return {};
          case EnabledBaselineDriftStatus::IN_SYNC:
            return "IN_SYNC";
          case EnabledBaselineDriftStatus::DRIFTED:
            return "DRIFTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnabledBaselineDriftStatusMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
