/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/HttpEndpoint.h>
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
      namespace HttpEndpointMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabled_HASH = HashingUtils::HashString("enabled");


        HttpEndpoint GetHttpEndpointForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return HttpEndpoint::disabled;
          }
          else if (hashCode == enabled_HASH)
          {
            return HttpEndpoint::enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpEndpoint>(hashCode);
          }

          return HttpEndpoint::NOT_SET;
        }

        Aws::String GetNameForHttpEndpoint(HttpEndpoint enumValue)
        {
          switch(enumValue)
          {
          case HttpEndpoint::disabled:
            return "disabled";
          case HttpEndpoint::enabled:
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

      } // namespace HttpEndpointMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
