/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyType.h>
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
      namespace PolicyTypeMapper
      {

        static const int IDENTITY_POLICY_HASH = HashingUtils::HashString("IDENTITY_POLICY");
        static const int RESOURCE_POLICY_HASH = HashingUtils::HashString("RESOURCE_POLICY");
        static const int SERVICE_CONTROL_POLICY_HASH = HashingUtils::HashString("SERVICE_CONTROL_POLICY");


        PolicyType GetPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDENTITY_POLICY_HASH)
          {
            return PolicyType::IDENTITY_POLICY;
          }
          else if (hashCode == RESOURCE_POLICY_HASH)
          {
            return PolicyType::RESOURCE_POLICY;
          }
          else if (hashCode == SERVICE_CONTROL_POLICY_HASH)
          {
            return PolicyType::SERVICE_CONTROL_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyType>(hashCode);
          }

          return PolicyType::NOT_SET;
        }

        Aws::String GetNameForPolicyType(PolicyType enumValue)
        {
          switch(enumValue)
          {
          case PolicyType::NOT_SET:
            return {};
          case PolicyType::IDENTITY_POLICY:
            return "IDENTITY_POLICY";
          case PolicyType::RESOURCE_POLICY:
            return "RESOURCE_POLICY";
          case PolicyType::SERVICE_CONTROL_POLICY:
            return "SERVICE_CONTROL_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyTypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
