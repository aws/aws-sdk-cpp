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
  enum class ScalarType
  {
    NOT_SET,
    BOOLEAN,
    INT,
    DOUBLE,
    TIMESTAMP,
    STRING
  };

namespace ScalarTypeMapper
{
AWS_IOTSITEWISE_API ScalarType GetScalarTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForScalarType(ScalarType value);
} // namespace ScalarTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
