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
  enum class CharLengthSemantics
  {
    NOT_SET,
    default_,
    char_,
    byte
  };

namespace CharLengthSemanticsMapper
{
AWS_DATABASEMIGRATIONSERVICE_API CharLengthSemantics GetCharLengthSemanticsForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForCharLengthSemantics(CharLengthSemantics value);
} // namespace CharLengthSemanticsMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
