/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ApplicationProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace ApplicationProtocolMapper
      {

        static const int http_HASH = HashingUtils::HashString("http");
        static const int http2_HASH = HashingUtils::HashString("http2");
        static const int grpc_HASH = HashingUtils::HashString("grpc");


        ApplicationProtocol GetApplicationProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == http_HASH)
          {
            return ApplicationProtocol::http;
          }
          else if (hashCode == http2_HASH)
          {
            return ApplicationProtocol::http2;
          }
          else if (hashCode == grpc_HASH)
          {
            return ApplicationProtocol::grpc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationProtocol>(hashCode);
          }

          return ApplicationProtocol::NOT_SET;
        }

        Aws::String GetNameForApplicationProtocol(ApplicationProtocol enumValue)
        {
          switch(enumValue)
          {
          case ApplicationProtocol::http:
            return "http";
          case ApplicationProtocol::http2:
            return "http2";
          case ApplicationProtocol::grpc:
            return "grpc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationProtocolMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
