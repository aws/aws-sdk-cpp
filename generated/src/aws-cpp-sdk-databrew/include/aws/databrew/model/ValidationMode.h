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
  enum class ValidationMode
  {
    NOT_SET,
    CHECK_ALL
  };

namespace ValidationModeMapper
{
AWS_GLUEDATABREW_API ValidationMode GetValidationModeForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForValidationMode(ValidationMode value);
} // namespace ValidationModeMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
