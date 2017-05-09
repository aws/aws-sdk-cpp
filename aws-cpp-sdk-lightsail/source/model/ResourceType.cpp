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

        static const int Instance_HASH = HashingUtils::HashString("Instance");
        static const int StaticIp_HASH = HashingUtils::HashString("StaticIp");
        static const int KeyPair_HASH = HashingUtils::HashString("KeyPair");
        static const int InstanceSnapshot_HASH = HashingUtils::HashString("InstanceSnapshot");
        static const int Domain_HASH = HashingUtils::HashString("Domain");
        static const int PeeredVpc_HASH = HashingUtils::HashString("PeeredVpc");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Instance_HASH)
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
