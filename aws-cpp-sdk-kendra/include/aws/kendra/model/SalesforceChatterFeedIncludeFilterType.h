/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class SalesforceChatterFeedIncludeFilterType
  {
    NOT_SET,
    ACTIVE_USER,
    STANDARD_USER
  };

namespace SalesforceChatterFeedIncludeFilterTypeMapper
{
AWS_KENDRA_API SalesforceChatterFeedIncludeFilterType GetSalesforceChatterFeedIncludeFilterTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForSalesforceChatterFeedIncludeFilterType(SalesforceChatterFeedIncludeFilterType value);
} // namespace SalesforceChatterFeedIncludeFilterTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
