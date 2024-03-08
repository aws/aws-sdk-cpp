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

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int ORIGIN_HASH = HashingUtils::HashString("ORIGIN");
        static const int CACHE_HASH = HashingUtils::HashString("CACHE");


        FlexCacheEndpointType GetFlexCacheEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
