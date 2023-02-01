/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class RegistrationStatus
  {
    NOT_SET,
    REGISTRATION_PENDING,
    REGISTRATION_SUCCESS,
    REGISTRATION_FAILURE
  };

namespace RegistrationStatusMapper
{
AWS_IOTFLEETWISE_API RegistrationStatus GetRegistrationStatusForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForRegistrationStatus(RegistrationStatus value);
} // namespace RegistrationStatusMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
