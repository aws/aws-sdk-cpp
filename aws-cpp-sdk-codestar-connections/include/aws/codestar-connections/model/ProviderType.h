/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{
  enum class ProviderType
  {
    NOT_SET,
    Bitbucket,
    GitHub,
    GitHubEnterpriseServer
  };

namespace ProviderTypeMapper
{
AWS_CODESTARCONNECTIONS_API ProviderType GetProviderTypeForName(const Aws::String& name);

AWS_CODESTARCONNECTIONS_API Aws::String GetNameForProviderType(ProviderType value);
} // namespace ProviderTypeMapper
} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
