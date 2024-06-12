/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppTest
{
namespace Model
{
  enum class SourceDatabase
  {
    NOT_SET,
    z_OS_DB2
  };

namespace SourceDatabaseMapper
{
AWS_APPTEST_API SourceDatabase GetSourceDatabaseForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForSourceDatabase(SourceDatabase value);
} // namespace SourceDatabaseMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
