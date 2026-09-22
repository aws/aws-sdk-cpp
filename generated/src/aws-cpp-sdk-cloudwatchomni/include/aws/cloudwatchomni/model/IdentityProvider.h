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
enum class IdentityProvider { NOT_SET, IAM, IDC };

namespace IdentityProviderMapper {
AWS_CLOUDWATCHOMNI_API IdentityProvider GetIdentityProviderForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForIdentityProvider(IdentityProvider value);
}  // namespace IdentityProviderMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
