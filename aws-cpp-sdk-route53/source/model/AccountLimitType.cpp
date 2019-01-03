/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/route53/model/AccountLimitType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace AccountLimitTypeMapper
      {

        static const int MAX_HEALTH_CHECKS_BY_OWNER_HASH = HashingUtils::HashString("MAX_HEALTH_CHECKS_BY_OWNER");
        static const int MAX_HOSTED_ZONES_BY_OWNER_HASH = HashingUtils::HashString("MAX_HOSTED_ZONES_BY_OWNER");
        static const int MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER_HASH = HashingUtils::HashString("MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER");
        static const int MAX_REUSABLE_DELEGATION_SETS_BY_OWNER_HASH = HashingUtils::HashString("MAX_REUSABLE_DELEGATION_SETS_BY_OWNER");
        static const int MAX_TRAFFIC_POLICIES_BY_OWNER_HASH = HashingUtils::HashString("MAX_TRAFFIC_POLICIES_BY_OWNER");


        AccountLimitType GetAccountLimitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAX_HEALTH_CHECKS_BY_OWNER_HASH)
          {
            return AccountLimitType::MAX_HEALTH_CHECKS_BY_OWNER;
          }
          else if (hashCode == MAX_HOSTED_ZONES_BY_OWNER_HASH)
          {
            return AccountLimitType::MAX_HOSTED_ZONES_BY_OWNER;
          }
          else if (hashCode == MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER_HASH)
          {
            return AccountLimitType::MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER;
          }
          else if (hashCode == MAX_REUSABLE_DELEGATION_SETS_BY_OWNER_HASH)
          {
            return AccountLimitType::MAX_REUSABLE_DELEGATION_SETS_BY_OWNER;
          }
          else if (hashCode == MAX_TRAFFIC_POLICIES_BY_OWNER_HASH)
          {
            return AccountLimitType::MAX_TRAFFIC_POLICIES_BY_OWNER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountLimitType>(hashCode);
          }

          return AccountLimitType::NOT_SET;
        }

        Aws::String GetNameForAccountLimitType(AccountLimitType enumValue)
        {
          switch(enumValue)
          {
          case AccountLimitType::MAX_HEALTH_CHECKS_BY_OWNER:
            return "MAX_HEALTH_CHECKS_BY_OWNER";
          case AccountLimitType::MAX_HOSTED_ZONES_BY_OWNER:
            return "MAX_HOSTED_ZONES_BY_OWNER";
          case AccountLimitType::MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER:
            return "MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER";
          case AccountLimitType::MAX_REUSABLE_DELEGATION_SETS_BY_OWNER:
            return "MAX_REUSABLE_DELEGATION_SETS_BY_OWNER";
          case AccountLimitType::MAX_TRAFFIC_POLICIES_BY_OWNER:
            return "MAX_TRAFFIC_POLICIES_BY_OWNER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountLimitTypeMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
