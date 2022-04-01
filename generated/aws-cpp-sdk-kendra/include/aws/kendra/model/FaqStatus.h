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
  enum class FaqStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    ACTIVE,
    DELETING,
    FAILED
  };

namespace FaqStatusMapper
{
AWS_KENDRA_API FaqStatus GetFaqStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForFaqStatus(FaqStatus value);
} // namespace FaqStatusMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
