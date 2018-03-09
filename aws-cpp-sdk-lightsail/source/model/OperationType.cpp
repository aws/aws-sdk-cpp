﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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


        OperationType GetOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DeleteInstance_HASH)
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace OperationTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
