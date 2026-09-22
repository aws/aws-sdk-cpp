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
enum class EncryptionStrategy { NOT_SET, AWS_OWNED, CUSTOMER_MANAGED };

namespace EncryptionStrategyMapper {
AWS_CLOUDWATCHOMNI_API EncryptionStrategy GetEncryptionStrategyForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForEncryptionStrategy(EncryptionStrategy value);
}  // namespace EncryptionStrategyMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
