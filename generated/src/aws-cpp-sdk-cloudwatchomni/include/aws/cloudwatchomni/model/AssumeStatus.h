/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class AssumeStatus { NOT_SET, ALLOWED, DENIED };

namespace AssumeStatusMapper {
AWS_CLOUDWATCHOMNI_API AssumeStatus GetAssumeStatusForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForAssumeStatus(AssumeStatus value);
}  // namespace AssumeStatusMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
