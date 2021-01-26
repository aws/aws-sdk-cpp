/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CacheMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace CacheModeMapper
      {

        static const int LOCAL_DOCKER_LAYER_CACHE_HASH = HashingUtils::HashString("LOCAL_DOCKER_LAYER_CACHE");
        static const int LOCAL_SOURCE_CACHE_HASH = HashingUtils::HashString("LOCAL_SOURCE_CACHE");
        static const int LOCAL_CUSTOM_CACHE_HASH = HashingUtils::HashString("LOCAL_CUSTOM_CACHE");


        CacheMode GetCacheModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOCAL_DOCKER_LAYER_CACHE_HASH)
          {
            return CacheMode::LOCAL_DOCKER_LAYER_CACHE;
          }
          else if (hashCode == LOCAL_SOURCE_CACHE_HASH)
          {
            return CacheMode::LOCAL_SOURCE_CACHE;
          }
          else if (hashCode == LOCAL_CUSTOM_CACHE_HASH)
          {
            return CacheMode::LOCAL_CUSTOM_CACHE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheMode>(hashCode);
          }

          return CacheMode::NOT_SET;
        }

        Aws::String GetNameForCacheMode(CacheMode enumValue)
        {
          switch(enumValue)
          {
          case CacheMode::LOCAL_DOCKER_LAYER_CACHE:
            return "LOCAL_DOCKER_LAYER_CACHE";
          case CacheMode::LOCAL_SOURCE_CACHE:
            return "LOCAL_SOURCE_CACHE";
          case CacheMode::LOCAL_CUSTOM_CACHE:
            return "LOCAL_CUSTOM_CACHE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CacheModeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
