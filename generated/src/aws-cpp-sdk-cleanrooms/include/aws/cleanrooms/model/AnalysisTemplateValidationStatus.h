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
  enum class AnalysisTemplateValidationStatus
  {
    NOT_SET,
    VALID,
    INVALID,
    UNABLE_TO_VALIDATE
  };

namespace AnalysisTemplateValidationStatusMapper
{
AWS_CLEANROOMS_API AnalysisTemplateValidationStatus GetAnalysisTemplateValidationStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAnalysisTemplateValidationStatus(AnalysisTemplateValidationStatus value);
} // namespace AnalysisTemplateValidationStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
