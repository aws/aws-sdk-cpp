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
  enum class ObjectTypeEnum
  {
    NOT_SET,
    FILE,
    DIRECTORY,
    GIT_LINK,
    SYMBOLIC_LINK
  };

namespace ObjectTypeEnumMapper
{
AWS_CODECOMMIT_API ObjectTypeEnum GetObjectTypeEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForObjectTypeEnum(ObjectTypeEnum value);
} // namespace ObjectTypeEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
