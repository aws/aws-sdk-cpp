/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/StepActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubOrchestrator
  {
    namespace Model
    {
      namespace StepActionTypeMapper
      {

        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
        static const int AUTOMATED_HASH = HashingUtils::HashString("AUTOMATED");


        StepActionType GetStepActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_HASH)
          {
            return StepActionType::MANUAL;
          }
          else if (hashCode == AUTOMATED_HASH)
          {
            return StepActionType::AUTOMATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepActionType>(hashCode);
          }

          return StepActionType::NOT_SET;
        }

        Aws::String GetNameForStepActionType(StepActionType enumValue)
        {
          switch(enumValue)
          {
          case StepActionType::MANUAL:
            return "MANUAL";
          case StepActionType::AUTOMATED:
            return "AUTOMATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepActionTypeMapper
    } // namespace Model
  } // namespace MigrationHubOrchestrator
} // namespace Aws
