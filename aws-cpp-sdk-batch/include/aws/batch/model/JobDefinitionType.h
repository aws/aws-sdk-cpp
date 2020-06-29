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
  enum class JobDefinitionType
  {
    NOT_SET,
    container,
    multinode
  };

namespace JobDefinitionTypeMapper
{
AWS_BATCH_API JobDefinitionType GetJobDefinitionTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForJobDefinitionType(JobDefinitionType value);
} // namespace JobDefinitionTypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
