/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CacheClusterSize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace CacheClusterSizeMapper
      {

        static constexpr uint32_t _0_5_HASH = ConstExprHashingUtils::HashString("0.5");
        static constexpr uint32_t _1_6_HASH = ConstExprHashingUtils::HashString("1.6");
        static constexpr uint32_t _6_1_HASH = ConstExprHashingUtils::HashString("6.1");
        static constexpr uint32_t _13_5_HASH = ConstExprHashingUtils::HashString("13.5");
        static constexpr uint32_t _28_4_HASH = ConstExprHashingUtils::HashString("28.4");
        static constexpr uint32_t _58_2_HASH = ConstExprHashingUtils::HashString("58.2");
        static constexpr uint32_t _118_HASH = ConstExprHashingUtils::HashString("118");
        static constexpr uint32_t _237_HASH = ConstExprHashingUtils::HashString("237");


        CacheClusterSize GetCacheClusterSizeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == _0_5_HASH)
          {
            return CacheClusterSize::_0_5;
          }
          else if (hashCode == _1_6_HASH)
          {
            return CacheClusterSize::_1_6;
          }
          else if (hashCode == _6_1_HASH)
          {
            return CacheClusterSize::_6_1;
          }
          else if (hashCode == _13_5_HASH)
          {
            return CacheClusterSize::_13_5;
          }
          else if (hashCode == _28_4_HASH)
          {
            return CacheClusterSize::_28_4;
          }
          else if (hashCode == _58_2_HASH)
          {
            return CacheClusterSize::_58_2;
          }
          else if (hashCode == _118_HASH)
          {
            return CacheClusterSize::_118;
          }
          else if (hashCode == _237_HASH)
          {
            return CacheClusterSize::_237;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheClusterSize>(hashCode);
          }

          return CacheClusterSize::NOT_SET;
        }

        Aws::String GetNameForCacheClusterSize(CacheClusterSize enumValue)
        {
          switch(enumValue)
          {
          case CacheClusterSize::NOT_SET:
            return {};
          case CacheClusterSize::_0_5:
            return "0.5";
          case CacheClusterSize::_1_6:
            return "1.6";
          case CacheClusterSize::_6_1:
            return "6.1";
          case CacheClusterSize::_13_5:
            return "13.5";
          case CacheClusterSize::_28_4:
            return "28.4";
          case CacheClusterSize::_58_2:
            return "58.2";
          case CacheClusterSize::_118:
            return "118";
          case CacheClusterSize::_237:
            return "237";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CacheClusterSizeMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
