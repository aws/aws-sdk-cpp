/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LockState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace LockStateMapper
      {

        static const int compliance_HASH = HashingUtils::HashString("compliance");
        static const int governance_HASH = HashingUtils::HashString("governance");
        static const int compliance_cooloff_HASH = HashingUtils::HashString("compliance-cooloff");
        static const int expired_HASH = HashingUtils::HashString("expired");


        LockState GetLockStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == compliance_HASH)
          {
            return LockState::compliance;
          }
          else if (hashCode == governance_HASH)
          {
            return LockState::governance;
          }
          else if (hashCode == compliance_cooloff_HASH)
          {
            return LockState::compliance_cooloff;
          }
          else if (hashCode == expired_HASH)
          {
            return LockState::expired;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LockState>(hashCode);
          }

          return LockState::NOT_SET;
        }

        Aws::String GetNameForLockState(LockState enumValue)
        {
          switch(enumValue)
          {
          case LockState::NOT_SET:
            return {};
          case LockState::compliance:
            return "compliance";
          case LockState::governance:
            return "governance";
          case LockState::compliance_cooloff:
            return "compliance-cooloff";
          case LockState::expired:
            return "expired";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LockStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
