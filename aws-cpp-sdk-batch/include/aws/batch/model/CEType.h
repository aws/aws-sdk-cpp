/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class CEType
  {
    NOT_SET,
    MANAGED,
    UNMANAGED
  };

namespace CETypeMapper
{
AWS_BATCH_API CEType GetCETypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForCEType(CEType value);
} // namespace CETypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
