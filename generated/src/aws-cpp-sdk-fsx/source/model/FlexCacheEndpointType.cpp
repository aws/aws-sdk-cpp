/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FlexCacheEndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace FlexCacheEndpointTypeMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t ORIGIN_HASH = ConstExprHashingUtils::HashString("ORIGIN");
        static constexpr uint32_t CACHE_HASH = ConstExprHashingUtils::HashString("CACHE");


        FlexCacheEndpointType GetFlexCacheEndpointTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return FlexCacheEndpointType::NONE;
          }
          else if (hashCode == ORIGIN_HASH)
          {
            return FlexCacheEndpointType::ORIGIN;
          }
          else if (hashCode == CACHE_HASH)
          {
            return FlexCacheEndpointType::CACHE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlexCacheEndpointType>(hashCode);
          }

          return FlexCacheEndpointType::NOT_SET;
        }

        Aws::String GetNameForFlexCacheEndpointType(FlexCacheEndpointType enumValue)
        {
          switch(enumValue)
          {
          case FlexCacheEndpointType::NOT_SET:
            return {};
          case FlexCacheEndpointType::NONE:
            return "NONE";
          case FlexCacheEndpointType::ORIGIN:
            return "ORIGIN";
          case FlexCacheEndpointType::CACHE:
            return "CACHE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlexCacheEndpointTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
