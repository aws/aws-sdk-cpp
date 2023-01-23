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
  enum class MessageFormatValue
  {
    NOT_SET,
    json,
    json_unformatted
  };

namespace MessageFormatValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API MessageFormatValue GetMessageFormatValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForMessageFormatValue(MessageFormatValue value);
} // namespace MessageFormatValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
