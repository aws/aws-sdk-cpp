/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

namespace Aws {
namespace EMRServerless {
namespace Model {
enum class SessionState { NOT_SET, SUBMITTED, STARTING, STARTED, IDLE, BUSY, FAILED, TERMINATING, TERMINATED };

namespace SessionStateMapper {
AWS_EMRSERVERLESS_API SessionState GetSessionStateForName(const Aws::String& name);

AWS_EMRSERVERLESS_API Aws::String GetNameForSessionState(SessionState value);
}  // namespace SessionStateMapper
}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
