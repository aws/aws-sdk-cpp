/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
