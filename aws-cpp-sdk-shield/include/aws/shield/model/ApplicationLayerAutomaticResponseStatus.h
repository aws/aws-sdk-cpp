/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class ApplicationLayerAutomaticResponseStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ApplicationLayerAutomaticResponseStatusMapper
{
AWS_SHIELD_API ApplicationLayerAutomaticResponseStatus GetApplicationLayerAutomaticResponseStatusForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForApplicationLayerAutomaticResponseStatus(ApplicationLayerAutomaticResponseStatus value);
} // namespace ApplicationLayerAutomaticResponseStatusMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
