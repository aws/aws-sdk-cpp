/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EFS
{
namespace Model
{
  enum class ThroughputMode
  {
    NOT_SET,
    bursting,
    provisioned,
    elastic
  };

namespace ThroughputModeMapper
{
AWS_EFS_API ThroughputMode GetThroughputModeForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForThroughputMode(ThroughputMode value);
} // namespace ThroughputModeMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
