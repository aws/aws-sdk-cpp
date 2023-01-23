/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class QuotaPeriodType
  {
    NOT_SET,
    DAY,
    WEEK,
    MONTH
  };

namespace QuotaPeriodTypeMapper
{
AWS_APIGATEWAY_API QuotaPeriodType GetQuotaPeriodTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForQuotaPeriodType(QuotaPeriodType value);
} // namespace QuotaPeriodTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
