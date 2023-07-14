/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class StringFilterComparison
  {
    NOT_SET,
    EQUALS,
    PREFIX,
    NOT_EQUALS,
    PREFIX_NOT_EQUALS
  };

namespace StringFilterComparisonMapper
{
AWS_SECURITYHUB_API StringFilterComparison GetStringFilterComparisonForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForStringFilterComparison(StringFilterComparison value);
} // namespace StringFilterComparisonMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
