/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ExecutionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppIntegrationsService
  {
    namespace Model
    {
      namespace ExecutionModeMapper
      {

        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");


        ExecutionMode GetExecutionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_DEMAND_HASH)
          {
            return ExecutionMode::ON_DEMAND;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return ExecutionMode::SCHEDULED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionMode>(hashCode);
          }

          return ExecutionMode::NOT_SET;
        }

        Aws::String GetNameForExecutionMode(ExecutionMode enumValue)
        {
          switch(enumValue)
          {
          case ExecutionMode::NOT_SET:
            return {};
          case ExecutionMode::ON_DEMAND:
            return "ON_DEMAND";
          case ExecutionMode::SCHEDULED:
            return "SCHEDULED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionModeMapper
    } // namespace Model
  } // namespace AppIntegrationsService
} // namespace Aws
