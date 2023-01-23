/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CacheType.h>
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
      namespace CacheTypeMapper
      {

        static const int NO_CACHE_HASH = HashingUtils::HashString("NO_CACHE");
        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int LOCAL_HASH = HashingUtils::HashString("LOCAL");


        CacheType GetCacheTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_CACHE_HASH)
          {
            return CacheType::NO_CACHE;
          }
          else if (hashCode == S3_HASH)
          {
            return CacheType::S3;
          }
          else if (hashCode == LOCAL_HASH)
          {
            return CacheType::LOCAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheType>(hashCode);
          }

          return CacheType::NOT_SET;
        }

        Aws::String GetNameForCacheType(CacheType enumValue)
        {
          switch(enumValue)
          {
          case CacheType::NO_CACHE:
            return "NO_CACHE";
          case CacheType::S3:
            return "S3";
          case CacheType::LOCAL:
            return "LOCAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CacheTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
