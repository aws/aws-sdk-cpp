/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApplicationSignals {
namespace Model {
enum class ChangeEventType { NOT_SET, DEPLOYMENT, CONFIGURATION };

namespace ChangeEventTypeMapper {
AWS_APPLICATIONSIGNALS_API ChangeEventType GetChangeEventTypeForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForChangeEventType(ChangeEventType value);
}  // namespace ChangeEventTypeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
