/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NetworkDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace NetworkDirectionMapper
      {

        static const int IN_HASH = HashingUtils::HashString("IN");
        static const int OUT_HASH = HashingUtils::HashString("OUT");


        NetworkDirection GetNetworkDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_HASH)
          {
            return NetworkDirection::IN;
          }
          else if (hashCode == OUT_HASH)
          {
            return NetworkDirection::OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkDirection>(hashCode);
          }

          return NetworkDirection::NOT_SET;
        }

        Aws::String GetNameForNetworkDirection(NetworkDirection enumValue)
        {
          switch(enumValue)
          {
          case NetworkDirection::IN:
            return "IN";
          case NetworkDirection::OUT:
            return "OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkDirectionMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
