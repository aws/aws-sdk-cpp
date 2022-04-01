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

        static const int READY_FOR_DEPLOYMENT_HASH = HashingUtils::HashString("READY_FOR_DEPLOYMENT");
        static const int DEPLOYING_HASH = HashingUtils::HashString("DEPLOYING");
        static const int ROLLING_BACK_HASH = HashingUtils::HashString("ROLLING_BACK");
        static const int ROLLED_BACK_HASH = HashingUtils::HashString("ROLLED_BACK");


        EnvironmentState GetEnvironmentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
