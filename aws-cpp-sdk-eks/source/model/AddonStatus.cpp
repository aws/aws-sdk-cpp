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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        AddonStatus GetAddonStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
