/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ProtectionPolicy.h>
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
      namespace ProtectionPolicyMapper
      {

        static const int NoProtection_HASH = HashingUtils::HashString("NoProtection");
        static const int FullProtection_HASH = HashingUtils::HashString("FullProtection");


        ProtectionPolicy GetProtectionPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NoProtection_HASH)
          {
            return ProtectionPolicy::NoProtection;
          }
          else if (hashCode == FullProtection_HASH)
          {
            return ProtectionPolicy::FullProtection;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectionPolicy>(hashCode);
          }

          return ProtectionPolicy::NOT_SET;
        }

        Aws::String GetNameForProtectionPolicy(ProtectionPolicy enumValue)
        {
          switch(enumValue)
          {
          case ProtectionPolicy::NoProtection:
            return "NoProtection";
          case ProtectionPolicy::FullProtection:
            return "FullProtection";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectionPolicyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
