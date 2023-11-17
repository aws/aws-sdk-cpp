/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPublicAddressAwsService.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace IpamPublicAddressAwsServiceMapper
      {

        static const int nat_gateway_HASH = HashingUtils::HashString("nat-gateway");
        static const int database_migration_service_HASH = HashingUtils::HashString("database-migration-service");
        static const int redshift_HASH = HashingUtils::HashString("redshift");
        static const int elastic_container_service_HASH = HashingUtils::HashString("elastic-container-service");
        static const int relational_database_service_HASH = HashingUtils::HashString("relational-database-service");
        static const int site_to_site_vpn_HASH = HashingUtils::HashString("site-to-site-vpn");
        static const int load_balancer_HASH = HashingUtils::HashString("load-balancer");
        static const int global_accelerator_HASH = HashingUtils::HashString("global-accelerator");
        static const int other_HASH = HashingUtils::HashString("other");


        IpamPublicAddressAwsService GetIpamPublicAddressAwsServiceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == nat_gateway_HASH)
          {
            return IpamPublicAddressAwsService::nat_gateway;
          }
          else if (hashCode == database_migration_service_HASH)
          {
            return IpamPublicAddressAwsService::database_migration_service;
          }
          else if (hashCode == redshift_HASH)
          {
            return IpamPublicAddressAwsService::redshift;
          }
          else if (hashCode == elastic_container_service_HASH)
          {
            return IpamPublicAddressAwsService::elastic_container_service;
          }
          else if (hashCode == relational_database_service_HASH)
          {
            return IpamPublicAddressAwsService::relational_database_service;
          }
          else if (hashCode == site_to_site_vpn_HASH)
          {
            return IpamPublicAddressAwsService::site_to_site_vpn;
          }
          else if (hashCode == load_balancer_HASH)
          {
            return IpamPublicAddressAwsService::load_balancer;
          }
          else if (hashCode == global_accelerator_HASH)
          {
            return IpamPublicAddressAwsService::global_accelerator;
          }
          else if (hashCode == other_HASH)
          {
            return IpamPublicAddressAwsService::other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPublicAddressAwsService>(hashCode);
          }

          return IpamPublicAddressAwsService::NOT_SET;
        }

        Aws::String GetNameForIpamPublicAddressAwsService(IpamPublicAddressAwsService enumValue)
        {
          switch(enumValue)
          {
          case IpamPublicAddressAwsService::NOT_SET:
            return {};
          case IpamPublicAddressAwsService::nat_gateway:
            return "nat-gateway";
          case IpamPublicAddressAwsService::database_migration_service:
            return "database-migration-service";
          case IpamPublicAddressAwsService::redshift:
            return "redshift";
          case IpamPublicAddressAwsService::elastic_container_service:
            return "elastic-container-service";
          case IpamPublicAddressAwsService::relational_database_service:
            return "relational-database-service";
          case IpamPublicAddressAwsService::site_to_site_vpn:
            return "site-to-site-vpn";
          case IpamPublicAddressAwsService::load_balancer:
            return "load-balancer";
          case IpamPublicAddressAwsService::global_accelerator:
            return "global-accelerator";
          case IpamPublicAddressAwsService::other:
            return "other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPublicAddressAwsServiceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
