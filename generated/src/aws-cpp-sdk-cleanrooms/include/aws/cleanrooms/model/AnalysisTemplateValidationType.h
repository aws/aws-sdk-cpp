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
  enum class AnalysisTemplateValidationType
  {
    NOT_SET,
    DIFFERENTIAL_PRIVACY
  };

namespace AnalysisTemplateValidationTypeMapper
{
AWS_CLEANROOMS_API AnalysisTemplateValidationType GetAnalysisTemplateValidationTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAnalysisTemplateValidationType(AnalysisTemplateValidationType value);
} // namespace AnalysisTemplateValidationTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
