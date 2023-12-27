/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxScalingGroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace KxScalingGroupStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        KxScalingGroupStatus GetKxScalingGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return KxScalingGroupStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return KxScalingGroupStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return KxScalingGroupStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return KxScalingGroupStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return KxScalingGroupStatus::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return KxScalingGroupStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxScalingGroupStatus>(hashCode);
          }

          return KxScalingGroupStatus::NOT_SET;
        }

        Aws::String GetNameForKxScalingGroupStatus(KxScalingGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case KxScalingGroupStatus::NOT_SET:
            return {};
          case KxScalingGroupStatus::CREATING:
            return "CREATING";
          case KxScalingGroupStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case KxScalingGroupStatus::ACTIVE:
            return "ACTIVE";
          case KxScalingGroupStatus::DELETING:
            return "DELETING";
          case KxScalingGroupStatus::DELETED:
            return "DELETED";
          case KxScalingGroupStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxScalingGroupStatusMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
