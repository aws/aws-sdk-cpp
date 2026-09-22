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
enum class Scope { NOT_SET, ACCOUNT, ORGANIZATION };

namespace ScopeMapper {
AWS_CLOUDWATCHOMNI_API Scope GetScopeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForScope(Scope value);
}  // namespace ScopeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
