/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class StartingPosition
  {
    NOT_SET,
    latest,
    trim_horizon,
    earliest,
    timestamp
  };

namespace StartingPositionMapper
{
AWS_GLUE_API StartingPosition GetStartingPositionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForStartingPosition(StartingPosition value);
} // namespace StartingPositionMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
