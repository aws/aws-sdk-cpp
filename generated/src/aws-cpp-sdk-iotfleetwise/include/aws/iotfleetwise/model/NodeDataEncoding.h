/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class NodeDataEncoding
  {
    NOT_SET,
    BINARY,
    TYPED
  };

namespace NodeDataEncodingMapper
{
AWS_IOTFLEETWISE_API NodeDataEncoding GetNodeDataEncodingForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForNodeDataEncoding(NodeDataEncoding value);
} // namespace NodeDataEncodingMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
