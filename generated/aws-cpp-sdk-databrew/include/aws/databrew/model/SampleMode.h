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
  enum class SampleMode
  {
    NOT_SET,
    FULL_DATASET,
    CUSTOM_ROWS
  };

namespace SampleModeMapper
{
AWS_GLUEDATABREW_API SampleMode GetSampleModeForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForSampleMode(SampleMode value);
} // namespace SampleModeMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
