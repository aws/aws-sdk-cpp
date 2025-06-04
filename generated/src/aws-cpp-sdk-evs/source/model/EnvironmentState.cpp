/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/EnvironmentState.h>
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
      namespace EnvironmentStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");


        EnvironmentState GetEnvironmentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EnvironmentState::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return EnvironmentState::CREATED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EnvironmentState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EnvironmentState::DELETED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return EnvironmentState::CREATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentState>(hashCode);
          }

          return EnvironmentState::NOT_SET;
        }

        Aws::String GetNameForEnvironmentState(EnvironmentState enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentState::NOT_SET:
            return {};
          case EnvironmentState::CREATING:
            return "CREATING";
          case EnvironmentState::CREATED:
            return "CREATED";
          case EnvironmentState::DELETING:
            return "DELETING";
          case EnvironmentState::DELETED:
            return "DELETED";
          case EnvironmentState::CREATE_FAILED:
            return "CREATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentStateMapper
    } // namespace Model
  } // namespace EVS
} // namespace Aws
