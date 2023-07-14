/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
{
namespace Model
{
  enum class ChangeAction
  {
    NOT_SET,
    INSERT,
    DELETE_
  };

namespace ChangeActionMapper
{
AWS_WAF_API ChangeAction GetChangeActionForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForChangeAction(ChangeAction value);
} // namespace ChangeActionMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
