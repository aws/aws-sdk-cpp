/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/NetworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MainframeModernization
  {
    namespace Model
    {
      namespace NetworkTypeMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");
        static const int dual_HASH = HashingUtils::HashString("dual");


        NetworkType GetNetworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return NetworkType::ipv4;
          }
          else if (hashCode == dual_HASH)
          {
            return NetworkType::dual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkType>(hashCode);
          }

          return NetworkType::NOT_SET;
        }

        Aws::String GetNameForNetworkType(NetworkType enumValue)
        {
          switch(enumValue)
          {
          case NetworkType::NOT_SET:
            return {};
          case NetworkType::ipv4:
            return "ipv4";
          case NetworkType::dual:
            return "dual";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkTypeMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
