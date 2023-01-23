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
  enum class ChangeTypeEnum
  {
    NOT_SET,
    A,
    M,
    D
  };

namespace ChangeTypeEnumMapper
{
AWS_CODECOMMIT_API ChangeTypeEnum GetChangeTypeEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForChangeTypeEnum(ChangeTypeEnum value);
} // namespace ChangeTypeEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
