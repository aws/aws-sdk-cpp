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
enum class AuthType { NOT_SET, NONE, OAUTH2, API_KEY };

namespace AuthTypeMapper {
AWS_CLOUDWATCHOMNI_API AuthType GetAuthTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForAuthType(AuthType value);
}  // namespace AuthTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
