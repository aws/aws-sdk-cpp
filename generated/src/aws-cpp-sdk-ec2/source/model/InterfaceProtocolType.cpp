/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InterfaceProtocolType.h>
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
      namespace InterfaceProtocolTypeMapper
      {

        static const int VLAN_HASH = HashingUtils::HashString("VLAN");
        static const int GRE_HASH = HashingUtils::HashString("GRE");


        InterfaceProtocolType GetInterfaceProtocolTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VLAN_HASH)
          {
            return InterfaceProtocolType::VLAN;
          }
          else if (hashCode == GRE_HASH)
          {
            return InterfaceProtocolType::GRE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InterfaceProtocolType>(hashCode);
          }

          return InterfaceProtocolType::NOT_SET;
        }

        Aws::String GetNameForInterfaceProtocolType(InterfaceProtocolType enumValue)
        {
          switch(enumValue)
          {
          case InterfaceProtocolType::NOT_SET:
            return {};
          case InterfaceProtocolType::VLAN:
            return "VLAN";
          case InterfaceProtocolType::GRE:
            return "GRE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InterfaceProtocolTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
