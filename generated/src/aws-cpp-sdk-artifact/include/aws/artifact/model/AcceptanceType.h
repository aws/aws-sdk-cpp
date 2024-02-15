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
  enum class AcceptanceType
  {
    NOT_SET,
    PASSTHROUGH,
    EXPLICIT
  };

namespace AcceptanceTypeMapper
{
AWS_ARTIFACT_API AcceptanceType GetAcceptanceTypeForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForAcceptanceType(AcceptanceType value);
} // namespace AcceptanceTypeMapper
} // namespace Model
} // namespace Artifact
} // namespace Aws
