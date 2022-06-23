/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class DatabaseOutputMode
  {
    NOT_SET,
    NEW_TABLE
  };

namespace DatabaseOutputModeMapper
{
AWS_GLUEDATABREW_API DatabaseOutputMode GetDatabaseOutputModeForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForDatabaseOutputMode(DatabaseOutputMode value);
} // namespace DatabaseOutputModeMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
