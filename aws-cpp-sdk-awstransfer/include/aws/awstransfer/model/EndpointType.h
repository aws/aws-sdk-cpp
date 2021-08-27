/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class EndpointType
  {
    NOT_SET,
    PUBLIC_,
    VPC,
    VPC_ENDPOINT
  };

namespace EndpointTypeMapper
{
AWS_TRANSFER_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForEndpointType(EndpointType value);
} // namespace EndpointTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
