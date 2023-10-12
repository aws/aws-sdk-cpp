/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/NetworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace NetworkTypeMapper
      {

        static constexpr uint32_t ipv4_HASH = ConstExprHashingUtils::HashString("ipv4");
        static constexpr uint32_t ipv6_HASH = ConstExprHashingUtils::HashString("ipv6");
        static constexpr uint32_t dual_stack_HASH = ConstExprHashingUtils::HashString("dual_stack");


        NetworkType GetNetworkTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return NetworkType::ipv4;
          }
          else if (hashCode == ipv6_HASH)
          {
            return NetworkType::ipv6;
          }
          else if (hashCode == dual_stack_HASH)
          {
            return NetworkType::dual_stack;
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
          case NetworkType::ipv6:
            return "ipv6";
          case NetworkType::dual_stack:
            return "dual_stack";
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
  } // namespace ElastiCache
} // namespace Aws
