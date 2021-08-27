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
  enum class SampleType
  {
    NOT_SET,
    FIRST_N,
    LAST_N,
    RANDOM
  };

namespace SampleTypeMapper
{
AWS_GLUEDATABREW_API SampleType GetSampleTypeForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForSampleType(SampleType value);
} // namespace SampleTypeMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
