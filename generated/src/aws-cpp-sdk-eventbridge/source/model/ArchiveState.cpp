/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ArchiveState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EventBridge
  {
    namespace Model
    {
      namespace ArchiveStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        ArchiveState GetArchiveStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ArchiveState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ArchiveState::DISABLED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ArchiveState::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ArchiveState::UPDATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ArchiveState::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ArchiveState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArchiveState>(hashCode);
          }

          return ArchiveState::NOT_SET;
        }

        Aws::String GetNameForArchiveState(ArchiveState enumValue)
        {
          switch(enumValue)
          {
          case ArchiveState::ENABLED:
            return "ENABLED";
          case ArchiveState::DISABLED:
            return "DISABLED";
          case ArchiveState::CREATING:
            return "CREATING";
          case ArchiveState::UPDATING:
            return "UPDATING";
          case ArchiveState::CREATE_FAILED:
            return "CREATE_FAILED";
          case ArchiveState::UPDATE_FAILED:
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

      } // namespace ArchiveStateMapper
    } // namespace Model
  } // namespace EventBridge
} // namespace Aws
