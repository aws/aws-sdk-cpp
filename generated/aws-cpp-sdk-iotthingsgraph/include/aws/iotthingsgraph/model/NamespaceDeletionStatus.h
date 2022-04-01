/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{
  enum class NamespaceDeletionStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace NamespaceDeletionStatusMapper
{
AWS_IOTTHINGSGRAPH_API NamespaceDeletionStatus GetNamespaceDeletionStatusForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForNamespaceDeletionStatus(NamespaceDeletionStatus value);
} // namespace NamespaceDeletionStatusMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
