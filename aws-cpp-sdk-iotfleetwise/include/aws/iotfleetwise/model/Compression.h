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
  enum class Compression
  {
    NOT_SET,
    OFF,
    SNAPPY
  };

namespace CompressionMapper
{
AWS_IOTFLEETWISE_API Compression GetCompressionForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForCompression(Compression value);
} // namespace CompressionMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
