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
  enum class ExternalConnectionStatus
  {
    NOT_SET,
    Available
  };

namespace ExternalConnectionStatusMapper
{
AWS_CODEARTIFACT_API ExternalConnectionStatus GetExternalConnectionStatusForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForExternalConnectionStatus(ExternalConnectionStatus value);
} // namespace ExternalConnectionStatusMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
