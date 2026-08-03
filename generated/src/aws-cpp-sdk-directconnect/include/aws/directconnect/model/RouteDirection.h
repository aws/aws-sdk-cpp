/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

namespace Aws {
namespace DirectConnect {
namespace Model {
enum class RouteDirection { NOT_SET, accepted, advertised };

namespace RouteDirectionMapper {
AWS_DIRECTCONNECT_API RouteDirection GetRouteDirectionForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForRouteDirection(RouteDirection value);
}  // namespace RouteDirectionMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
