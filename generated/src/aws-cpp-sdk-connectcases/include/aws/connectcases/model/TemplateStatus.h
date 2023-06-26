/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class TemplateStatus
  {
    NOT_SET,
    Active,
    Inactive
  };

namespace TemplateStatusMapper
{
AWS_CONNECTCASES_API TemplateStatus GetTemplateStatusForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForTemplateStatus(TemplateStatus value);
} // namespace TemplateStatusMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
