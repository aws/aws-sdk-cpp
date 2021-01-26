/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{
  enum class ChangeAction
  {
    NOT_SET,
    CREATE,
    DELETE_,
    UPSERT
  };

namespace ChangeActionMapper
{
AWS_ROUTE53_API ChangeAction GetChangeActionForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForChangeAction(ChangeAction value);
} // namespace ChangeActionMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
