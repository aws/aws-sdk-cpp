/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class OrderBy
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace OrderByMapper
{
AWS_ACCESSANALYZER_API OrderBy GetOrderByForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForOrderBy(OrderBy value);
} // namespace OrderByMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
