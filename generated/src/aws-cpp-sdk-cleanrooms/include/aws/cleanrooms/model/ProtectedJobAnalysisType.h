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
  enum class ProtectedJobAnalysisType
  {
    NOT_SET,
    DIRECT_ANALYSIS
  };

namespace ProtectedJobAnalysisTypeMapper
{
AWS_CLEANROOMS_API ProtectedJobAnalysisType GetProtectedJobAnalysisTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForProtectedJobAnalysisType(ProtectedJobAnalysisType value);
} // namespace ProtectedJobAnalysisTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
