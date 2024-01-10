/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace PolicyTypeMapper
      {

        static const int DATA_PROTECTION_POLICY_HASH = HashingUtils::HashString("DATA_PROTECTION_POLICY");
        static const int SUBSCRIPTION_FILTER_POLICY_HASH = HashingUtils::HashString("SUBSCRIPTION_FILTER_POLICY");


        PolicyType GetPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_PROTECTION_POLICY_HASH)
          {
            return PolicyType::DATA_PROTECTION_POLICY;
          }
          else if (hashCode == SUBSCRIPTION_FILTER_POLICY_HASH)
          {
            return PolicyType::SUBSCRIPTION_FILTER_POLICY;
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
          case PolicyType::DATA_PROTECTION_POLICY:
            return "DATA_PROTECTION_POLICY";
          case PolicyType::SUBSCRIPTION_FILTER_POLICY:
            return "SUBSCRIPTION_FILTER_POLICY";
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
  } // namespace CloudWatchLogs
} // namespace Aws
