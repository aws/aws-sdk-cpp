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
  enum class ClientAuthenticationType
  {
    NOT_SET,
    SmartCard,
    SmartCardOrPassword
  };

namespace ClientAuthenticationTypeMapper
{
AWS_DIRECTORYSERVICE_API ClientAuthenticationType GetClientAuthenticationTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForClientAuthenticationType(ClientAuthenticationType value);
} // namespace ClientAuthenticationTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
