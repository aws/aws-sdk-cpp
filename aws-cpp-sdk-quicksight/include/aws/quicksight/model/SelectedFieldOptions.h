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
  enum class SelectedFieldOptions
  {
    NOT_SET,
    ALL_FIELDS
  };

namespace SelectedFieldOptionsMapper
{
AWS_QUICKSIGHT_API SelectedFieldOptions GetSelectedFieldOptionsForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSelectedFieldOptions(SelectedFieldOptions value);
} // namespace SelectedFieldOptionsMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
