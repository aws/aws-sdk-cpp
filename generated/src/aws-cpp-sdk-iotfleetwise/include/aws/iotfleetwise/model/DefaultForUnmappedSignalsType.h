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
  enum class DefaultForUnmappedSignalsType
  {
    NOT_SET,
    CUSTOM_DECODING
  };

namespace DefaultForUnmappedSignalsTypeMapper
{
AWS_IOTFLEETWISE_API DefaultForUnmappedSignalsType GetDefaultForUnmappedSignalsTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForDefaultForUnmappedSignalsType(DefaultForUnmappedSignalsType value);
} // namespace DefaultForUnmappedSignalsTypeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
