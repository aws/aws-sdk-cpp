/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class MSKStartPosition
  {
    NOT_SET,
    TRIM_HORIZON,
    LATEST
  };

namespace MSKStartPositionMapper
{
AWS_PIPES_API MSKStartPosition GetMSKStartPositionForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForMSKStartPosition(MSKStartPosition value);
} // namespace MSKStartPositionMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
