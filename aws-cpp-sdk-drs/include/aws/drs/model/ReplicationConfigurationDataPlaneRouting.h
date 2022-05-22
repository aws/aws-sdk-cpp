/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
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
AWS_DRS_API ReplicationConfigurationDataPlaneRouting GetReplicationConfigurationDataPlaneRoutingForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForReplicationConfigurationDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value);
} // namespace ReplicationConfigurationDataPlaneRoutingMapper
} // namespace Model
} // namespace drs
} // namespace Aws
