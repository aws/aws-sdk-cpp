/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ConnectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace ConnectionStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ConnectionStatus GetConnectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ConnectionStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ConnectionStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConnectionStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ConnectionStatus::DELETE_FAILED;
          }
          else if (hashCode == READY_HASH)
          {
            return ConnectionStatus::READY;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ConnectionStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ConnectionStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ConnectionStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionStatus>(hashCode);
          }

          return ConnectionStatus::NOT_SET;
        }

        Aws::String GetNameForConnectionStatus(ConnectionStatus enumValue)
        {
          switch(enumValue)
          {
          case ConnectionStatus::NOT_SET:
            return {};
          case ConnectionStatus::CREATING:
            return "CREATING";
          case ConnectionStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ConnectionStatus::DELETING:
            return "DELETING";
          case ConnectionStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ConnectionStatus::READY:
            return "READY";
          case ConnectionStatus::UPDATING:
            return "UPDATING";
          case ConnectionStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ConnectionStatus::DELETED:
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

      } // namespace ConnectionStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
