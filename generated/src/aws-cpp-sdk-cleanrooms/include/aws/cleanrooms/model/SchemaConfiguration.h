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
    DIFFERENTIAL_PRIVACY,
    CUSTOM_ANALYSIS_NOT_ALLOWED,
    NO_MEMBER_ACCOUNT_ALLOWED_TO_PROVIDE_ANALYSIS,
    DIFFERENTIAL_PRIVACY_BUDGET_NOT_CONFIGURED,
    ID_MAPPING_TABLE_NOT_POPULATED
  };

namespace SchemaConfigurationMapper
{
AWS_CLEANROOMS_API SchemaConfiguration GetSchemaConfigurationForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForSchemaConfiguration(SchemaConfiguration value);
} // namespace SchemaConfigurationMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
