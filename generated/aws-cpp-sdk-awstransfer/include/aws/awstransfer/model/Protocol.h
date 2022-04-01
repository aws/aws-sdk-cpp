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
  enum class Protocol
  {
    NOT_SET,
    SFTP,
    FTP,
    FTPS
  };

namespace ProtocolMapper
{
AWS_TRANSFER_API Protocol GetProtocolForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
