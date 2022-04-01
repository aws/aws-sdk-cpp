/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class DsnAction
  {
    NOT_SET,
    failed,
    delayed,
    delivered,
    relayed,
    expanded
  };

namespace DsnActionMapper
{
AWS_SES_API DsnAction GetDsnActionForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForDsnAction(DsnAction value);
} // namespace DsnActionMapper
} // namespace Model
} // namespace SES
} // namespace Aws
