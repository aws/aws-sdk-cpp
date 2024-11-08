/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class DatabaseType
  {
    NOT_SET,
    MySQL,
    PostgreSQL
  };

namespace DatabaseTypeMapper
{
AWS_FIREHOSE_API DatabaseType GetDatabaseTypeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForDatabaseType(DatabaseType value);
} // namespace DatabaseTypeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
