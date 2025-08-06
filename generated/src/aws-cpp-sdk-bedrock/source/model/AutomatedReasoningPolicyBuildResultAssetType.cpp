/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildResultAssetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace AutomatedReasoningPolicyBuildResultAssetTypeMapper
      {

        static const int BUILD_LOG_HASH = HashingUtils::HashString("BUILD_LOG");
        static const int QUALITY_REPORT_HASH = HashingUtils::HashString("QUALITY_REPORT");
        static const int POLICY_DEFINITION_HASH = HashingUtils::HashString("POLICY_DEFINITION");


        AutomatedReasoningPolicyBuildResultAssetType GetAutomatedReasoningPolicyBuildResultAssetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILD_LOG_HASH)
          {
            return AutomatedReasoningPolicyBuildResultAssetType::BUILD_LOG;
          }
          else if (hashCode == QUALITY_REPORT_HASH)
          {
            return AutomatedReasoningPolicyBuildResultAssetType::QUALITY_REPORT;
          }
          else if (hashCode == POLICY_DEFINITION_HASH)
          {
            return AutomatedReasoningPolicyBuildResultAssetType::POLICY_DEFINITION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningPolicyBuildResultAssetType>(hashCode);
          }

          return AutomatedReasoningPolicyBuildResultAssetType::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningPolicyBuildResultAssetType(AutomatedReasoningPolicyBuildResultAssetType enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningPolicyBuildResultAssetType::NOT_SET:
            return {};
          case AutomatedReasoningPolicyBuildResultAssetType::BUILD_LOG:
            return "BUILD_LOG";
          case AutomatedReasoningPolicyBuildResultAssetType::QUALITY_REPORT:
            return "QUALITY_REPORT";
          case AutomatedReasoningPolicyBuildResultAssetType::POLICY_DEFINITION:
            return "POLICY_DEFINITION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomatedReasoningPolicyBuildResultAssetTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
