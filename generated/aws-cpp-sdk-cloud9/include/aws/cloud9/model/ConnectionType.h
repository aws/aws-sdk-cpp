/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Cloud9
{
namespace Model
{
  enum class ConnectionType
  {
    NOT_SET,
    CONNECT_SSH,
    CONNECT_SSM
  };

namespace ConnectionTypeMapper
{
AWS_CLOUD9_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_CLOUD9_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace Cloud9
} // namespace Aws
