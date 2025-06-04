/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/HostState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EVS
  {
    namespace Model
    {
      namespace HostStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        HostState GetHostStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return HostState::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return HostState::CREATED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return HostState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return HostState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return HostState::DELETED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return HostState::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return HostState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostState>(hashCode);
          }

          return HostState::NOT_SET;
        }

        Aws::String GetNameForHostState(HostState enumValue)
        {
          switch(enumValue)
          {
          case HostState::NOT_SET:
            return {};
          case HostState::CREATING:
            return "CREATING";
          case HostState::CREATED:
            return "CREATED";
          case HostState::UPDATING:
            return "UPDATING";
          case HostState::DELETING:
            return "DELETING";
          case HostState::DELETED:
            return "DELETED";
          case HostState::CREATE_FAILED:
            return "CREATE_FAILED";
          case HostState::UPDATE_FAILED:
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

      } // namespace HostStateMapper
    } // namespace Model
  } // namespace EVS
} // namespace Aws
