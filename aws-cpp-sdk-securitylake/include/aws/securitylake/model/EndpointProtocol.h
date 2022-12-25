/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class EndpointProtocol
  {
    NOT_SET,
    HTTPS,
    SQS
  };

namespace EndpointProtocolMapper
{
AWS_SECURITYLAKE_API EndpointProtocol GetEndpointProtocolForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForEndpointProtocol(EndpointProtocol value);
} // namespace EndpointProtocolMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
