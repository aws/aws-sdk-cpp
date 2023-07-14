/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class TemplateErrorType
  {
    NOT_SET,
    SOURCE_NOT_FOUND,
    DATA_SET_NOT_FOUND,
    INTERNAL_FAILURE,
    ACCESS_DENIED
  };

namespace TemplateErrorTypeMapper
{
AWS_QUICKSIGHT_API TemplateErrorType GetTemplateErrorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTemplateErrorType(TemplateErrorType value);
} // namespace TemplateErrorTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
