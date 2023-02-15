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
  enum class JDBCConnectionType
  {
    NOT_SET,
    sqlserver,
    mysql,
    oracle,
    postgresql,
    redshift
  };

namespace JDBCConnectionTypeMapper
{
AWS_GLUE_API JDBCConnectionType GetJDBCConnectionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForJDBCConnectionType(JDBCConnectionType value);
} // namespace JDBCConnectionTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
