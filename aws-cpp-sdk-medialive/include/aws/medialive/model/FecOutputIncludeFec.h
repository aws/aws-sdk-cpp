/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class FecOutputIncludeFec
  {
    NOT_SET,
    COLUMN,
    COLUMN_AND_ROW
  };

namespace FecOutputIncludeFecMapper
{
AWS_MEDIALIVE_API FecOutputIncludeFec GetFecOutputIncludeFecForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForFecOutputIncludeFec(FecOutputIncludeFec value);
} // namespace FecOutputIncludeFecMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
