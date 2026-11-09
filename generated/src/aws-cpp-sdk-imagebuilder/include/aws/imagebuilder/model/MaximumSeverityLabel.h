/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

namespace Aws {
namespace imagebuilder {
namespace Model {
enum class MaximumSeverityLabel { NOT_SET, INFORMATIONAL, LOW, MEDIUM, HIGH };

namespace MaximumSeverityLabelMapper {
AWS_IMAGEBUILDER_API MaximumSeverityLabel GetMaximumSeverityLabelForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForMaximumSeverityLabel(MaximumSeverityLabel value);
}  // namespace MaximumSeverityLabelMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
