/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDSDataService
{
namespace Model
{
  enum class LongReturnType
  {
    NOT_SET,
    STRING,
    LONG
  };

namespace LongReturnTypeMapper
{
AWS_RDSDATASERVICE_API LongReturnType GetLongReturnTypeForName(const Aws::String& name);

AWS_RDSDATASERVICE_API Aws::String GetNameForLongReturnType(LongReturnType value);
} // namespace LongReturnTypeMapper
} // namespace Model
} // namespace RDSDataService
} // namespace Aws
