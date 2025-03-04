/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class AbortCriteriaFailureType
  {
    NOT_SET,
    FAILED,
    REJECTED,
    TIMED_OUT,
    ALL
  };

namespace AbortCriteriaFailureTypeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API AbortCriteriaFailureType GetAbortCriteriaFailureTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForAbortCriteriaFailureType(AbortCriteriaFailureType value);
} // namespace AbortCriteriaFailureTypeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
