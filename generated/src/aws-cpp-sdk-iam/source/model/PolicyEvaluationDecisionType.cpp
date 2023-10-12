/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/PolicyEvaluationDecisionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace PolicyEvaluationDecisionTypeMapper
      {

        static constexpr uint32_t allowed_HASH = ConstExprHashingUtils::HashString("allowed");
        static constexpr uint32_t explicitDeny_HASH = ConstExprHashingUtils::HashString("explicitDeny");
        static constexpr uint32_t implicitDeny_HASH = ConstExprHashingUtils::HashString("implicitDeny");


        PolicyEvaluationDecisionType GetPolicyEvaluationDecisionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == allowed_HASH)
          {
            return PolicyEvaluationDecisionType::allowed;
          }
          else if (hashCode == explicitDeny_HASH)
          {
            return PolicyEvaluationDecisionType::explicitDeny;
          }
          else if (hashCode == implicitDeny_HASH)
          {
            return PolicyEvaluationDecisionType::implicitDeny;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyEvaluationDecisionType>(hashCode);
          }

          return PolicyEvaluationDecisionType::NOT_SET;
        }

        Aws::String GetNameForPolicyEvaluationDecisionType(PolicyEvaluationDecisionType enumValue)
        {
          switch(enumValue)
          {
          case PolicyEvaluationDecisionType::NOT_SET:
            return {};
          case PolicyEvaluationDecisionType::allowed:
            return "allowed";
          case PolicyEvaluationDecisionType::explicitDeny:
            return "explicitDeny";
          case PolicyEvaluationDecisionType::implicitDeny:
            return "implicitDeny";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyEvaluationDecisionTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
