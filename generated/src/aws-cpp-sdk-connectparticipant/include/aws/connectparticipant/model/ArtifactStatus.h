/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{
  enum class ArtifactStatus
  {
    NOT_SET,
    APPROVED,
    REJECTED,
    IN_PROGRESS
  };

namespace ArtifactStatusMapper
{
AWS_CONNECTPARTICIPANT_API ArtifactStatus GetArtifactStatusForName(const Aws::String& name);

AWS_CONNECTPARTICIPANT_API Aws::String GetNameForArtifactStatus(ArtifactStatus value);
} // namespace ArtifactStatusMapper
} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
