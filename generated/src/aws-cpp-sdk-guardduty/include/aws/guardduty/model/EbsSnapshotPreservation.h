/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class EbsSnapshotPreservation
  {
    NOT_SET,
    NO_RETENTION,
    RETENTION_WITH_FINDING
  };

namespace EbsSnapshotPreservationMapper
{
AWS_GUARDDUTY_API EbsSnapshotPreservation GetEbsSnapshotPreservationForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForEbsSnapshotPreservation(EbsSnapshotPreservation value);
} // namespace EbsSnapshotPreservationMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
