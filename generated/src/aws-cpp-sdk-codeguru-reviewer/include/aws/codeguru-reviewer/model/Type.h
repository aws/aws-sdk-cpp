/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    PullRequest,
    RepositoryAnalysis
  };

namespace TypeMapper
{
AWS_CODEGURUREVIEWER_API Type GetTypeForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
