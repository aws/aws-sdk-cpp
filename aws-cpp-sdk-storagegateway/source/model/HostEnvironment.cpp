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

#include <aws/storagegateway/model/HostEnvironment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace HostEnvironmentMapper
      {

        static const int VMWARE_HASH = HashingUtils::HashString("VMWARE");
        static const int HYPER_V_HASH = HashingUtils::HashString("HYPER-V");
        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int KVM_HASH = HashingUtils::HashString("KVM");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        HostEnvironment GetHostEnvironmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VMWARE_HASH)
          {
            return HostEnvironment::VMWARE;
          }
          else if (hashCode == HYPER_V_HASH)
          {
            return HostEnvironment::HYPER_V;
          }
          else if (hashCode == EC2_HASH)
          {
            return HostEnvironment::EC2;
          }
          else if (hashCode == KVM_HASH)
          {
            return HostEnvironment::KVM;
          }
          else if (hashCode == OTHER_HASH)
          {
            return HostEnvironment::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostEnvironment>(hashCode);
          }

          return HostEnvironment::NOT_SET;
        }

        Aws::String GetNameForHostEnvironment(HostEnvironment enumValue)
        {
          switch(enumValue)
          {
          case HostEnvironment::VMWARE:
            return "VMWARE";
          case HostEnvironment::HYPER_V:
            return "HYPER-V";
          case HostEnvironment::EC2:
            return "EC2";
          case HostEnvironment::KVM:
            return "KVM";
          case HostEnvironment::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HostEnvironmentMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
