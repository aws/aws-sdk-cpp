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
  enum class EndpointType
  {
    NOT_SET,
    dualstack,
    ipv4
  };

namespace EndpointTypeMapper
{
AWS_CODEARTIFACT_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForEndpointType(EndpointType value);
} // namespace EndpointTypeMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
