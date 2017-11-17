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

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{
  enum class AccountLimitType
  {
    NOT_SET,
    MAX_HEALTH_CHECKS_BY_OWNER,
    MAX_HOSTED_ZONES_BY_OWNER,
    MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER,
    MAX_REUSABLE_DELEGATION_SETS_BY_OWNER,
    MAX_TRAFFIC_POLICIES_BY_OWNER
  };

namespace AccountLimitTypeMapper
{
AWS_ROUTE53_API AccountLimitType GetAccountLimitTypeForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForAccountLimitType(AccountLimitType value);
} // namespace AccountLimitTypeMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
