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
  enum class RepositoryTriggerEventEnum
  {
    NOT_SET,
    all,
    updateReference,
    createReference,
    deleteReference
  };

namespace RepositoryTriggerEventEnumMapper
{
AWS_CODECOMMIT_API RepositoryTriggerEventEnum GetRepositoryTriggerEventEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForRepositoryTriggerEventEnum(RepositoryTriggerEventEnum value);
} // namespace RepositoryTriggerEventEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
