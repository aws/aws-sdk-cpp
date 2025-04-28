/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ConnectionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace ConnectionModeMapper
      {

        static const int direct_HASH = HashingUtils::HashString("direct");
        static const int tenant_only_HASH = HashingUtils::HashString("tenant-only");


        ConnectionMode GetConnectionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == direct_HASH)
          {
            return ConnectionMode::direct;
          }
          else if (hashCode == tenant_only_HASH)
          {
            return ConnectionMode::tenant_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionMode>(hashCode);
          }

          return ConnectionMode::NOT_SET;
        }

        Aws::String GetNameForConnectionMode(ConnectionMode enumValue)
        {
          switch(enumValue)
          {
          case ConnectionMode::NOT_SET:
            return {};
          case ConnectionMode::direct:
            return "direct";
          case ConnectionMode::tenant_only:
            return "tenant-only";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionModeMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
