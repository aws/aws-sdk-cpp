/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class SecurityPolicy
  {
    NOT_SET,
    TLS_1_0,
    TLS_1_2
  };

namespace SecurityPolicyMapper
{
AWS_APIGATEWAY_API SecurityPolicy GetSecurityPolicyForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForSecurityPolicy(SecurityPolicy value);
} // namespace SecurityPolicyMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
