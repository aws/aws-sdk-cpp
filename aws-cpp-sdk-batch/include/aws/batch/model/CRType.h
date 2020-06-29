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
  enum class CRType
  {
    NOT_SET,
    EC2,
    SPOT
  };

namespace CRTypeMapper
{
AWS_BATCH_API CRType GetCRTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForCRType(CRType value);
} // namespace CRTypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
