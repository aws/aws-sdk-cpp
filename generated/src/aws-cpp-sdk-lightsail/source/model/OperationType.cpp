/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/OperationType.h>
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
      namespace OperationTypeMapper
      {

        static constexpr uint32_t DeleteKnownHostKeys_HASH = ConstExprHashingUtils::HashString("DeleteKnownHostKeys");
        static constexpr uint32_t DeleteInstance_HASH = ConstExprHashingUtils::HashString("DeleteInstance");
        static constexpr uint32_t CreateInstance_HASH = ConstExprHashingUtils::HashString("CreateInstance");
        static constexpr uint32_t StopInstance_HASH = ConstExprHashingUtils::HashString("StopInstance");
        static constexpr uint32_t StartInstance_HASH = ConstExprHashingUtils::HashString("StartInstance");
        static constexpr uint32_t RebootInstance_HASH = ConstExprHashingUtils::HashString("RebootInstance");
        static constexpr uint32_t OpenInstancePublicPorts_HASH = ConstExprHashingUtils::HashString("OpenInstancePublicPorts");
        static constexpr uint32_t PutInstancePublicPorts_HASH = ConstExprHashingUtils::HashString("PutInstancePublicPorts");
        static constexpr uint32_t CloseInstancePublicPorts_HASH = ConstExprHashingUtils::HashString("CloseInstancePublicPorts");
        static constexpr uint32_t AllocateStaticIp_HASH = ConstExprHashingUtils::HashString("AllocateStaticIp");
        static constexpr uint32_t ReleaseStaticIp_HASH = ConstExprHashingUtils::HashString("ReleaseStaticIp");
        static constexpr uint32_t AttachStaticIp_HASH = ConstExprHashingUtils::HashString("AttachStaticIp");
        static constexpr uint32_t DetachStaticIp_HASH = ConstExprHashingUtils::HashString("DetachStaticIp");
        static constexpr uint32_t UpdateDomainEntry_HASH = ConstExprHashingUtils::HashString("UpdateDomainEntry");
        static constexpr uint32_t DeleteDomainEntry_HASH = ConstExprHashingUtils::HashString("DeleteDomainEntry");
        static constexpr uint32_t CreateDomain_HASH = ConstExprHashingUtils::HashString("CreateDomain");
        static constexpr uint32_t DeleteDomain_HASH = ConstExprHashingUtils::HashString("DeleteDomain");
        static constexpr uint32_t CreateInstanceSnapshot_HASH = ConstExprHashingUtils::HashString("CreateInstanceSnapshot");
        static constexpr uint32_t DeleteInstanceSnapshot_HASH = ConstExprHashingUtils::HashString("DeleteInstanceSnapshot");
        static constexpr uint32_t CreateInstancesFromSnapshot_HASH = ConstExprHashingUtils::HashString("CreateInstancesFromSnapshot");
        static constexpr uint32_t CreateLoadBalancer_HASH = ConstExprHashingUtils::HashString("CreateLoadBalancer");
        static constexpr uint32_t DeleteLoadBalancer_HASH = ConstExprHashingUtils::HashString("DeleteLoadBalancer");
        static constexpr uint32_t AttachInstancesToLoadBalancer_HASH = ConstExprHashingUtils::HashString("AttachInstancesToLoadBalancer");
        static constexpr uint32_t DetachInstancesFromLoadBalancer_HASH = ConstExprHashingUtils::HashString("DetachInstancesFromLoadBalancer");
        static constexpr uint32_t UpdateLoadBalancerAttribute_HASH = ConstExprHashingUtils::HashString("UpdateLoadBalancerAttribute");
        static constexpr uint32_t CreateLoadBalancerTlsCertificate_HASH = ConstExprHashingUtils::HashString("CreateLoadBalancerTlsCertificate");
        static constexpr uint32_t DeleteLoadBalancerTlsCertificate_HASH = ConstExprHashingUtils::HashString("DeleteLoadBalancerTlsCertificate");
        static constexpr uint32_t AttachLoadBalancerTlsCertificate_HASH = ConstExprHashingUtils::HashString("AttachLoadBalancerTlsCertificate");
        static constexpr uint32_t CreateDisk_HASH = ConstExprHashingUtils::HashString("CreateDisk");
        static constexpr uint32_t DeleteDisk_HASH = ConstExprHashingUtils::HashString("DeleteDisk");
        static constexpr uint32_t AttachDisk_HASH = ConstExprHashingUtils::HashString("AttachDisk");
        static constexpr uint32_t DetachDisk_HASH = ConstExprHashingUtils::HashString("DetachDisk");
        static constexpr uint32_t CreateDiskSnapshot_HASH = ConstExprHashingUtils::HashString("CreateDiskSnapshot");
        static constexpr uint32_t DeleteDiskSnapshot_HASH = ConstExprHashingUtils::HashString("DeleteDiskSnapshot");
        static constexpr uint32_t CreateDiskFromSnapshot_HASH = ConstExprHashingUtils::HashString("CreateDiskFromSnapshot");
        static constexpr uint32_t CreateRelationalDatabase_HASH = ConstExprHashingUtils::HashString("CreateRelationalDatabase");
        static constexpr uint32_t UpdateRelationalDatabase_HASH = ConstExprHashingUtils::HashString("UpdateRelationalDatabase");
        static constexpr uint32_t DeleteRelationalDatabase_HASH = ConstExprHashingUtils::HashString("DeleteRelationalDatabase");
        static constexpr uint32_t CreateRelationalDatabaseFromSnapshot_HASH = ConstExprHashingUtils::HashString("CreateRelationalDatabaseFromSnapshot");
        static constexpr uint32_t CreateRelationalDatabaseSnapshot_HASH = ConstExprHashingUtils::HashString("CreateRelationalDatabaseSnapshot");
        static constexpr uint32_t DeleteRelationalDatabaseSnapshot_HASH = ConstExprHashingUtils::HashString("DeleteRelationalDatabaseSnapshot");
        static constexpr uint32_t UpdateRelationalDatabaseParameters_HASH = ConstExprHashingUtils::HashString("UpdateRelationalDatabaseParameters");
        static constexpr uint32_t StartRelationalDatabase_HASH = ConstExprHashingUtils::HashString("StartRelationalDatabase");
        static constexpr uint32_t RebootRelationalDatabase_HASH = ConstExprHashingUtils::HashString("RebootRelationalDatabase");
        static constexpr uint32_t StopRelationalDatabase_HASH = ConstExprHashingUtils::HashString("StopRelationalDatabase");
        static constexpr uint32_t EnableAddOn_HASH = ConstExprHashingUtils::HashString("EnableAddOn");
        static constexpr uint32_t DisableAddOn_HASH = ConstExprHashingUtils::HashString("DisableAddOn");
        static constexpr uint32_t PutAlarm_HASH = ConstExprHashingUtils::HashString("PutAlarm");
        static constexpr uint32_t GetAlarms_HASH = ConstExprHashingUtils::HashString("GetAlarms");
        static constexpr uint32_t DeleteAlarm_HASH = ConstExprHashingUtils::HashString("DeleteAlarm");
        static constexpr uint32_t TestAlarm_HASH = ConstExprHashingUtils::HashString("TestAlarm");
        static constexpr uint32_t CreateContactMethod_HASH = ConstExprHashingUtils::HashString("CreateContactMethod");
        static constexpr uint32_t GetContactMethods_HASH = ConstExprHashingUtils::HashString("GetContactMethods");
        static constexpr uint32_t SendContactMethodVerification_HASH = ConstExprHashingUtils::HashString("SendContactMethodVerification");
        static constexpr uint32_t DeleteContactMethod_HASH = ConstExprHashingUtils::HashString("DeleteContactMethod");
        static constexpr uint32_t CreateDistribution_HASH = ConstExprHashingUtils::HashString("CreateDistribution");
        static constexpr uint32_t UpdateDistribution_HASH = ConstExprHashingUtils::HashString("UpdateDistribution");
        static constexpr uint32_t DeleteDistribution_HASH = ConstExprHashingUtils::HashString("DeleteDistribution");
        static constexpr uint32_t ResetDistributionCache_HASH = ConstExprHashingUtils::HashString("ResetDistributionCache");
        static constexpr uint32_t AttachCertificateToDistribution_HASH = ConstExprHashingUtils::HashString("AttachCertificateToDistribution");
        static constexpr uint32_t DetachCertificateFromDistribution_HASH = ConstExprHashingUtils::HashString("DetachCertificateFromDistribution");
        static constexpr uint32_t UpdateDistributionBundle_HASH = ConstExprHashingUtils::HashString("UpdateDistributionBundle");
        static constexpr uint32_t SetIpAddressType_HASH = ConstExprHashingUtils::HashString("SetIpAddressType");
        static constexpr uint32_t CreateCertificate_HASH = ConstExprHashingUtils::HashString("CreateCertificate");
        static constexpr uint32_t DeleteCertificate_HASH = ConstExprHashingUtils::HashString("DeleteCertificate");
        static constexpr uint32_t CreateContainerService_HASH = ConstExprHashingUtils::HashString("CreateContainerService");
        static constexpr uint32_t UpdateContainerService_HASH = ConstExprHashingUtils::HashString("UpdateContainerService");
        static constexpr uint32_t DeleteContainerService_HASH = ConstExprHashingUtils::HashString("DeleteContainerService");
        static constexpr uint32_t CreateContainerServiceDeployment_HASH = ConstExprHashingUtils::HashString("CreateContainerServiceDeployment");
        static constexpr uint32_t CreateContainerServiceRegistryLogin_HASH = ConstExprHashingUtils::HashString("CreateContainerServiceRegistryLogin");
        static constexpr uint32_t RegisterContainerImage_HASH = ConstExprHashingUtils::HashString("RegisterContainerImage");
        static constexpr uint32_t DeleteContainerImage_HASH = ConstExprHashingUtils::HashString("DeleteContainerImage");
        static constexpr uint32_t CreateBucket_HASH = ConstExprHashingUtils::HashString("CreateBucket");
        static constexpr uint32_t DeleteBucket_HASH = ConstExprHashingUtils::HashString("DeleteBucket");
        static constexpr uint32_t CreateBucketAccessKey_HASH = ConstExprHashingUtils::HashString("CreateBucketAccessKey");
        static constexpr uint32_t DeleteBucketAccessKey_HASH = ConstExprHashingUtils::HashString("DeleteBucketAccessKey");
        static constexpr uint32_t UpdateBucketBundle_HASH = ConstExprHashingUtils::HashString("UpdateBucketBundle");
        static constexpr uint32_t UpdateBucket_HASH = ConstExprHashingUtils::HashString("UpdateBucket");
        static constexpr uint32_t SetResourceAccessForBucket_HASH = ConstExprHashingUtils::HashString("SetResourceAccessForBucket");
        static constexpr uint32_t UpdateInstanceMetadataOptions_HASH = ConstExprHashingUtils::HashString("UpdateInstanceMetadataOptions");
        static constexpr uint32_t StartGUISession_HASH = ConstExprHashingUtils::HashString("StartGUISession");
        static constexpr uint32_t StopGUISession_HASH = ConstExprHashingUtils::HashString("StopGUISession");


        OperationType GetOperationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DeleteKnownHostKeys_HASH)
          {
            return OperationType::DeleteKnownHostKeys;
          }
          else if (hashCode == DeleteInstance_HASH)
          {
            return OperationType::DeleteInstance;
          }
          else if (hashCode == CreateInstance_HASH)
          {
            return OperationType::CreateInstance;
          }
          else if (hashCode == StopInstance_HASH)
          {
            return OperationType::StopInstance;
          }
          else if (hashCode == StartInstance_HASH)
          {
            return OperationType::StartInstance;
          }
          else if (hashCode == RebootInstance_HASH)
          {
            return OperationType::RebootInstance;
          }
          else if (hashCode == OpenInstancePublicPorts_HASH)
          {
            return OperationType::OpenInstancePublicPorts;
          }
          else if (hashCode == PutInstancePublicPorts_HASH)
          {
            return OperationType::PutInstancePublicPorts;
          }
          else if (hashCode == CloseInstancePublicPorts_HASH)
          {
            return OperationType::CloseInstancePublicPorts;
          }
          else if (hashCode == AllocateStaticIp_HASH)
          {
            return OperationType::AllocateStaticIp;
          }
          else if (hashCode == ReleaseStaticIp_HASH)
          {
            return OperationType::ReleaseStaticIp;
          }
          else if (hashCode == AttachStaticIp_HASH)
          {
            return OperationType::AttachStaticIp;
          }
          else if (hashCode == DetachStaticIp_HASH)
          {
            return OperationType::DetachStaticIp;
          }
          else if (hashCode == UpdateDomainEntry_HASH)
          {
            return OperationType::UpdateDomainEntry;
          }
          else if (hashCode == DeleteDomainEntry_HASH)
          {
            return OperationType::DeleteDomainEntry;
          }
          else if (hashCode == CreateDomain_HASH)
          {
            return OperationType::CreateDomain;
          }
          else if (hashCode == DeleteDomain_HASH)
          {
            return OperationType::DeleteDomain;
          }
          else if (hashCode == CreateInstanceSnapshot_HASH)
          {
            return OperationType::CreateInstanceSnapshot;
          }
          else if (hashCode == DeleteInstanceSnapshot_HASH)
          {
            return OperationType::DeleteInstanceSnapshot;
          }
          else if (hashCode == CreateInstancesFromSnapshot_HASH)
          {
            return OperationType::CreateInstancesFromSnapshot;
          }
          else if (hashCode == CreateLoadBalancer_HASH)
          {
            return OperationType::CreateLoadBalancer;
          }
          else if (hashCode == DeleteLoadBalancer_HASH)
          {
            return OperationType::DeleteLoadBalancer;
          }
          else if (hashCode == AttachInstancesToLoadBalancer_HASH)
          {
            return OperationType::AttachInstancesToLoadBalancer;
          }
          else if (hashCode == DetachInstancesFromLoadBalancer_HASH)
          {
            return OperationType::DetachInstancesFromLoadBalancer;
          }
          else if (hashCode == UpdateLoadBalancerAttribute_HASH)
          {
            return OperationType::UpdateLoadBalancerAttribute;
          }
          else if (hashCode == CreateLoadBalancerTlsCertificate_HASH)
          {
            return OperationType::CreateLoadBalancerTlsCertificate;
          }
          else if (hashCode == DeleteLoadBalancerTlsCertificate_HASH)
          {
            return OperationType::DeleteLoadBalancerTlsCertificate;
          }
          else if (hashCode == AttachLoadBalancerTlsCertificate_HASH)
          {
            return OperationType::AttachLoadBalancerTlsCertificate;
          }
          else if (hashCode == CreateDisk_HASH)
          {
            return OperationType::CreateDisk;
          }
          else if (hashCode == DeleteDisk_HASH)
          {
            return OperationType::DeleteDisk;
          }
          else if (hashCode == AttachDisk_HASH)
          {
            return OperationType::AttachDisk;
          }
          else if (hashCode == DetachDisk_HASH)
          {
            return OperationType::DetachDisk;
          }
          else if (hashCode == CreateDiskSnapshot_HASH)
          {
            return OperationType::CreateDiskSnapshot;
          }
          else if (hashCode == DeleteDiskSnapshot_HASH)
          {
            return OperationType::DeleteDiskSnapshot;
          }
          else if (hashCode == CreateDiskFromSnapshot_HASH)
          {
            return OperationType::CreateDiskFromSnapshot;
          }
          else if (hashCode == CreateRelationalDatabase_HASH)
          {
            return OperationType::CreateRelationalDatabase;
          }
          else if (hashCode == UpdateRelationalDatabase_HASH)
          {
            return OperationType::UpdateRelationalDatabase;
          }
          else if (hashCode == DeleteRelationalDatabase_HASH)
          {
            return OperationType::DeleteRelationalDatabase;
          }
          else if (hashCode == CreateRelationalDatabaseFromSnapshot_HASH)
          {
            return OperationType::CreateRelationalDatabaseFromSnapshot;
          }
          else if (hashCode == CreateRelationalDatabaseSnapshot_HASH)
          {
            return OperationType::CreateRelationalDatabaseSnapshot;
          }
          else if (hashCode == DeleteRelationalDatabaseSnapshot_HASH)
          {
            return OperationType::DeleteRelationalDatabaseSnapshot;
          }
          else if (hashCode == UpdateRelationalDatabaseParameters_HASH)
          {
            return OperationType::UpdateRelationalDatabaseParameters;
          }
          else if (hashCode == StartRelationalDatabase_HASH)
          {
            return OperationType::StartRelationalDatabase;
          }
          else if (hashCode == RebootRelationalDatabase_HASH)
          {
            return OperationType::RebootRelationalDatabase;
          }
          else if (hashCode == StopRelationalDatabase_HASH)
          {
            return OperationType::StopRelationalDatabase;
          }
          else if (hashCode == EnableAddOn_HASH)
          {
            return OperationType::EnableAddOn;
          }
          else if (hashCode == DisableAddOn_HASH)
          {
            return OperationType::DisableAddOn;
          }
          else if (hashCode == PutAlarm_HASH)
          {
            return OperationType::PutAlarm;
          }
          else if (hashCode == GetAlarms_HASH)
          {
            return OperationType::GetAlarms;
          }
          else if (hashCode == DeleteAlarm_HASH)
          {
            return OperationType::DeleteAlarm;
          }
          else if (hashCode == TestAlarm_HASH)
          {
            return OperationType::TestAlarm;
          }
          else if (hashCode == CreateContactMethod_HASH)
          {
            return OperationType::CreateContactMethod;
          }
          else if (hashCode == GetContactMethods_HASH)
          {
            return OperationType::GetContactMethods;
          }
          else if (hashCode == SendContactMethodVerification_HASH)
          {
            return OperationType::SendContactMethodVerification;
          }
          else if (hashCode == DeleteContactMethod_HASH)
          {
            return OperationType::DeleteContactMethod;
          }
          else if (hashCode == CreateDistribution_HASH)
          {
            return OperationType::CreateDistribution;
          }
          else if (hashCode == UpdateDistribution_HASH)
          {
            return OperationType::UpdateDistribution;
          }
          else if (hashCode == DeleteDistribution_HASH)
          {
            return OperationType::DeleteDistribution;
          }
          else if (hashCode == ResetDistributionCache_HASH)
          {
            return OperationType::ResetDistributionCache;
          }
          else if (hashCode == AttachCertificateToDistribution_HASH)
          {
            return OperationType::AttachCertificateToDistribution;
          }
          else if (hashCode == DetachCertificateFromDistribution_HASH)
          {
            return OperationType::DetachCertificateFromDistribution;
          }
          else if (hashCode == UpdateDistributionBundle_HASH)
          {
            return OperationType::UpdateDistributionBundle;
          }
          else if (hashCode == SetIpAddressType_HASH)
          {
            return OperationType::SetIpAddressType;
          }
          else if (hashCode == CreateCertificate_HASH)
          {
            return OperationType::CreateCertificate;
          }
          else if (hashCode == DeleteCertificate_HASH)
          {
            return OperationType::DeleteCertificate;
          }
          else if (hashCode == CreateContainerService_HASH)
          {
            return OperationType::CreateContainerService;
          }
          else if (hashCode == UpdateContainerService_HASH)
          {
            return OperationType::UpdateContainerService;
          }
          else if (hashCode == DeleteContainerService_HASH)
          {
            return OperationType::DeleteContainerService;
          }
          else if (hashCode == CreateContainerServiceDeployment_HASH)
          {
            return OperationType::CreateContainerServiceDeployment;
          }
          else if (hashCode == CreateContainerServiceRegistryLogin_HASH)
          {
            return OperationType::CreateContainerServiceRegistryLogin;
          }
          else if (hashCode == RegisterContainerImage_HASH)
          {
            return OperationType::RegisterContainerImage;
          }
          else if (hashCode == DeleteContainerImage_HASH)
          {
            return OperationType::DeleteContainerImage;
          }
          else if (hashCode == CreateBucket_HASH)
          {
            return OperationType::CreateBucket;
          }
          else if (hashCode == DeleteBucket_HASH)
          {
            return OperationType::DeleteBucket;
          }
          else if (hashCode == CreateBucketAccessKey_HASH)
          {
            return OperationType::CreateBucketAccessKey;
          }
          else if (hashCode == DeleteBucketAccessKey_HASH)
          {
            return OperationType::DeleteBucketAccessKey;
          }
          else if (hashCode == UpdateBucketBundle_HASH)
          {
            return OperationType::UpdateBucketBundle;
          }
          else if (hashCode == UpdateBucket_HASH)
          {
            return OperationType::UpdateBucket;
          }
          else if (hashCode == SetResourceAccessForBucket_HASH)
          {
            return OperationType::SetResourceAccessForBucket;
          }
          else if (hashCode == UpdateInstanceMetadataOptions_HASH)
          {
            return OperationType::UpdateInstanceMetadataOptions;
          }
          else if (hashCode == StartGUISession_HASH)
          {
            return OperationType::StartGUISession;
          }
          else if (hashCode == StopGUISession_HASH)
          {
            return OperationType::StopGUISession;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationType>(hashCode);
          }

          return OperationType::NOT_SET;
        }

        Aws::String GetNameForOperationType(OperationType enumValue)
        {
          switch(enumValue)
          {
          case OperationType::NOT_SET:
            return {};
          case OperationType::DeleteKnownHostKeys:
            return "DeleteKnownHostKeys";
          case OperationType::DeleteInstance:
            return "DeleteInstance";
          case OperationType::CreateInstance:
            return "CreateInstance";
          case OperationType::StopInstance:
            return "StopInstance";
          case OperationType::StartInstance:
            return "StartInstance";
          case OperationType::RebootInstance:
            return "RebootInstance";
          case OperationType::OpenInstancePublicPorts:
            return "OpenInstancePublicPorts";
          case OperationType::PutInstancePublicPorts:
            return "PutInstancePublicPorts";
          case OperationType::CloseInstancePublicPorts:
            return "CloseInstancePublicPorts";
          case OperationType::AllocateStaticIp:
            return "AllocateStaticIp";
          case OperationType::ReleaseStaticIp:
            return "ReleaseStaticIp";
          case OperationType::AttachStaticIp:
            return "AttachStaticIp";
          case OperationType::DetachStaticIp:
            return "DetachStaticIp";
          case OperationType::UpdateDomainEntry:
            return "UpdateDomainEntry";
          case OperationType::DeleteDomainEntry:
            return "DeleteDomainEntry";
          case OperationType::CreateDomain:
            return "CreateDomain";
          case OperationType::DeleteDomain:
            return "DeleteDomain";
          case OperationType::CreateInstanceSnapshot:
            return "CreateInstanceSnapshot";
          case OperationType::DeleteInstanceSnapshot:
            return "DeleteInstanceSnapshot";
          case OperationType::CreateInstancesFromSnapshot:
            return "CreateInstancesFromSnapshot";
          case OperationType::CreateLoadBalancer:
            return "CreateLoadBalancer";
          case OperationType::DeleteLoadBalancer:
            return "DeleteLoadBalancer";
          case OperationType::AttachInstancesToLoadBalancer:
            return "AttachInstancesToLoadBalancer";
          case OperationType::DetachInstancesFromLoadBalancer:
            return "DetachInstancesFromLoadBalancer";
          case OperationType::UpdateLoadBalancerAttribute:
            return "UpdateLoadBalancerAttribute";
          case OperationType::CreateLoadBalancerTlsCertificate:
            return "CreateLoadBalancerTlsCertificate";
          case OperationType::DeleteLoadBalancerTlsCertificate:
            return "DeleteLoadBalancerTlsCertificate";
          case OperationType::AttachLoadBalancerTlsCertificate:
            return "AttachLoadBalancerTlsCertificate";
          case OperationType::CreateDisk:
            return "CreateDisk";
          case OperationType::DeleteDisk:
            return "DeleteDisk";
          case OperationType::AttachDisk:
            return "AttachDisk";
          case OperationType::DetachDisk:
            return "DetachDisk";
          case OperationType::CreateDiskSnapshot:
            return "CreateDiskSnapshot";
          case OperationType::DeleteDiskSnapshot:
            return "DeleteDiskSnapshot";
          case OperationType::CreateDiskFromSnapshot:
            return "CreateDiskFromSnapshot";
          case OperationType::CreateRelationalDatabase:
            return "CreateRelationalDatabase";
          case OperationType::UpdateRelationalDatabase:
            return "UpdateRelationalDatabase";
          case OperationType::DeleteRelationalDatabase:
            return "DeleteRelationalDatabase";
          case OperationType::CreateRelationalDatabaseFromSnapshot:
            return "CreateRelationalDatabaseFromSnapshot";
          case OperationType::CreateRelationalDatabaseSnapshot:
            return "CreateRelationalDatabaseSnapshot";
          case OperationType::DeleteRelationalDatabaseSnapshot:
            return "DeleteRelationalDatabaseSnapshot";
          case OperationType::UpdateRelationalDatabaseParameters:
            return "UpdateRelationalDatabaseParameters";
          case OperationType::StartRelationalDatabase:
            return "StartRelationalDatabase";
          case OperationType::RebootRelationalDatabase:
            return "RebootRelationalDatabase";
          case OperationType::StopRelationalDatabase:
            return "StopRelationalDatabase";
          case OperationType::EnableAddOn:
            return "EnableAddOn";
          case OperationType::DisableAddOn:
            return "DisableAddOn";
          case OperationType::PutAlarm:
            return "PutAlarm";
          case OperationType::GetAlarms:
            return "GetAlarms";
          case OperationType::DeleteAlarm:
            return "DeleteAlarm";
          case OperationType::TestAlarm:
            return "TestAlarm";
          case OperationType::CreateContactMethod:
            return "CreateContactMethod";
          case OperationType::GetContactMethods:
            return "GetContactMethods";
          case OperationType::SendContactMethodVerification:
            return "SendContactMethodVerification";
          case OperationType::DeleteContactMethod:
            return "DeleteContactMethod";
          case OperationType::CreateDistribution:
            return "CreateDistribution";
          case OperationType::UpdateDistribution:
            return "UpdateDistribution";
          case OperationType::DeleteDistribution:
            return "DeleteDistribution";
          case OperationType::ResetDistributionCache:
            return "ResetDistributionCache";
          case OperationType::AttachCertificateToDistribution:
            return "AttachCertificateToDistribution";
          case OperationType::DetachCertificateFromDistribution:
            return "DetachCertificateFromDistribution";
          case OperationType::UpdateDistributionBundle:
            return "UpdateDistributionBundle";
          case OperationType::SetIpAddressType:
            return "SetIpAddressType";
          case OperationType::CreateCertificate:
            return "CreateCertificate";
          case OperationType::DeleteCertificate:
            return "DeleteCertificate";
          case OperationType::CreateContainerService:
            return "CreateContainerService";
          case OperationType::UpdateContainerService:
            return "UpdateContainerService";
          case OperationType::DeleteContainerService:
            return "DeleteContainerService";
          case OperationType::CreateContainerServiceDeployment:
            return "CreateContainerServiceDeployment";
          case OperationType::CreateContainerServiceRegistryLogin:
            return "CreateContainerServiceRegistryLogin";
          case OperationType::RegisterContainerImage:
            return "RegisterContainerImage";
          case OperationType::DeleteContainerImage:
            return "DeleteContainerImage";
          case OperationType::CreateBucket:
            return "CreateBucket";
          case OperationType::DeleteBucket:
            return "DeleteBucket";
          case OperationType::CreateBucketAccessKey:
            return "CreateBucketAccessKey";
          case OperationType::DeleteBucketAccessKey:
            return "DeleteBucketAccessKey";
          case OperationType::UpdateBucketBundle:
            return "UpdateBucketBundle";
          case OperationType::UpdateBucket:
            return "UpdateBucket";
          case OperationType::SetResourceAccessForBucket:
            return "SetResourceAccessForBucket";
          case OperationType::UpdateInstanceMetadataOptions:
            return "UpdateInstanceMetadataOptions";
          case OperationType::StartGUISession:
            return "StartGUISession";
          case OperationType::StopGUISession:
            return "StopGUISession";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
