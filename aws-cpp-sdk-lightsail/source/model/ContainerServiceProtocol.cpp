/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceProtocol.h>
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
      namespace ContainerServiceProtocolMapper
      {

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int TCP_HASH = HashingUtils::HashString("TCP");
        static const int UDP_HASH = HashingUtils::HashString("UDP");


        ContainerServiceProtocol GetContainerServiceProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return ContainerServiceProtocol::HTTP;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return ContainerServiceProtocol::HTTPS;
          }
          else if (hashCode == TCP_HASH)
          {
            return ContainerServiceProtocol::TCP;
          }
          else if (hashCode == UDP_HASH)
          {
            return ContainerServiceProtocol::UDP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerServiceProtocol>(hashCode);
          }

          return ContainerServiceProtocol::NOT_SET;
        }

        Aws::String GetNameForContainerServiceProtocol(ContainerServiceProtocol enumValue)
        {
          switch(enumValue)
          {
          case ContainerServiceProtocol::HTTP:
            return "HTTP";
          case ContainerServiceProtocol::HTTPS:
            return "HTTPS";
          case ContainerServiceProtocol::TCP:
            return "TCP";
          case ContainerServiceProtocol::UDP:
            return "UDP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerServiceProtocolMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
