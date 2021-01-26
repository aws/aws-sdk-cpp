/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class ConnectorCapability
  {
    NOT_SET,
    VSPHERE,
    SCVMM,
    HYPERV_MANAGER,
    SNAPSHOT_BATCHING,
    SMS_OPTIMIZED
  };

namespace ConnectorCapabilityMapper
{
AWS_SMS_API ConnectorCapability GetConnectorCapabilityForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForConnectorCapability(ConnectorCapability value);
} // namespace ConnectorCapabilityMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
