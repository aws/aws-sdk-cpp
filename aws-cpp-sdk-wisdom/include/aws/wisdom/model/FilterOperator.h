/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class FilterOperator
  {
    NOT_SET,
    EQUALS
  };

namespace FilterOperatorMapper
{
AWS_CONNECTWISDOMSERVICE_API FilterOperator GetFilterOperatorForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForFilterOperator(FilterOperator value);
} // namespace FilterOperatorMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
