/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ConnectionType
  {
    NOT_SET,
    JDBC,
    SFTP,
    MONGODB,
    KAFKA,
    NETWORK
  };

namespace ConnectionTypeMapper
{
AWS_GLUE_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
