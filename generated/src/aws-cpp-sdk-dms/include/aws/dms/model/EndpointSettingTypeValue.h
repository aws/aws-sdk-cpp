/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{
  enum class EndpointSettingTypeValue
  {
    NOT_SET,
    string,
    boolean,
    integer,
    enum_
  };

namespace EndpointSettingTypeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API EndpointSettingTypeValue GetEndpointSettingTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForEndpointSettingTypeValue(EndpointSettingTypeValue value);
} // namespace EndpointSettingTypeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
