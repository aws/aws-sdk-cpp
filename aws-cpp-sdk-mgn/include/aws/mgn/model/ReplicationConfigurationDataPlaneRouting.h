/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class ReplicationConfigurationDataPlaneRouting
  {
    NOT_SET,
    PRIVATE_IP,
    PUBLIC_IP
  };

namespace ReplicationConfigurationDataPlaneRoutingMapper
{
AWS_MGN_API ReplicationConfigurationDataPlaneRouting GetReplicationConfigurationDataPlaneRoutingForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForReplicationConfigurationDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value);
} // namespace ReplicationConfigurationDataPlaneRoutingMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
