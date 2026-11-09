/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class ArtifactHttpMethod { NOT_SET, GET_, HEAD, POST, PUT, PATCH, DELETE_, OPTIONS };

namespace ArtifactHttpMethodMapper {
AWS_CONTINUUM_API ArtifactHttpMethod GetArtifactHttpMethodForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForArtifactHttpMethod(ArtifactHttpMethod value);
}  // namespace ArtifactHttpMethodMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
