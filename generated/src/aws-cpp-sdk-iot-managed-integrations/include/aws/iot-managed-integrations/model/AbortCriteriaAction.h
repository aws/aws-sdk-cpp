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
  enum class AbortCriteriaAction
  {
    NOT_SET,
    CANCEL
  };

namespace AbortCriteriaActionMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API AbortCriteriaAction GetAbortCriteriaActionForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForAbortCriteriaAction(AbortCriteriaAction value);
} // namespace AbortCriteriaActionMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
