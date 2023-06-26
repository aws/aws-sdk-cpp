/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class SourceCodeVersionType
  {
    NOT_SET,
    BRANCH
  };

namespace SourceCodeVersionTypeMapper
{
AWS_APPRUNNER_API SourceCodeVersionType GetSourceCodeVersionTypeForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForSourceCodeVersionType(SourceCodeVersionType value);
} // namespace SourceCodeVersionTypeMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
