/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/RecommendedRemediationAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace RecommendedRemediationActionMapper
      {

        static const int CREATE_POLICY_HASH = HashingUtils::HashString("CREATE_POLICY");
        static const int DETACH_POLICY_HASH = HashingUtils::HashString("DETACH_POLICY");


        RecommendedRemediationAction GetRecommendedRemediationActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_POLICY_HASH)
          {
            return RecommendedRemediationAction::CREATE_POLICY;
          }
          else if (hashCode == DETACH_POLICY_HASH)
          {
            return RecommendedRemediationAction::DETACH_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendedRemediationAction>(hashCode);
          }

          return RecommendedRemediationAction::NOT_SET;
        }

        Aws::String GetNameForRecommendedRemediationAction(RecommendedRemediationAction enumValue)
        {
          switch(enumValue)
          {
          case RecommendedRemediationAction::NOT_SET:
            return {};
          case RecommendedRemediationAction::CREATE_POLICY:
            return "CREATE_POLICY";
          case RecommendedRemediationAction::DETACH_POLICY:
            return "DETACH_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendedRemediationActionMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
