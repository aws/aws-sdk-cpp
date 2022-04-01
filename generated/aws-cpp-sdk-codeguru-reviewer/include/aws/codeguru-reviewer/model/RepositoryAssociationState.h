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
  enum class RepositoryAssociationState
  {
    NOT_SET,
    Associated,
    Associating,
    Failed,
    Disassociating,
    Disassociated
  };

namespace RepositoryAssociationStateMapper
{
AWS_CODEGURUREVIEWER_API RepositoryAssociationState GetRepositoryAssociationStateForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForRepositoryAssociationState(RepositoryAssociationState value);
} // namespace RepositoryAssociationStateMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
