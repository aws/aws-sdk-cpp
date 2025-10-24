/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class RecordState { NOT_SET, Started, Succeeded, Failed };

namespace RecordStateMapper {
AWS_LIGHTSAIL_API RecordState GetRecordStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForRecordState(RecordState value);
}  // namespace RecordStateMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
