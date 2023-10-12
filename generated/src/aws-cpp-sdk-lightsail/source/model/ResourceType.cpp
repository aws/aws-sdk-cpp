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

        static constexpr uint32_t ContainerService_HASH = ConstExprHashingUtils::HashString("ContainerService");
        static constexpr uint32_t Instance_HASH = ConstExprHashingUtils::HashString("Instance");
        static constexpr uint32_t StaticIp_HASH = ConstExprHashingUtils::HashString("StaticIp");
        static constexpr uint32_t KeyPair_HASH = ConstExprHashingUtils::HashString("KeyPair");
        static constexpr uint32_t InstanceSnapshot_HASH = ConstExprHashingUtils::HashString("InstanceSnapshot");
        static constexpr uint32_t Domain_HASH = ConstExprHashingUtils::HashString("Domain");
        static constexpr uint32_t PeeredVpc_HASH = ConstExprHashingUtils::HashString("PeeredVpc");
        static constexpr uint32_t LoadBalancer_HASH = ConstExprHashingUtils::HashString("LoadBalancer");
        static constexpr uint32_t LoadBalancerTlsCertificate_HASH = ConstExprHashingUtils::HashString("LoadBalancerTlsCertificate");
        static constexpr uint32_t Disk_HASH = ConstExprHashingUtils::HashString("Disk");
        static constexpr uint32_t DiskSnapshot_HASH = ConstExprHashingUtils::HashString("DiskSnapshot");
        static constexpr uint32_t RelationalDatabase_HASH = ConstExprHashingUtils::HashString("RelationalDatabase");
        static constexpr uint32_t RelationalDatabaseSnapshot_HASH = ConstExprHashingUtils::HashString("RelationalDatabaseSnapshot");
        static constexpr uint32_t ExportSnapshotRecord_HASH = ConstExprHashingUtils::HashString("ExportSnapshotRecord");
        static constexpr uint32_t CloudFormationStackRecord_HASH = ConstExprHashingUtils::HashString("CloudFormationStackRecord");
        static constexpr uint32_t Alarm_HASH = ConstExprHashingUtils::HashString("Alarm");
        static constexpr uint32_t ContactMethod_HASH = ConstExprHashingUtils::HashString("ContactMethod");
        static constexpr uint32_t Distribution_HASH = ConstExprHashingUtils::HashString("Distribution");
        static constexpr uint32_t Certificate_HASH = ConstExprHashingUtils::HashString("Certificate");
        static constexpr uint32_t Bucket_HASH = ConstExprHashingUtils::HashString("Bucket");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == Bucket_HASH)
          {
            return ResourceType::Bucket;
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
          case ResourceType::NOT_SET:
            return {};
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
          case ResourceType::Bucket:
            return "Bucket";
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
