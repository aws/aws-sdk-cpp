/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BlueprintRunState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace BlueprintRunStateMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ROLLING_BACK_HASH = HashingUtils::HashString("ROLLING_BACK");


        BlueprintRunState GetBlueprintRunStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return BlueprintRunState::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return BlueprintRunState::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BlueprintRunState::FAILED;
          }
          else if (hashCode == ROLLING_BACK_HASH)
          {
            return BlueprintRunState::ROLLING_BACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlueprintRunState>(hashCode);
          }

          return BlueprintRunState::NOT_SET;
        }

        Aws::String GetNameForBlueprintRunState(BlueprintRunState enumValue)
        {
          switch(enumValue)
          {
          case BlueprintRunState::NOT_SET:
            return {};
          case BlueprintRunState::RUNNING:
            return "RUNNING";
          case BlueprintRunState::SUCCEEDED:
            return "SUCCEEDED";
          case BlueprintRunState::FAILED:
            return "FAILED";
          case BlueprintRunState::ROLLING_BACK:
            return "ROLLING_BACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlueprintRunStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
