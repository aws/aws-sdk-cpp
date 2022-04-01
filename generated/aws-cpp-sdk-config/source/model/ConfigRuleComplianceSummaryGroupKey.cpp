/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigRuleComplianceSummaryGroupKey.h>
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
      namespace ConfigRuleComplianceSummaryGroupKeyMapper
      {

        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int AWS_REGION_HASH = HashingUtils::HashString("AWS_REGION");


        ConfigRuleComplianceSummaryGroupKey GetConfigRuleComplianceSummaryGroupKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_ID_HASH)
          {
            return ConfigRuleComplianceSummaryGroupKey::ACCOUNT_ID;
          }
          else if (hashCode == AWS_REGION_HASH)
          {
            return ConfigRuleComplianceSummaryGroupKey::AWS_REGION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigRuleComplianceSummaryGroupKey>(hashCode);
          }

          return ConfigRuleComplianceSummaryGroupKey::NOT_SET;
        }

        Aws::String GetNameForConfigRuleComplianceSummaryGroupKey(ConfigRuleComplianceSummaryGroupKey enumValue)
        {
          switch(enumValue)
          {
          case ConfigRuleComplianceSummaryGroupKey::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case ConfigRuleComplianceSummaryGroupKey::AWS_REGION:
            return "AWS_REGION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigRuleComplianceSummaryGroupKeyMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
