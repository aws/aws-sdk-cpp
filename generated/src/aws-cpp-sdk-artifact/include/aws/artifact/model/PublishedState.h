/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Artifact
{
namespace Model
{
  enum class PublishedState
  {
    NOT_SET,
    PUBLISHED,
    UNPUBLISHED
  };

namespace PublishedStateMapper
{
AWS_ARTIFACT_API PublishedState GetPublishedStateForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForPublishedState(PublishedState value);
} // namespace PublishedStateMapper
} // namespace Model
} // namespace Artifact
} // namespace Aws
