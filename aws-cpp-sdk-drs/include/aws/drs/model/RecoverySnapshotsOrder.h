/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class RecoverySnapshotsOrder
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace RecoverySnapshotsOrderMapper
{
AWS_DRS_API RecoverySnapshotsOrder GetRecoverySnapshotsOrderForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoverySnapshotsOrder(RecoverySnapshotsOrder value);
} // namespace RecoverySnapshotsOrderMapper
} // namespace Model
} // namespace drs
} // namespace Aws
