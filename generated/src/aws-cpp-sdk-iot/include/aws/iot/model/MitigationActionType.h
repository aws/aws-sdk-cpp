/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class MitigationActionType
  {
    NOT_SET,
    UPDATE_DEVICE_CERTIFICATE,
    UPDATE_CA_CERTIFICATE,
    ADD_THINGS_TO_THING_GROUP,
    REPLACE_DEFAULT_POLICY_VERSION,
    ENABLE_IOT_LOGGING,
    PUBLISH_FINDING_TO_SNS
  };

namespace MitigationActionTypeMapper
{
AWS_IOT_API MitigationActionType GetMitigationActionTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForMitigationActionType(MitigationActionType value);
} // namespace MitigationActionTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
