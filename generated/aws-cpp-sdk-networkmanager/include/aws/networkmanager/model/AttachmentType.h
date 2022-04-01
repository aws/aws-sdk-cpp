/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class AttachmentType
  {
    NOT_SET,
    CONNECT,
    SITE_TO_SITE_VPN,
    VPC,
    TRANSIT_GATEWAY_ROUTE_TABLE
  };

namespace AttachmentTypeMapper
{
AWS_NETWORKMANAGER_API AttachmentType GetAttachmentTypeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForAttachmentType(AttachmentType value);
} // namespace AttachmentTypeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
