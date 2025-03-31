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
  enum class WebAppEndpointPolicy
  {
    NOT_SET,
    FIPS,
    STANDARD
  };

namespace WebAppEndpointPolicyMapper
{
AWS_TRANSFER_API WebAppEndpointPolicy GetWebAppEndpointPolicyForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForWebAppEndpointPolicy(WebAppEndpointPolicy value);
} // namespace WebAppEndpointPolicyMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
