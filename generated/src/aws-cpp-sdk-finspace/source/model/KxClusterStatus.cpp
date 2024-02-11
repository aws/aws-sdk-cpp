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

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        KxClusterStatus GetKxClusterStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
