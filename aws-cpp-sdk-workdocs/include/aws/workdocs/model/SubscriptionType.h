/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class SubscriptionType
  {
    NOT_SET,
    ALL
  };

namespace SubscriptionTypeMapper
{
AWS_WORKDOCS_API SubscriptionType GetSubscriptionTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForSubscriptionType(SubscriptionType value);
} // namespace SubscriptionTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
