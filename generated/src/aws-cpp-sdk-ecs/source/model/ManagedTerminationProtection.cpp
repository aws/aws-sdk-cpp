/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ManagedTerminationProtection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ManagedTerminationProtectionMapper
      {

        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        ManagedTerminationProtection GetManagedTerminationProtectionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ManagedTerminationProtection::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ManagedTerminationProtection::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedTerminationProtection>(hashCode);
          }

          return ManagedTerminationProtection::NOT_SET;
        }

        Aws::String GetNameForManagedTerminationProtection(ManagedTerminationProtection enumValue)
        {
          switch(enumValue)
          {
          case ManagedTerminationProtection::NOT_SET:
            return {};
          case ManagedTerminationProtection::ENABLED:
            return "ENABLED";
          case ManagedTerminationProtection::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedTerminationProtectionMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
