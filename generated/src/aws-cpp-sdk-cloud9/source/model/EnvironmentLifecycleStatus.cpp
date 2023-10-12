/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/EnvironmentLifecycleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Cloud9
  {
    namespace Model
    {
      namespace EnvironmentLifecycleStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        EnvironmentLifecycleStatus GetEnvironmentLifecycleStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EnvironmentLifecycleStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return EnvironmentLifecycleStatus::CREATED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return EnvironmentLifecycleStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EnvironmentLifecycleStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return EnvironmentLifecycleStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentLifecycleStatus>(hashCode);
          }

          return EnvironmentLifecycleStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentLifecycleStatus(EnvironmentLifecycleStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentLifecycleStatus::NOT_SET:
            return {};
          case EnvironmentLifecycleStatus::CREATING:
            return "CREATING";
          case EnvironmentLifecycleStatus::CREATED:
            return "CREATED";
          case EnvironmentLifecycleStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case EnvironmentLifecycleStatus::DELETING:
            return "DELETING";
          case EnvironmentLifecycleStatus::DELETE_FAILED:
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

      } // namespace EnvironmentLifecycleStatusMapper
    } // namespace Model
  } // namespace Cloud9
} // namespace Aws
