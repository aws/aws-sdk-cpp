/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class IpRouteStatusMsg
  {
    NOT_SET,
    Adding,
    Added,
    Removing,
    Removed,
    AddFailed,
    RemoveFailed
  };

namespace IpRouteStatusMsgMapper
{
AWS_DIRECTORYSERVICE_API IpRouteStatusMsg GetIpRouteStatusMsgForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForIpRouteStatusMsg(IpRouteStatusMsg value);
} // namespace IpRouteStatusMsgMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
