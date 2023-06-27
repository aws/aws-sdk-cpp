/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{
  enum class Format
  {
    NOT_SET,
    json,
    parquet
  };

namespace FormatMapper
{
AWS_APPFABRIC_API Format GetFormatForName(const Aws::String& name);

AWS_APPFABRIC_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace AppFabric
} // namespace Aws
