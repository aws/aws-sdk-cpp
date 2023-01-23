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
  enum class ResultFormat
  {
    NOT_SET,
    CSV,
    PARQUET
  };

namespace ResultFormatMapper
{
AWS_CLEANROOMS_API ResultFormat GetResultFormatForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForResultFormat(ResultFormat value);
} // namespace ResultFormatMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
