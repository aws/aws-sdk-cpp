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
  enum class Reaction
  {
    NOT_SET,
    ThumbsUp,
    ThumbsDown
  };

namespace ReactionMapper
{
AWS_CODEGURUREVIEWER_API Reaction GetReactionForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForReaction(Reaction value);
} // namespace ReactionMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
