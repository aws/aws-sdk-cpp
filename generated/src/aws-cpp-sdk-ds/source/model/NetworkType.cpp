/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/NetworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace NetworkTypeMapper
      {

        static const int Dual_stack_HASH = HashingUtils::HashString("Dual-stack");
        static const int IPv4_HASH = HashingUtils::HashString("IPv4");
        static const int IPv6_HASH = HashingUtils::HashString("IPv6");


        NetworkType GetNetworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Dual_stack_HASH)
          {
            return NetworkType::Dual_stack;
          }
          else if (hashCode == IPv4_HASH)
          {
            return NetworkType::IPv4;
          }
          else if (hashCode == IPv6_HASH)
          {
            return NetworkType::IPv6;
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
          case NetworkType::Dual_stack:
            return "Dual-stack";
          case NetworkType::IPv4:
            return "IPv4";
          case NetworkType::IPv6:
            return "IPv6";
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
  } // namespace DirectoryService
} // namespace Aws
