/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class AttachmentStatus
  {
    NOT_SET,
    CREATING,
    DELETING,
    SCALING,
    READY
  };

namespace AttachmentStatusMapper
{
AWS_NETWORKFIREWALL_API AttachmentStatus GetAttachmentStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForAttachmentStatus(AttachmentStatus value);
} // namespace AttachmentStatusMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
