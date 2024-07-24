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
  enum class AdditionalAnalyses
  {
    NOT_SET,
    ALLOWED,
    REQUIRED,
    NOT_ALLOWED
  };

namespace AdditionalAnalysesMapper
{
AWS_CLEANROOMS_API AdditionalAnalyses GetAdditionalAnalysesForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAdditionalAnalyses(AdditionalAnalyses value);
} // namespace AdditionalAnalysesMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
