/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class PathPrefix
  {
    NOT_SET,
    EXECUTION_ID,
    SCHEMA_VERSION
  };

namespace PathPrefixMapper
{
AWS_APPFLOW_API PathPrefix GetPathPrefixForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForPathPrefix(PathPrefix value);
} // namespace PathPrefixMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
