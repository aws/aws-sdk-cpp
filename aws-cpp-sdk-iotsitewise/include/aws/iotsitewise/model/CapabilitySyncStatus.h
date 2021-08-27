/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class CapabilitySyncStatus
  {
    NOT_SET,
    IN_SYNC,
    OUT_OF_SYNC,
    SYNC_FAILED
  };

namespace CapabilitySyncStatusMapper
{
AWS_IOTSITEWISE_API CapabilitySyncStatus GetCapabilitySyncStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForCapabilitySyncStatus(CapabilitySyncStatus value);
} // namespace CapabilitySyncStatusMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
