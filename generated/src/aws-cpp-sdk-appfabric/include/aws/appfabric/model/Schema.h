/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{
  enum class Schema
  {
    NOT_SET,
    ocsf,
    raw
  };

namespace SchemaMapper
{
AWS_APPFABRIC_API Schema GetSchemaForName(const Aws::String& name);

AWS_APPFABRIC_API Aws::String GetNameForSchema(Schema value);
} // namespace SchemaMapper
} // namespace Model
} // namespace AppFabric
} // namespace Aws
