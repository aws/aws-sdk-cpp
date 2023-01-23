/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{
  enum class ReplacementTypeEnum
  {
    NOT_SET,
    KEEP_BASE,
    KEEP_SOURCE,
    KEEP_DESTINATION,
    USE_NEW_CONTENT
  };

namespace ReplacementTypeEnumMapper
{
AWS_CODECOMMIT_API ReplacementTypeEnum GetReplacementTypeEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForReplacementTypeEnum(ReplacementTypeEnum value);
} // namespace ReplacementTypeEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
