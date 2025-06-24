/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ResourceControlPolicyRestriction.h>
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
      namespace ResourceControlPolicyRestrictionMapper
      {

        static const int APPLICABLE_HASH = HashingUtils::HashString("APPLICABLE");
        static const int FAILED_TO_EVALUATE_RCP_HASH = HashingUtils::HashString("FAILED_TO_EVALUATE_RCP");
        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
        static const int APPLIED_HASH = HashingUtils::HashString("APPLIED");


        ResourceControlPolicyRestriction GetResourceControlPolicyRestrictionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLICABLE_HASH)
          {
            return ResourceControlPolicyRestriction::APPLICABLE;
          }
          else if (hashCode == FAILED_TO_EVALUATE_RCP_HASH)
          {
            return ResourceControlPolicyRestriction::FAILED_TO_EVALUATE_RCP;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return ResourceControlPolicyRestriction::NOT_APPLICABLE;
          }
          else if (hashCode == APPLIED_HASH)
          {
            return ResourceControlPolicyRestriction::APPLIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceControlPolicyRestriction>(hashCode);
          }

          return ResourceControlPolicyRestriction::NOT_SET;
        }

        Aws::String GetNameForResourceControlPolicyRestriction(ResourceControlPolicyRestriction enumValue)
        {
          switch(enumValue)
          {
          case ResourceControlPolicyRestriction::NOT_SET:
            return {};
          case ResourceControlPolicyRestriction::APPLICABLE:
            return "APPLICABLE";
          case ResourceControlPolicyRestriction::FAILED_TO_EVALUATE_RCP:
            return "FAILED_TO_EVALUATE_RCP";
          case ResourceControlPolicyRestriction::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          case ResourceControlPolicyRestriction::APPLIED:
            return "APPLIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceControlPolicyRestrictionMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
