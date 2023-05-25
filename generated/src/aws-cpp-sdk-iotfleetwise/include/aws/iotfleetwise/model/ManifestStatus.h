/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class ManifestStatus
  {
    NOT_SET,
    ACTIVE,
    DRAFT
  };

namespace ManifestStatusMapper
{
AWS_IOTFLEETWISE_API ManifestStatus GetManifestStatusForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForManifestStatus(ManifestStatus value);
} // namespace ManifestStatusMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
