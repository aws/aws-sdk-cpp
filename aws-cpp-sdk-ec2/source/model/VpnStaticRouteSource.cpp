/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpnStaticRouteSource.h>
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
      namespace VpnStaticRouteSourceMapper
      {

        static const int Static_HASH = HashingUtils::HashString("Static");


        VpnStaticRouteSource GetVpnStaticRouteSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Static_HASH)
          {
            return VpnStaticRouteSource::Static;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpnStaticRouteSource>(hashCode);
          }

          return VpnStaticRouteSource::NOT_SET;
        }

        Aws::String GetNameForVpnStaticRouteSource(VpnStaticRouteSource enumValue)
        {
          switch(enumValue)
          {
          case VpnStaticRouteSource::Static:
            return "Static";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpnStaticRouteSourceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
