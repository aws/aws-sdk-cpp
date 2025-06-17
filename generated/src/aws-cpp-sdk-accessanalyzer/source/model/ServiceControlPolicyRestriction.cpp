/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ServiceControlPolicyRestriction.h>
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
      namespace ServiceControlPolicyRestrictionMapper
      {

        static const int APPLICABLE_HASH = HashingUtils::HashString("APPLICABLE");
        static const int FAILED_TO_EVALUATE_SCP_HASH = HashingUtils::HashString("FAILED_TO_EVALUATE_SCP");
        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
        static const int APPLIED_HASH = HashingUtils::HashString("APPLIED");


        ServiceControlPolicyRestriction GetServiceControlPolicyRestrictionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLICABLE_HASH)
          {
            return ServiceControlPolicyRestriction::APPLICABLE;
          }
          else if (hashCode == FAILED_TO_EVALUATE_SCP_HASH)
          {
            return ServiceControlPolicyRestriction::FAILED_TO_EVALUATE_SCP;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return ServiceControlPolicyRestriction::NOT_APPLICABLE;
          }
          else if (hashCode == APPLIED_HASH)
          {
            return ServiceControlPolicyRestriction::APPLIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceControlPolicyRestriction>(hashCode);
          }

          return ServiceControlPolicyRestriction::NOT_SET;
        }

        Aws::String GetNameForServiceControlPolicyRestriction(ServiceControlPolicyRestriction enumValue)
        {
          switch(enumValue)
          {
          case ServiceControlPolicyRestriction::NOT_SET:
            return {};
          case ServiceControlPolicyRestriction::APPLICABLE:
            return "APPLICABLE";
          case ServiceControlPolicyRestriction::FAILED_TO_EVALUATE_SCP:
            return "FAILED_TO_EVALUATE_SCP";
          case ServiceControlPolicyRestriction::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          case ServiceControlPolicyRestriction::APPLIED:
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

      } // namespace ServiceControlPolicyRestrictionMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
