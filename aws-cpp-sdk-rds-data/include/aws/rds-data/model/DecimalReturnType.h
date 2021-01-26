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
  enum class DecimalReturnType
  {
    NOT_SET,
    DOUBLE_OR_LONG,
    STRING
  };

namespace DecimalReturnTypeMapper
{
AWS_RDSDATASERVICE_API DecimalReturnType GetDecimalReturnTypeForName(const Aws::String& name);

AWS_RDSDATASERVICE_API Aws::String GetNameForDecimalReturnType(DecimalReturnType value);
} // namespace DecimalReturnTypeMapper
} // namespace Model
} // namespace RDSDataService
} // namespace Aws
