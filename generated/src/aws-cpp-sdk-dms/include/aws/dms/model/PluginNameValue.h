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
  enum class PluginNameValue
  {
    NOT_SET,
    no_preference,
    test_decoding,
    pglogical
  };

namespace PluginNameValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API PluginNameValue GetPluginNameValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForPluginNameValue(PluginNameValue value);
} // namespace PluginNameValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
