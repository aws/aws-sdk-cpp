/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class SecurityPolicyProtocol
  {
    NOT_SET,
    SFTP,
    FTPS
  };

namespace SecurityPolicyProtocolMapper
{
AWS_TRANSFER_API SecurityPolicyProtocol GetSecurityPolicyProtocolForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForSecurityPolicyProtocol(SecurityPolicyProtocol value);
} // namespace SecurityPolicyProtocolMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
