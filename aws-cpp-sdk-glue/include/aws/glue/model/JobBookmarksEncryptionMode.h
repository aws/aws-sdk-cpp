/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class JobBookmarksEncryptionMode
  {
    NOT_SET,
    DISABLED,
    CSE_KMS
  };

namespace JobBookmarksEncryptionModeMapper
{
AWS_GLUE_API JobBookmarksEncryptionMode GetJobBookmarksEncryptionModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForJobBookmarksEncryptionMode(JobBookmarksEncryptionMode value);
} // namespace JobBookmarksEncryptionModeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
