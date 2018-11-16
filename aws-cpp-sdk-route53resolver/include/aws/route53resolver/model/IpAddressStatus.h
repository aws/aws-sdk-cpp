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
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{
  enum class IpAddressStatus
  {
    NOT_SET,
    CREATING,
    FAILED_CREATION,
    ATTACHING,
    ATTACHED,
    REMAP_DETACHING,
    REMAP_ATTACHING,
    DETACHING,
    FAILED_RESOURCE_GONE,
    DELETING,
    DELETE_FAILED_FAS_EXPIRED
  };

namespace IpAddressStatusMapper
{
AWS_ROUTE53RESOLVER_API IpAddressStatus GetIpAddressStatusForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForIpAddressStatus(IpAddressStatus value);
} // namespace IpAddressStatusMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
