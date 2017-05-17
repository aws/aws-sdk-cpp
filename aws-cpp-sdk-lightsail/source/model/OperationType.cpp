/*
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
