/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMRServerless
{
namespace Model
{
  enum class ApplicationState
  {
    NOT_SET,
    CREATING,
    CREATED,
    STARTING,
    STARTED,
    STOPPING,
    STOPPED,
    TERMINATED
  };

namespace ApplicationStateMapper
{
AWS_EMRSERVERLESS_API ApplicationState GetApplicationStateForName(const Aws::String& name);

AWS_EMRSERVERLESS_API Aws::String GetNameForApplicationState(ApplicationState value);
} // namespace ApplicationStateMapper
} // namespace Model
} // namespace EMRServerless
} // namespace Aws
