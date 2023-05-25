/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class DatasetType
  {
    NOT_SET,
    TRAIN,
    TEST
  };

namespace DatasetTypeMapper
{
AWS_COMPREHEND_API DatasetType GetDatasetTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForDatasetType(DatasetType value);
} // namespace DatasetTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
