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
  enum class AnalysisType
  {
    NOT_SET,
    DIRECT_ANALYSIS,
    ADDITIONAL_ANALYSIS
  };

namespace AnalysisTypeMapper
{
AWS_CLEANROOMS_API AnalysisType GetAnalysisTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAnalysisType(AnalysisType value);
} // namespace AnalysisTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
