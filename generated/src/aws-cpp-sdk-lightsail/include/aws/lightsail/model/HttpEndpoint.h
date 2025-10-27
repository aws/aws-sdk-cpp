/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class HttpEndpoint { NOT_SET, disabled, enabled };

namespace HttpEndpointMapper {
AWS_LIGHTSAIL_API HttpEndpoint GetHttpEndpointForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForHttpEndpoint(HttpEndpoint value);
}  // namespace HttpEndpointMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
