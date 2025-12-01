/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class ContactMediaProcessingFailureMode { NOT_SET, DELIVER_UNPROCESSED_MESSAGE, DO_NOT_DELIVER_UNPROCESSED_MESSAGE };

namespace ContactMediaProcessingFailureModeMapper {
AWS_CONNECT_API ContactMediaProcessingFailureMode GetContactMediaProcessingFailureModeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactMediaProcessingFailureMode(ContactMediaProcessingFailureMode value);
}  // namespace ContactMediaProcessingFailureModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
