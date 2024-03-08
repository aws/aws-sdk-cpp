/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LockMode.h>
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
      namespace LockModeMapper
      {

        static const int compliance_HASH = HashingUtils::HashString("compliance");
        static const int governance_HASH = HashingUtils::HashString("governance");


        LockMode GetLockModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == compliance_HASH)
          {
            return LockMode::compliance;
          }
          else if (hashCode == governance_HASH)
          {
            return LockMode::governance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LockMode>(hashCode);
          }

          return LockMode::NOT_SET;
        }

        Aws::String GetNameForLockMode(LockMode enumValue)
        {
          switch(enumValue)
          {
          case LockMode::NOT_SET:
            return {};
          case LockMode::compliance:
            return "compliance";
          case LockMode::governance:
            return "governance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LockModeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
