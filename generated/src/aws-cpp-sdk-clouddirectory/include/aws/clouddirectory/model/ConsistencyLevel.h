/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{
  enum class ConsistencyLevel
  {
    NOT_SET,
    SERIALIZABLE,
    EVENTUAL
  };

namespace ConsistencyLevelMapper
{
AWS_CLOUDDIRECTORY_API ConsistencyLevel GetConsistencyLevelForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForConsistencyLevel(ConsistencyLevel value);
} // namespace ConsistencyLevelMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
