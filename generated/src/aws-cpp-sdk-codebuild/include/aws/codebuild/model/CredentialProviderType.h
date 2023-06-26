/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{
  enum class CredentialProviderType
  {
    NOT_SET,
    SECRETS_MANAGER
  };

namespace CredentialProviderTypeMapper
{
AWS_CODEBUILD_API CredentialProviderType GetCredentialProviderTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForCredentialProviderType(CredentialProviderType value);
} // namespace CredentialProviderTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
