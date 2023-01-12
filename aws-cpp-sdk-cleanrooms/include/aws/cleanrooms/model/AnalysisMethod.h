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
  enum class AnalysisMethod
  {
    NOT_SET,
    DIRECT_QUERY
  };

namespace AnalysisMethodMapper
{
AWS_CLEANROOMS_API AnalysisMethod GetAnalysisMethodForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAnalysisMethod(AnalysisMethod value);
} // namespace AnalysisMethodMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
