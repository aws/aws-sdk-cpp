/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Transfer {
namespace Model {
enum class WebAppEndpointType { NOT_SET, PUBLIC_, VPC };

namespace WebAppEndpointTypeMapper {
AWS_TRANSFER_API WebAppEndpointType GetWebAppEndpointTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForWebAppEndpointType(WebAppEndpointType value);
}  // namespace WebAppEndpointTypeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
