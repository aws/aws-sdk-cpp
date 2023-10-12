/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/CapacityProviderUpdateStatus.h>
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
      namespace CapacityProviderUpdateStatusMapper
      {

        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_COMPLETE_HASH = ConstExprHashingUtils::HashString("DELETE_COMPLETE");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t UPDATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("UPDATE_IN_PROGRESS");
        static constexpr uint32_t UPDATE_COMPLETE_HASH = ConstExprHashingUtils::HashString("UPDATE_COMPLETE");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        CapacityProviderUpdateStatus GetCapacityProviderUpdateStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return CapacityProviderUpdateStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return CapacityProviderUpdateStatus::DELETE_COMPLETE;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return CapacityProviderUpdateStatus::DELETE_FAILED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return CapacityProviderUpdateStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return CapacityProviderUpdateStatus::UPDATE_COMPLETE;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return CapacityProviderUpdateStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityProviderUpdateStatus>(hashCode);
          }

          return CapacityProviderUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForCapacityProviderUpdateStatus(CapacityProviderUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case CapacityProviderUpdateStatus::NOT_SET:
            return {};
          case CapacityProviderUpdateStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case CapacityProviderUpdateStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case CapacityProviderUpdateStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case CapacityProviderUpdateStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case CapacityProviderUpdateStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case CapacityProviderUpdateStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityProviderUpdateStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
