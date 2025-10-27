/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/MainframeModernization_EXPORTS.h>

namespace Aws {
namespace MainframeModernization {
namespace Model {
enum class NetworkType { NOT_SET, ipv4, dual };

namespace NetworkTypeMapper {
AWS_MAINFRAMEMODERNIZATION_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForNetworkType(NetworkType value);
}  // namespace NetworkTypeMapper
}  // namespace Model
}  // namespace MainframeModernization
}  // namespace Aws
