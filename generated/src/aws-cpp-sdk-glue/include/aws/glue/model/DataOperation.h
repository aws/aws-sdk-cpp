/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class DataOperation
  {
    NOT_SET,
    READ,
    WRITE
  };

namespace DataOperationMapper
{
AWS_GLUE_API DataOperation GetDataOperationForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataOperation(DataOperation value);
} // namespace DataOperationMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
