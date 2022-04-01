/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class AcknowledgmentStatus
  {
    NOT_SET,
    ACKNOWLEDGING,
    ACKNOWLEDGED,
    UNACKNOWLEDGED
  };

namespace AcknowledgmentStatusMapper
{
AWS_PRIVATENETWORKS_API AcknowledgmentStatus GetAcknowledgmentStatusForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForAcknowledgmentStatus(AcknowledgmentStatus value);
} // namespace AcknowledgmentStatusMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
