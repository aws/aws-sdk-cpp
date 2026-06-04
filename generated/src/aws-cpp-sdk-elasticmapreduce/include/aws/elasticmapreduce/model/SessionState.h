/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

namespace Aws {
namespace EMR {
namespace Model {
enum class SessionState { NOT_SET, SUBMITTED, STARTING, STARTED, IDLE, BUSY, TERMINATING, TERMINATED, FAILED };

namespace SessionStateMapper {
AWS_EMR_API SessionState GetSessionStateForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForSessionState(SessionState value);
}  // namespace SessionStateMapper
}  // namespace Model
}  // namespace EMR
}  // namespace Aws
