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

        static const int DeleteKnownHostKeys_HASH = HashingUtils::HashString("DeleteKnownHostKeys");
        static const int DeleteInstance_HASH = HashingUtils::HashString("DeleteInstance");
        static const int CreateInstance_HASH = HashingUtils::HashString("CreateInstance");
        static const int StopInstance_HASH = HashingUtils::HashString("StopInstance");
        static const int StartInstance_HASH = HashingUtils::HashString("StartInstance");
        static const int RebootInstance_HASH = HashingUtils::HashString("RebootInstance");
        static const int OpenInstancePublicPorts_HASH = HashingUtils::HashString("OpenInstancePublicPorts");
        static const int PutInstancePublicPorts_HASH = HashingUtils::HashString("PutInstancePublicPorts");
        static const int CloseInstancePublicPorts_HASH = HashingUtils::HashString("CloseInstancePublicPorts");
        static const int AllocateStaticIp_HASH = HashingUtils::HashString("AllocateStaticIp");
        static const int ReleaseStaticIp_HASH = HashingUtils::HashString("ReleaseStaticIp");
        static const int AttachStaticIp_HASH = HashingUtils::HashString("AttachStaticIp");
        static const int DetachStaticIp_HASH = HashingUtils::HashString("DetachStaticIp");
        static const int UpdateDomainEntry_HASH = HashingUtils::HashString("UpdateDomainEntry");
        static const int DeleteDomainEntry_HASH = HashingUtils::HashString("DeleteDomainEntry");
        static const int CreateDomain_HASH = HashingUtils::HashString("CreateDomain");
        static const int DeleteDomain_HASH = HashingUtils::HashString("DeleteDomain");
        static const int CreateInstanceSnapshot_HASH = HashingUtils::HashString("CreateInstanceSnapshot");
        static const int DeleteInstanceSnapshot_HASH = HashingUtils::HashString("DeleteInstanceSnapshot");
        static const int CreateInstancesFromSnapshot_HASH = HashingUtils::HashString("CreateInstancesFromSnapshot");
        static const int CreateLoadBalancer_HASH = HashingUtils::HashString("CreateLoadBalancer");
        static const int DeleteLoadBalancer_HASH = HashingUtils::HashString("DeleteLoadBalancer");
        static const int AttachInstancesToLoadBalancer_HASH = HashingUtils::HashString("AttachInstancesToLoadBalancer");
        static const int DetachInstancesFromLoadBalancer_HASH = HashingUtils::HashString("DetachInstancesFromLoadBalancer");
        static const int UpdateLoadBalancerAttribute_HASH = HashingUtils::HashString("UpdateLoadBalancerAttribute");
        static const int CreateLoadBalancerTlsCertificate_HASH = HashingUtils::HashString("CreateLoadBalancerTlsCertificate");
        static const int DeleteLoadBalancerTlsCertificate_HASH = HashingUtils::HashString("DeleteLoadBalancerTlsCertificate");
        static const int AttachLoadBalancerTlsCertificate_HASH = HashingUtils::HashString("AttachLoadBalancerTlsCertificate");
        static const int CreateDisk_HASH = HashingUtils::HashString("CreateDisk");
        static const int DeleteDisk_HASH = HashingUtils::HashString("DeleteDisk");
        static const int AttachDisk_HASH = HashingUtils::HashString("AttachDisk");
        static const int DetachDisk_HASH = HashingUtils::HashString("DetachDisk");
        static const int CreateDiskSnapshot_HASH = HashingUtils::HashString("CreateDiskSnapshot");
        static const int DeleteDiskSnapshot_HASH = HashingUtils::HashString("DeleteDiskSnapshot");
        static const int CreateDiskFromSnapshot_HASH = HashingUtils::HashString("CreateDiskFromSnapshot");
        static const int CreateRelationalDatabase_HASH = HashingUtils::HashString("CreateRelationalDatabase");
        static const int UpdateRelationalDatabase_HASH = HashingUtils::HashString("UpdateRelationalDatabase");
        static const int DeleteRelationalDatabase_HASH = HashingUtils::HashString("DeleteRelationalDatabase");
        static const int CreateRelationalDatabaseFromSnapshot_HASH = HashingUtils::HashString("CreateRelationalDatabaseFromSnapshot");
        static const int CreateRelationalDatabaseSnapshot_HASH = HashingUtils::HashString("CreateRelationalDatabaseSnapshot");
        static const int DeleteRelationalDatabaseSnapshot_HASH = HashingUtils::HashString("DeleteRelationalDatabaseSnapshot");
        static const int UpdateRelationalDatabaseParameters_HASH = HashingUtils::HashString("UpdateRelationalDatabaseParameters");
        static const int StartRelationalDatabase_HASH = HashingUtils::HashString("StartRelationalDatabase");
        static const int RebootRelationalDatabase_HASH = HashingUtils::HashString("RebootRelationalDatabase");
        static const int StopRelationalDatabase_HASH = HashingUtils::HashString("StopRelationalDatabase");
        static const int EnableAddOn_HASH = HashingUtils::HashString("EnableAddOn");
        static const int DisableAddOn_HASH = HashingUtils::HashString("DisableAddOn");
        static const int PutAlarm_HASH = HashingUtils::HashString("PutAlarm");
        static const int GetAlarms_HASH = HashingUtils::HashString("GetAlarms");
        static const int DeleteAlarm_HASH = HashingUtils::HashString("DeleteAlarm");
        static const int TestAlarm_HASH = HashingUtils::HashString("TestAlarm");
        static const int CreateContactMethod_HASH = HashingUtils::HashString("CreateContactMethod");
        static const int GetContactMethods_HASH = HashingUtils::HashString("GetContactMethods");
        static const int SendContactMethodVerification_HASH = HashingUtils::HashString("SendContactMethodVerification");
        static const int DeleteContactMethod_HASH = HashingUtils::HashString("DeleteContactMethod");
        static const int CreateDistribution_HASH = HashingUtils::HashString("CreateDistribution");
        static const int UpdateDistribution_HASH = HashingUtils::HashString("UpdateDistribution");
        static const int DeleteDistribution_HASH = HashingUtils::HashString("DeleteDistribution");
        static const int ResetDistributionCache_HASH = HashingUtils::HashString("ResetDistributionCache");
        static const int AttachCertificateToDistribution_HASH = HashingUtils::HashString("AttachCertificateToDistribution");
        static const int DetachCertificateFromDistribution_HASH = HashingUtils::HashString("DetachCertificateFromDistribution");
        static const int UpdateDistributionBundle_HASH = HashingUtils::HashString("UpdateDistributionBundle");
        static const int SetIpAddressType_HASH = HashingUtils::HashString("SetIpAddressType");
        static const int CreateCertificate_HASH = HashingUtils::HashString("CreateCertificate");
        static const int DeleteCertificate_HASH = HashingUtils::HashString("DeleteCertificate");
        static const int CreateContainerService_HASH = HashingUtils::HashString("CreateContainerService");
        static const int UpdateContainerService_HASH = HashingUtils::HashString("UpdateContainerService");
        static const int DeleteContainerService_HASH = HashingUtils::HashString("DeleteContainerService");
        static const int CreateContainerServiceDeployment_HASH = HashingUtils::HashString("CreateContainerServiceDeployment");
        static const int CreateContainerServiceRegistryLogin_HASH = HashingUtils::HashString("CreateContainerServiceRegistryLogin");
        static const int RegisterContainerImage_HASH = HashingUtils::HashString("RegisterContainerImage");
        static const int DeleteContainerImage_HASH = HashingUtils::HashString("DeleteContainerImage");
        static const int CreateBucket_HASH = HashingUtils::HashString("CreateBucket");
        static const int DeleteBucket_HASH = HashingUtils::HashString("DeleteBucket");
        static const int CreateBucketAccessKey_HASH = HashingUtils::HashString("CreateBucketAccessKey");
        static const int DeleteBucketAccessKey_HASH = HashingUtils::HashString("DeleteBucketAccessKey");
        static const int UpdateBucketBundle_HASH = HashingUtils::HashString("UpdateBucketBundle");
        static const int UpdateBucket_HASH = HashingUtils::HashString("UpdateBucket");
        static const int SetResourceAccessForBucket_HASH = HashingUtils::HashString("SetResourceAccessForBucket");
        static const int UpdateInstanceMetadataOptions_HASH = HashingUtils::HashString("UpdateInstanceMetadataOptions");


        OperationType GetOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
