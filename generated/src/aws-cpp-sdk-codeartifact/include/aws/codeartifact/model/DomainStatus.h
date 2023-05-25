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
  enum class DomainStatus
  {
    NOT_SET,
    Active,
    Deleted
  };

namespace DomainStatusMapper
{
AWS_CODEARTIFACT_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForDomainStatus(DomainStatus value);
} // namespace DomainStatusMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
