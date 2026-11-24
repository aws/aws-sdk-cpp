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
enum class Confidence { NOT_SET, LOW, MEDIUM, HIGH };

namespace ConfidenceMapper {
AWS_APIPORTAL_API Confidence GetConfidenceForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForConfidence(Confidence value);
}  // namespace ConfidenceMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
