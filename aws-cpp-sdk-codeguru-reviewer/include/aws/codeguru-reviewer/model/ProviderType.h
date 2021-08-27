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
  enum class ProviderType
  {
    NOT_SET,
    CodeCommit,
    GitHub,
    Bitbucket,
    GitHubEnterpriseServer
  };

namespace ProviderTypeMapper
{
AWS_CODEGURUREVIEWER_API ProviderType GetProviderTypeForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForProviderType(ProviderType value);
} // namespace ProviderTypeMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
