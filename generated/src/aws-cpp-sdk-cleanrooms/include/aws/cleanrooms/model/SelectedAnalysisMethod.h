/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class SelectedAnalysisMethod
  {
    NOT_SET,
    DIRECT_QUERY,
    DIRECT_JOB
  };

namespace SelectedAnalysisMethodMapper
{
AWS_CLEANROOMS_API SelectedAnalysisMethod GetSelectedAnalysisMethodForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForSelectedAnalysisMethod(SelectedAnalysisMethod value);
} // namespace SelectedAnalysisMethodMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
