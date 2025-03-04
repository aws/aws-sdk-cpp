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
  enum class RetryCriteriaFailureType
  {
    NOT_SET,
    FAILED,
    TIMED_OUT,
    ALL
  };

namespace RetryCriteriaFailureTypeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API RetryCriteriaFailureType GetRetryCriteriaFailureTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForRetryCriteriaFailureType(RetryCriteriaFailureType value);
} // namespace RetryCriteriaFailureTypeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
