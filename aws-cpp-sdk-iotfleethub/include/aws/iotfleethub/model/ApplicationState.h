/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetHub
{
namespace Model
{
  enum class ApplicationState
  {
    NOT_SET,
    CREATING,
    DELETING,
    ACTIVE,
    CREATE_FAILED,
    DELETE_FAILED
  };

namespace ApplicationStateMapper
{
AWS_IOTFLEETHUB_API ApplicationState GetApplicationStateForName(const Aws::String& name);

AWS_IOTFLEETHUB_API Aws::String GetNameForApplicationState(ApplicationState value);
} // namespace ApplicationStateMapper
} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
