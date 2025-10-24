﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

namespace Aws {
namespace DataSync {
namespace Model {
enum class EndpointType { NOT_SET, PUBLIC_, PRIVATE_LINK, FIPS, FIPS_PRIVATE_LINK };

namespace EndpointTypeMapper {
AWS_DATASYNC_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForEndpointType(EndpointType value);
}  // namespace EndpointTypeMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
