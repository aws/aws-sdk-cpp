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
  enum class SalesforceStandardObjectName
  {
    NOT_SET,
    ACCOUNT,
    CAMPAIGN,
    CASE,
    CONTACT,
    CONTRACT,
    DOCUMENT,
    GROUP,
    IDEA,
    LEAD,
    OPPORTUNITY,
    PARTNER,
    PRICEBOOK,
    PRODUCT,
    PROFILE,
    SOLUTION,
    TASK,
    USER
  };

namespace SalesforceStandardObjectNameMapper
{
AWS_KENDRA_API SalesforceStandardObjectName GetSalesforceStandardObjectNameForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForSalesforceStandardObjectName(SalesforceStandardObjectName value);
} // namespace SalesforceStandardObjectNameMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
