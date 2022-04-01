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
  enum class NamespaceDeletionStatusErrorCodes
  {
    NOT_SET,
    VALIDATION_FAILED
  };

namespace NamespaceDeletionStatusErrorCodesMapper
{
AWS_IOTTHINGSGRAPH_API NamespaceDeletionStatusErrorCodes GetNamespaceDeletionStatusErrorCodesForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForNamespaceDeletionStatusErrorCodes(NamespaceDeletionStatusErrorCodes value);
} // namespace NamespaceDeletionStatusErrorCodesMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
