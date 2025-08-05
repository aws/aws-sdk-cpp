/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowType.h>
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
      namespace AutomatedReasoningPolicyBuildWorkflowTypeMapper
      {

        static const int INGEST_CONTENT_HASH = HashingUtils::HashString("INGEST_CONTENT");
        static const int REFINE_POLICY_HASH = HashingUtils::HashString("REFINE_POLICY");
        static const int IMPORT_POLICY_HASH = HashingUtils::HashString("IMPORT_POLICY");


        AutomatedReasoningPolicyBuildWorkflowType GetAutomatedReasoningPolicyBuildWorkflowTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INGEST_CONTENT_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowType::INGEST_CONTENT;
          }
          else if (hashCode == REFINE_POLICY_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowType::REFINE_POLICY;
          }
          else if (hashCode == IMPORT_POLICY_HASH)
          {
            return AutomatedReasoningPolicyBuildWorkflowType::IMPORT_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningPolicyBuildWorkflowType>(hashCode);
          }

          return AutomatedReasoningPolicyBuildWorkflowType::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningPolicyBuildWorkflowType(AutomatedReasoningPolicyBuildWorkflowType enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningPolicyBuildWorkflowType::NOT_SET:
            return {};
          case AutomatedReasoningPolicyBuildWorkflowType::INGEST_CONTENT:
            return "INGEST_CONTENT";
          case AutomatedReasoningPolicyBuildWorkflowType::REFINE_POLICY:
            return "REFINE_POLICY";
          case AutomatedReasoningPolicyBuildWorkflowType::IMPORT_POLICY:
            return "IMPORT_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomatedReasoningPolicyBuildWorkflowTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
