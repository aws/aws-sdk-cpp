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
  enum class CommentStatusType
  {
    NOT_SET,
    DRAFT,
    PUBLISHED,
    DELETED
  };

namespace CommentStatusTypeMapper
{
AWS_WORKDOCS_API CommentStatusType GetCommentStatusTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForCommentStatusType(CommentStatusType value);
} // namespace CommentStatusTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
