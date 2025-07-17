/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
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
AWS_CLEANROOMSML_API ResultFormat GetResultFormatForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForResultFormat(ResultFormat value);
} // namespace ResultFormatMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
