/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{
  enum class ApplicationStatusReason
  {
    NOT_SET,
    internalError,
    accessDenied
  };

namespace ApplicationStatusReasonMapper
{
AWS_GAMELIFTSTREAMS_API ApplicationStatusReason GetApplicationStatusReasonForName(const Aws::String& name);

AWS_GAMELIFTSTREAMS_API Aws::String GetNameForApplicationStatusReason(ApplicationStatusReason value);
} // namespace ApplicationStatusReasonMapper
} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
