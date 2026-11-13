/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class Disposition { NOT_SET, Isolated, Blocked, Deleted, Access_Revoked, Logged };

namespace DispositionMapper {
AWS_GUARDDUTY_API Disposition GetDispositionForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDisposition(Disposition value);
}  // namespace DispositionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
