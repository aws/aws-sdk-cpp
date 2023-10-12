/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AddonStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace AddonStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DEGRADED_HASH = ConstExprHashingUtils::HashString("DEGRADED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        AddonStatus GetAddonStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AddonStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AddonStatus::ACTIVE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AddonStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AddonStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AddonStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return AddonStatus::DELETE_FAILED;
          }
          else if (hashCode == DEGRADED_HASH)
          {
            return AddonStatus::DEGRADED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return AddonStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AddonStatus>(hashCode);
          }

          return AddonStatus::NOT_SET;
        }

        Aws::String GetNameForAddonStatus(AddonStatus enumValue)
        {
          switch(enumValue)
          {
          case AddonStatus::NOT_SET:
            return {};
          case AddonStatus::CREATING:
            return "CREATING";
          case AddonStatus::ACTIVE:
            return "ACTIVE";
          case AddonStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case AddonStatus::UPDATING:
            return "UPDATING";
          case AddonStatus::DELETING:
            return "DELETING";
          case AddonStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case AddonStatus::DEGRADED:
            return "DEGRADED";
          case AddonStatus::UPDATE_FAILED:
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

      } // namespace AddonStatusMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
