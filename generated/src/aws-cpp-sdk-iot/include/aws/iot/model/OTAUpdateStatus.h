/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class OTAUpdateStatus
  {
    NOT_SET,
    CREATE_PENDING,
    CREATE_IN_PROGRESS,
    CREATE_COMPLETE,
    CREATE_FAILED
  };

namespace OTAUpdateStatusMapper
{
AWS_IOT_API OTAUpdateStatus GetOTAUpdateStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForOTAUpdateStatus(OTAUpdateStatus value);
} // namespace OTAUpdateStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
