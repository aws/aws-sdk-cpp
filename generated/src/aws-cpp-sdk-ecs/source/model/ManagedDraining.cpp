/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ManagedDraining.h>
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
      namespace ManagedDrainingMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ManagedDraining GetManagedDrainingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ManagedDraining::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ManagedDraining::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedDraining>(hashCode);
          }

          return ManagedDraining::NOT_SET;
        }

        Aws::String GetNameForManagedDraining(ManagedDraining enumValue)
        {
          switch(enumValue)
          {
          case ManagedDraining::NOT_SET:
            return {};
          case ManagedDraining::ENABLED:
            return "ENABLED";
          case ManagedDraining::DISABLED:
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

      } // namespace ManagedDrainingMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
