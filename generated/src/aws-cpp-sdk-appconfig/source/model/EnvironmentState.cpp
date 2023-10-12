/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/EnvironmentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace EnvironmentStateMapper
      {

        static constexpr uint32_t READY_FOR_DEPLOYMENT_HASH = ConstExprHashingUtils::HashString("READY_FOR_DEPLOYMENT");
        static constexpr uint32_t DEPLOYING_HASH = ConstExprHashingUtils::HashString("DEPLOYING");
        static constexpr uint32_t ROLLING_BACK_HASH = ConstExprHashingUtils::HashString("ROLLING_BACK");
        static constexpr uint32_t ROLLED_BACK_HASH = ConstExprHashingUtils::HashString("ROLLED_BACK");


        EnvironmentState GetEnvironmentStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_FOR_DEPLOYMENT_HASH)
          {
            return EnvironmentState::READY_FOR_DEPLOYMENT;
          }
          else if (hashCode == DEPLOYING_HASH)
          {
            return EnvironmentState::DEPLOYING;
          }
          else if (hashCode == ROLLING_BACK_HASH)
          {
            return EnvironmentState::ROLLING_BACK;
          }
          else if (hashCode == ROLLED_BACK_HASH)
          {
            return EnvironmentState::ROLLED_BACK;
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
          case EnvironmentState::READY_FOR_DEPLOYMENT:
            return "READY_FOR_DEPLOYMENT";
          case EnvironmentState::DEPLOYING:
            return "DEPLOYING";
          case EnvironmentState::ROLLING_BACK:
            return "ROLLING_BACK";
          case EnvironmentState::ROLLED_BACK:
            return "ROLLED_BACK";
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
  } // namespace AppConfig
} // namespace Aws
