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

        static const int efa_HASH = HashingUtils::HashString("efa");
        static const int branch_HASH = HashingUtils::HashString("branch");
        static const int trunk_HASH = HashingUtils::HashString("trunk");


        NetworkInterfaceCreationType GetNetworkInterfaceCreationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
