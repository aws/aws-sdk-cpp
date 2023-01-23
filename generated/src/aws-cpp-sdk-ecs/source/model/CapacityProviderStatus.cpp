/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/CapacityProviderStatus.h>
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
      namespace CapacityProviderStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        CapacityProviderStatus GetCapacityProviderStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return CapacityProviderStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return CapacityProviderStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityProviderStatus>(hashCode);
          }

          return CapacityProviderStatus::NOT_SET;
        }

        Aws::String GetNameForCapacityProviderStatus(CapacityProviderStatus enumValue)
        {
          switch(enumValue)
          {
          case CapacityProviderStatus::ACTIVE:
            return "ACTIVE";
          case CapacityProviderStatus::INACTIVE:
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

      } // namespace CapacityProviderStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
