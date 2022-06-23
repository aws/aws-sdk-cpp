/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class ArtifactsState
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace ArtifactsStateMapper
{
AWS_CHIME_API ArtifactsState GetArtifactsStateForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForArtifactsState(ArtifactsState value);
} // namespace ArtifactsStateMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
