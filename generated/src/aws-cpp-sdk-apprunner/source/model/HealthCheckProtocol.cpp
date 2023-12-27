/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/HealthCheckProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace HealthCheckProtocolMapper
      {

        static const int TCP_HASH = HashingUtils::HashString("TCP");
        static const int HTTP_HASH = HashingUtils::HashString("HTTP");


        HealthCheckProtocol GetHealthCheckProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TCP_HASH)
          {
            return HealthCheckProtocol::TCP;
          }
          else if (hashCode == HTTP_HASH)
          {
            return HealthCheckProtocol::HTTP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthCheckProtocol>(hashCode);
          }

          return HealthCheckProtocol::NOT_SET;
        }

        Aws::String GetNameForHealthCheckProtocol(HealthCheckProtocol enumValue)
        {
          switch(enumValue)
          {
          case HealthCheckProtocol::NOT_SET:
            return {};
          case HealthCheckProtocol::TCP:
            return "TCP";
          case HealthCheckProtocol::HTTP:
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

      } // namespace HealthCheckProtocolMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
