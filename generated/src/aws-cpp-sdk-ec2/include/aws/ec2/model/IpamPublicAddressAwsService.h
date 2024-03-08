/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class IpamPublicAddressAwsService
  {
    NOT_SET,
    nat_gateway,
    database_migration_service,
    redshift,
    elastic_container_service,
    relational_database_service,
    site_to_site_vpn,
    load_balancer,
    global_accelerator,
    other
  };

namespace IpamPublicAddressAwsServiceMapper
{
AWS_EC2_API IpamPublicAddressAwsService GetIpamPublicAddressAwsServiceForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPublicAddressAwsService(IpamPublicAddressAwsService value);
} // namespace IpamPublicAddressAwsServiceMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
