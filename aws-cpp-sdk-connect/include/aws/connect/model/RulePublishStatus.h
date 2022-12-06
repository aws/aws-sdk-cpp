/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class RulePublishStatus
  {
    NOT_SET,
    DRAFT,
    PUBLISHED
  };

namespace RulePublishStatusMapper
{
AWS_CONNECT_API RulePublishStatus GetRulePublishStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRulePublishStatus(RulePublishStatus value);
} // namespace RulePublishStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
