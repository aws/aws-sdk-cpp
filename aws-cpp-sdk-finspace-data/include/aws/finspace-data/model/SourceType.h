/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class SourceType
  {
    NOT_SET,
    S3
  };

namespace SourceTypeMapper
{
AWS_FINSPACEDATA_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
