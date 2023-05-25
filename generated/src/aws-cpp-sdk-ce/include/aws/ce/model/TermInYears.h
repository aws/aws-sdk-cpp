/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class TermInYears
  {
    NOT_SET,
    ONE_YEAR,
    THREE_YEARS
  };

namespace TermInYearsMapper
{
AWS_COSTEXPLORER_API TermInYears GetTermInYearsForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForTermInYears(TermInYears value);
} // namespace TermInYearsMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
