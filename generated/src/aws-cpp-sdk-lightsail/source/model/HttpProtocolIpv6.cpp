/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/HttpProtocolIpv6.h>
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
      namespace HttpProtocolIpv6Mapper
      {

        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");
        static constexpr uint32_t enabled_HASH = ConstExprHashingUtils::HashString("enabled");


        HttpProtocolIpv6 GetHttpProtocolIpv6ForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return HttpProtocolIpv6::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return HttpProtocolIpv6::enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpProtocolIpv6>(hashCode);
          }

          return HttpProtocolIpv6::NOT_SET;
        }

        Aws::String GetNameForHttpProtocolIpv6(HttpProtocolIpv6 enumValue)
        {
          switch(enumValue)
          {
          case HttpProtocolIpv6::NOT_SET:
            return {};
          case HttpProtocolIpv6::disabled:
            return "disabled";
          case HttpProtocolIpv6::enabled:
            return "enabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HttpProtocolIpv6Mapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
