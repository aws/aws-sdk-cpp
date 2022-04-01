/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigRuleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ConfigRuleStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETING_RESULTS_HASH = HashingUtils::HashString("DELETING_RESULTS");
        static const int EVALUATING_HASH = HashingUtils::HashString("EVALUATING");


        ConfigRuleState GetConfigRuleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ConfigRuleState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConfigRuleState::DELETING;
          }
          else if (hashCode == DELETING_RESULTS_HASH)
          {
            return ConfigRuleState::DELETING_RESULTS;
          }
          else if (hashCode == EVALUATING_HASH)
          {
            return ConfigRuleState::EVALUATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigRuleState>(hashCode);
          }

          return ConfigRuleState::NOT_SET;
        }

        Aws::String GetNameForConfigRuleState(ConfigRuleState enumValue)
        {
          switch(enumValue)
          {
          case ConfigRuleState::ACTIVE:
            return "ACTIVE";
          case ConfigRuleState::DELETING:
            return "DELETING";
          case ConfigRuleState::DELETING_RESULTS:
            return "DELETING_RESULTS";
          case ConfigRuleState::EVALUATING:
            return "EVALUATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigRuleStateMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
