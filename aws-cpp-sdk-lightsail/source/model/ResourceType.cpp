/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int ContainerService_HASH = HashingUtils::HashString("ContainerService");
        static const int Instance_HASH = HashingUtils::HashString("Instance");
        static const int StaticIp_HASH = HashingUtils::HashString("StaticIp");
        static const int KeyPair_HASH = HashingUtils::HashString("KeyPair");
        static const int InstanceSnapshot_HASH = HashingUtils::HashString("InstanceSnapshot");
        static const int Domain_HASH = HashingUtils::HashString("Domain");
        static const int PeeredVpc_HASH = HashingUtils::HashString("PeeredVpc");
        static const int LoadBalancer_HASH = HashingUtils::HashString("LoadBalancer");
        static const int LoadBalancerTlsCertificate_HASH = HashingUtils::HashString("LoadBalancerTlsCertificate");
        static const int Disk_HASH = HashingUtils::HashString("Disk");
        static const int DiskSnapshot_HASH = HashingUtils::HashString("DiskSnapshot");
        static const int RelationalDatabase_HASH = HashingUtils::HashString("RelationalDatabase");
        static const int RelationalDatabaseSnapshot_HASH = HashingUtils::HashString("RelationalDatabaseSnapshot");
        static const int ExportSnapshotRecord_HASH = HashingUtils::HashString("ExportSnapshotRecord");
        static const int CloudFormationStackRecord_HASH = HashingUtils::HashString("CloudFormationStackRecord");
        static const int Alarm_HASH = HashingUtils::HashString("Alarm");
        static const int ContactMethod_HASH = HashingUtils::HashString("ContactMethod");
        static const int Distribution_HASH = HashingUtils::HashString("Distribution");
        static const int Certificate_HASH = HashingUtils::HashString("Certificate");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ContainerService_HASH)
          {
            return ResourceType::ContainerService;
          }
          else if (hashCode == Instance_HASH)
          {
            return ResourceType::Instance;
          }
          else if (hashCode == StaticIp_HASH)
          {
            return ResourceType::StaticIp;
          }
          else if (hashCode == KeyPair_HASH)
          {
            return ResourceType::KeyPair;
          }
          else if (hashCode == InstanceSnapshot_HASH)
          {
            return ResourceType::InstanceSnapshot;
          }
          else if (hashCode == Domain_HASH)
          {
            return ResourceType::Domain;
          }
          else if (hashCode == PeeredVpc_HASH)
          {
            return ResourceType::PeeredVpc;
          }
          else if (hashCode == LoadBalancer_HASH)
          {
            return ResourceType::LoadBalancer;
          }
          else if (hashCode == LoadBalancerTlsCertificate_HASH)
          {
            return ResourceType::LoadBalancerTlsCertificate;
          }
          else if (hashCode == Disk_HASH)
          {
            return ResourceType::Disk;
          }
          else if (hashCode == DiskSnapshot_HASH)
          {
            return ResourceType::DiskSnapshot;
          }
          else if (hashCode == RelationalDatabase_HASH)
          {
            return ResourceType::RelationalDatabase;
          }
          else if (hashCode == RelationalDatabaseSnapshot_HASH)
          {
            return ResourceType::RelationalDatabaseSnapshot;
          }
          else if (hashCode == ExportSnapshotRecord_HASH)
          {
            return ResourceType::ExportSnapshotRecord;
          }
          else if (hashCode == CloudFormationStackRecord_HASH)
          {
            return ResourceType::CloudFormationStackRecord;
          }
          else if (hashCode == Alarm_HASH)
          {
            return ResourceType::Alarm;
          }
          else if (hashCode == ContactMethod_HASH)
          {
            return ResourceType::ContactMethod;
          }
          else if (hashCode == Distribution_HASH)
          {
            return ResourceType::Distribution;
          }
          else if (hashCode == Certificate_HASH)
          {
            return ResourceType::Certificate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::ContainerService:
            return "ContainerService";
          case ResourceType::Instance:
            return "Instance";
          case ResourceType::StaticIp:
            return "StaticIp";
          case ResourceType::KeyPair:
            return "KeyPair";
          case ResourceType::InstanceSnapshot:
            return "InstanceSnapshot";
          case ResourceType::Domain:
            return "Domain";
          case ResourceType::PeeredVpc:
            return "PeeredVpc";
          case ResourceType::LoadBalancer:
            return "LoadBalancer";
          case ResourceType::LoadBalancerTlsCertificate:
            return "LoadBalancerTlsCertificate";
          case ResourceType::Disk:
            return "Disk";
          case ResourceType::DiskSnapshot:
            return "DiskSnapshot";
          case ResourceType::RelationalDatabase:
            return "RelationalDatabase";
          case ResourceType::RelationalDatabaseSnapshot:
            return "RelationalDatabaseSnapshot";
          case ResourceType::ExportSnapshotRecord:
            return "ExportSnapshotRecord";
          case ResourceType::CloudFormationStackRecord:
            return "CloudFormationStackRecord";
          case ResourceType::Alarm:
            return "Alarm";
          case ResourceType::ContactMethod:
            return "ContactMethod";
          case ResourceType::Distribution:
            return "Distribution";
          case ResourceType::Certificate:
            return "Certificate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
