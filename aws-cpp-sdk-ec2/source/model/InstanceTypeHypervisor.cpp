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

#include <aws/ec2/model/InstanceTypeHypervisor.h>
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
      namespace InstanceTypeHypervisorMapper
      {

        static const int nitro_HASH = HashingUtils::HashString("nitro");
        static const int xen_HASH = HashingUtils::HashString("xen");


        InstanceTypeHypervisor GetInstanceTypeHypervisorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == nitro_HASH)
          {
            return InstanceTypeHypervisor::nitro;
          }
          else if (hashCode == xen_HASH)
          {
            return InstanceTypeHypervisor::xen;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceTypeHypervisor>(hashCode);
          }

          return InstanceTypeHypervisor::NOT_SET;
        }

        Aws::String GetNameForInstanceTypeHypervisor(InstanceTypeHypervisor enumValue)
        {
          switch(enumValue)
          {
          case InstanceTypeHypervisor::nitro:
            return "nitro";
          case InstanceTypeHypervisor::xen:
            return "xen";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceTypeHypervisorMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
