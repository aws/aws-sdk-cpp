/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class ConfigurationState
  {
    NOT_SET,
    ACTIVE,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED
  };

namespace ConfigurationStateMapper
{
AWS_IOTSITEWISE_API ConfigurationState GetConfigurationStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForConfigurationState(ConfigurationState value);
} // namespace ConfigurationStateMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
