/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class SourceRevisionType
  {
    NOT_SET,
    COMMIT_ID,
    IMAGE_DIGEST,
    S3_OBJECT_VERSION_ID
  };

namespace SourceRevisionTypeMapper
{
AWS_CODEPIPELINE_API SourceRevisionType GetSourceRevisionTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForSourceRevisionType(SourceRevisionType value);
} // namespace SourceRevisionTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
