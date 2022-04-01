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
  enum class ChangeType
  {
    NOT_SET,
    REPLACE,
    APPEND,
    MODIFY
  };

namespace ChangeTypeMapper
{
AWS_FINSPACEDATA_API ChangeType GetChangeTypeForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForChangeType(ChangeType value);
} // namespace ChangeTypeMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
