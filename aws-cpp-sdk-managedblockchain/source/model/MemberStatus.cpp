/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/MemberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace MemberStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        MemberStatus GetMemberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return MemberStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return MemberStatus::AVAILABLE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return MemberStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return MemberStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MemberStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return MemberStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberStatus>(hashCode);
          }

          return MemberStatus::NOT_SET;
        }

        Aws::String GetNameForMemberStatus(MemberStatus enumValue)
        {
          switch(enumValue)
          {
          case MemberStatus::CREATING:
            return "CREATING";
          case MemberStatus::AVAILABLE:
            return "AVAILABLE";
          case MemberStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case MemberStatus::UPDATING:
            return "UPDATING";
          case MemberStatus::DELETING:
            return "DELETING";
          case MemberStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
