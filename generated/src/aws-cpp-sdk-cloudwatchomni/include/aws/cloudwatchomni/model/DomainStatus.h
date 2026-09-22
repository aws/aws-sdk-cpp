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
enum class DomainStatus { NOT_SET, ACTIVE };

namespace DomainStatusMapper {
AWS_CLOUDWATCHOMNI_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForDomainStatus(DomainStatus value);
}  // namespace DomainStatusMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
