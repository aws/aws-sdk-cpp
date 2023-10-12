/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInterfaceCreationType.h>
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
      namespace NetworkInterfaceCreationTypeMapper
      {

        static constexpr uint32_t efa_HASH = ConstExprHashingUtils::HashString("efa");
        static constexpr uint32_t branch_HASH = ConstExprHashingUtils::HashString("branch");
        static constexpr uint32_t trunk_HASH = ConstExprHashingUtils::HashString("trunk");


        NetworkInterfaceCreationType GetNetworkInterfaceCreationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == efa_HASH)
          {
            return NetworkInterfaceCreationType::efa;
          }
          else if (hashCode == branch_HASH)
          {
            return NetworkInterfaceCreationType::branch;
          }
          else if (hashCode == trunk_HASH)
          {
            return NetworkInterfaceCreationType::trunk;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfaceCreationType>(hashCode);
          }

          return NetworkInterfaceCreationType::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfaceCreationType(NetworkInterfaceCreationType enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfaceCreationType::NOT_SET:
            return {};
          case NetworkInterfaceCreationType::efa:
            return "efa";
          case NetworkInterfaceCreationType::branch:
            return "branch";
          case NetworkInterfaceCreationType::trunk:
            return "trunk";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInterfaceCreationTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
