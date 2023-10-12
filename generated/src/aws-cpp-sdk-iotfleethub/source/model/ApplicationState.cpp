/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleethub/model/ApplicationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetHub
  {
    namespace Model
    {
      namespace ApplicationStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        ApplicationState GetApplicationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ApplicationState::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApplicationState::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ApplicationState::ACTIVE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ApplicationState::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ApplicationState::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationState>(hashCode);
          }

          return ApplicationState::NOT_SET;
        }

        Aws::String GetNameForApplicationState(ApplicationState enumValue)
        {
          switch(enumValue)
          {
          case ApplicationState::NOT_SET:
            return {};
          case ApplicationState::CREATING:
            return "CREATING";
          case ApplicationState::DELETING:
            return "DELETING";
          case ApplicationState::ACTIVE:
            return "ACTIVE";
          case ApplicationState::CREATE_FAILED:
            return "CREATE_FAILED";
          case ApplicationState::DELETE_FAILED:
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

      } // namespace ApplicationStateMapper
    } // namespace Model
  } // namespace IoTFleetHub
} // namespace Aws
