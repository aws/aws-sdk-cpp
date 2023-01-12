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
  enum class SchemaType
  {
    NOT_SET,
    TABLE
  };

namespace SchemaTypeMapper
{
AWS_CLEANROOMS_API SchemaType GetSchemaTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForSchemaType(SchemaType value);
} // namespace SchemaTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
