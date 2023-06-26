/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{
  enum class AllowUpstream
  {
    NOT_SET,
    ALLOW,
    BLOCK
  };

namespace AllowUpstreamMapper
{
AWS_CODEARTIFACT_API AllowUpstream GetAllowUpstreamForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForAllowUpstream(AllowUpstream value);
} // namespace AllowUpstreamMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
