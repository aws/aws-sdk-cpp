/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class RawValueType
  {
    NOT_SET,
    D,
    B,
    S,
    I,
    U
  };

namespace RawValueTypeMapper
{
AWS_IOTSITEWISE_API RawValueType GetRawValueTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForRawValueType(RawValueType value);
} // namespace RawValueTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
