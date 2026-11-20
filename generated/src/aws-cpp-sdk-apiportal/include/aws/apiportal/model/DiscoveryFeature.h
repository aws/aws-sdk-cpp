/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class DiscoveryFeature { NOT_SET, AI_DISCOVERY };

namespace DiscoveryFeatureMapper {
AWS_APIPORTAL_API DiscoveryFeature GetDiscoveryFeatureForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForDiscoveryFeature(DiscoveryFeature value);
}  // namespace DiscoveryFeatureMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
