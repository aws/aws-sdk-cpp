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
  enum class ClientAuthenticationStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace ClientAuthenticationStatusMapper
{
AWS_DIRECTORYSERVICE_API ClientAuthenticationStatus GetClientAuthenticationStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForClientAuthenticationStatus(ClientAuthenticationStatus value);
} // namespace ClientAuthenticationStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
