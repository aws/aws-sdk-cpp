/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxClusterStatus.h>
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
      namespace KxClusterStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        KxClusterStatus GetKxClusterStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return KxClusterStatus::PENDING;
          }
          else if (hashCode == CREATING_HASH)
          {
            return KxClusterStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return KxClusterStatus::CREATE_FAILED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return KxClusterStatus::RUNNING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return KxClusterStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return KxClusterStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return KxClusterStatus::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return KxClusterStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxClusterStatus>(hashCode);
          }

          return KxClusterStatus::NOT_SET;
        }

        Aws::String GetNameForKxClusterStatus(KxClusterStatus enumValue)
        {
          switch(enumValue)
          {
          case KxClusterStatus::NOT_SET:
            return {};
          case KxClusterStatus::PENDING:
            return "PENDING";
          case KxClusterStatus::CREATING:
            return "CREATING";
          case KxClusterStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case KxClusterStatus::RUNNING:
            return "RUNNING";
          case KxClusterStatus::UPDATING:
            return "UPDATING";
          case KxClusterStatus::DELETING:
            return "DELETING";
          case KxClusterStatus::DELETED:
            return "DELETED";
          case KxClusterStatus::DELETE_FAILED:
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

      } // namespace KxClusterStatusMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
