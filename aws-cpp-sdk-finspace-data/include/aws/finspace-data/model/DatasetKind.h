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
  enum class DatasetKind
  {
    NOT_SET,
    TABULAR,
    NON_TABULAR
  };

namespace DatasetKindMapper
{
AWS_FINSPACEDATA_API DatasetKind GetDatasetKindForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForDatasetKind(DatasetKind value);
} // namespace DatasetKindMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
