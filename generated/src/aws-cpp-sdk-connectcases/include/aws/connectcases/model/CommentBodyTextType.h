/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class CommentBodyTextType
  {
    NOT_SET,
    Text_Plain
  };

namespace CommentBodyTextTypeMapper
{
AWS_CONNECTCASES_API CommentBodyTextType GetCommentBodyTextTypeForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForCommentBodyTextType(CommentBodyTextType value);
} // namespace CommentBodyTextTypeMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
