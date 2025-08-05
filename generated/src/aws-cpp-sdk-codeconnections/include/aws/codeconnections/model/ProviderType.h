/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{
  enum class ProviderType
  {
    NOT_SET,
    Bitbucket,
    GitHub,
    GitHubEnterpriseServer,
    GitLab,
    GitLabSelfManaged,
    AzureDevOps
  };

namespace ProviderTypeMapper
{
AWS_CODECONNECTIONS_API ProviderType GetProviderTypeForName(const Aws::String& name);

AWS_CODECONNECTIONS_API Aws::String GetNameForProviderType(ProviderType value);
} // namespace ProviderTypeMapper
} // namespace Model
} // namespace CodeConnections
} // namespace Aws
