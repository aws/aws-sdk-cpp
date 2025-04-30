/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class TagPropagationMode
  {
    NOT_SET,
    NO_PROPAGATION,
    PROPAGATE_TAGS_TO_WORKERS_AT_LAUNCH
  };

namespace TagPropagationModeMapper
{
AWS_DEADLINE_API TagPropagationMode GetTagPropagationModeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForTagPropagationMode(TagPropagationMode value);
} // namespace TagPropagationModeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
