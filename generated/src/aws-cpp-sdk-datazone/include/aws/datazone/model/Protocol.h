/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class Protocol
  {
    NOT_SET,
    ATHENA,
    GLUE_INTERACTIVE_SESSION,
    HTTPS,
    JDBC,
    LIVY,
    ODBC,
    PRISM
  };

namespace ProtocolMapper
{
AWS_DATAZONE_API Protocol GetProtocolForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
