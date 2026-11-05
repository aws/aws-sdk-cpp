/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class Status { NOT_SET, OBSERVING, WAITING_FOR_CONSENT, UPGRADING, SUCCEEDED, FAILED, TIMEOUT, STOPPED };

namespace StatusMapper {
AWS_GLUE_API Status GetStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
