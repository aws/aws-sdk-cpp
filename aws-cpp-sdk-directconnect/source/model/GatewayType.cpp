/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/GatewayType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace GatewayTypeMapper
      {

        static const int virtualPrivateGateway_HASH = HashingUtils::HashString("virtualPrivateGateway");
        static const int transitGateway_HASH = HashingUtils::HashString("transitGateway");


        GatewayType GetGatewayTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == virtualPrivateGateway_HASH)
          {
            return GatewayType::virtualPrivateGateway;
          }
          else if (hashCode == transitGateway_HASH)
          {
            return GatewayType::transitGateway;
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
          case GatewayType::virtualPrivateGateway:
            return "virtualPrivateGateway";
          case GatewayType::transitGateway:
            return "transitGateway";
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
  } // namespace DirectConnect
} // namespace Aws
