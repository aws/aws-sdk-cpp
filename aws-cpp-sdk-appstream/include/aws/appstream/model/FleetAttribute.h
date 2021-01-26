/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class FleetAttribute
  {
    NOT_SET,
    VPC_CONFIGURATION,
    VPC_CONFIGURATION_SECURITY_GROUP_IDS,
    DOMAIN_JOIN_INFO,
    IAM_ROLE_ARN
  };

namespace FleetAttributeMapper
{
AWS_APPSTREAM_API FleetAttribute GetFleetAttributeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForFleetAttribute(FleetAttribute value);
} // namespace FleetAttributeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
