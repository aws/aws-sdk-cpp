/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GatewayType.h>
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
      namespace GatewayTypeMapper
      {

        static const int ipsec_1_HASH = HashingUtils::HashString("ipsec.1");


        GatewayType GetGatewayTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipsec_1_HASH)
          {
            return GatewayType::ipsec_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayType>(hashCode);
          }

          return GatewayType::NOT_SET;
        }

        Aws::String GetNameForGatewayType(GatewayType enumValue)
        {
          switch(enumValue)
          {
          case GatewayType::ipsec_1:
            return "ipsec.1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GatewayTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
