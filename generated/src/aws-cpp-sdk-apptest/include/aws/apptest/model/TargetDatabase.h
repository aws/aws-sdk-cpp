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
  enum class TargetDatabase
  {
    NOT_SET,
    PostgreSQL
  };

namespace TargetDatabaseMapper
{
AWS_APPTEST_API TargetDatabase GetTargetDatabaseForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForTargetDatabase(TargetDatabase value);
} // namespace TargetDatabaseMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
