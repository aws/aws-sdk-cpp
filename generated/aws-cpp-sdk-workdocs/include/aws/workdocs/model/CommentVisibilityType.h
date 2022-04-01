/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class CommentVisibilityType
  {
    NOT_SET,
    PUBLIC_,
    PRIVATE_
  };

namespace CommentVisibilityTypeMapper
{
AWS_WORKDOCS_API CommentVisibilityType GetCommentVisibilityTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForCommentVisibilityType(CommentVisibilityType value);
} // namespace CommentVisibilityTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
