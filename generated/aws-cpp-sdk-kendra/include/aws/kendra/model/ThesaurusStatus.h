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
  enum class ThesaurusStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    UPDATING,
    ACTIVE_BUT_UPDATE_FAILED,
    FAILED
  };

namespace ThesaurusStatusMapper
{
AWS_KENDRA_API ThesaurusStatus GetThesaurusStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForThesaurusStatus(ThesaurusStatus value);
} // namespace ThesaurusStatusMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
