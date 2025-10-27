/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVS_EXPORTS.h>

namespace Aws {
namespace IVS {
namespace Model {
enum class RenditionConfigurationRenditionSelection { NOT_SET, ALL, NONE, CUSTOM };

namespace RenditionConfigurationRenditionSelectionMapper {
AWS_IVS_API RenditionConfigurationRenditionSelection GetRenditionConfigurationRenditionSelectionForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForRenditionConfigurationRenditionSelection(RenditionConfigurationRenditionSelection value);
}  // namespace RenditionConfigurationRenditionSelectionMapper
}  // namespace Model
}  // namespace IVS
}  // namespace Aws
