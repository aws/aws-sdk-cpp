/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AutoScaling {
namespace Model {
enum class RetentionAction { NOT_SET, retain, terminate };

namespace RetentionActionMapper {
AWS_AUTOSCALING_API RetentionAction GetRetentionActionForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForRetentionAction(RetentionAction value);
}  // namespace RetentionActionMapper
}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
