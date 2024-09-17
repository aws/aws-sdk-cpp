/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class SchemaConfiguration
  {
    NOT_SET,
    DIFFERENTIAL_PRIVACY
  };

namespace SchemaConfigurationMapper
{
AWS_CLEANROOMS_API SchemaConfiguration GetSchemaConfigurationForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForSchemaConfiguration(SchemaConfiguration value);
} // namespace SchemaConfigurationMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
