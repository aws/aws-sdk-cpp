/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace MaintenanceWindowTaskTypeMapper
      {

        static const int RUN_COMMAND_HASH = HashingUtils::HashString("RUN_COMMAND");
        static const int AUTOMATION_HASH = HashingUtils::HashString("AUTOMATION");
        static const int STEP_FUNCTIONS_HASH = HashingUtils::HashString("STEP_FUNCTIONS");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");


        MaintenanceWindowTaskType GetMaintenanceWindowTaskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUN_COMMAND_HASH)
          {
            return MaintenanceWindowTaskType::RUN_COMMAND;
          }
          else if (hashCode == AUTOMATION_HASH)
          {
            return MaintenanceWindowTaskType::AUTOMATION;
          }
          else if (hashCode == STEP_FUNCTIONS_HASH)
          {
            return MaintenanceWindowTaskType::STEP_FUNCTIONS;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return MaintenanceWindowTaskType::LAMBDA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceWindowTaskType>(hashCode);
          }

          return MaintenanceWindowTaskType::NOT_SET;
        }

        Aws::String GetNameForMaintenanceWindowTaskType(MaintenanceWindowTaskType enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceWindowTaskType::RUN_COMMAND:
            return "RUN_COMMAND";
          case MaintenanceWindowTaskType::AUTOMATION:
            return "AUTOMATION";
          case MaintenanceWindowTaskType::STEP_FUNCTIONS:
            return "STEP_FUNCTIONS";
          case MaintenanceWindowTaskType::LAMBDA:
            return "LAMBDA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceWindowTaskTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
