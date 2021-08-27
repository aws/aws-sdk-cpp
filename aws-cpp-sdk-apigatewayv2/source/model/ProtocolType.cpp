/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/ProtocolType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApiGatewayV2
  {
    namespace Model
    {
      namespace ProtocolTypeMapper
      {

        static const int WEBSOCKET_HASH = HashingUtils::HashString("WEBSOCKET");
        static const int HTTP_HASH = HashingUtils::HashString("HTTP");


        ProtocolType GetProtocolTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEBSOCKET_HASH)
          {
            return ProtocolType::WEBSOCKET;
          }
          else if (hashCode == HTTP_HASH)
          {
            return ProtocolType::HTTP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtocolType>(hashCode);
          }

          return ProtocolType::NOT_SET;
        }

        Aws::String GetNameForProtocolType(ProtocolType enumValue)
        {
          switch(enumValue)
          {
          case ProtocolType::WEBSOCKET:
            return "WEBSOCKET";
          case ProtocolType::HTTP:
            return "HTTP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolTypeMapper
    } // namespace Model
  } // namespace ApiGatewayV2
} // namespace Aws
