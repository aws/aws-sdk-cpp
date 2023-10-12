/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ApiCachingBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace ApiCachingBehaviorMapper
      {

        static constexpr uint32_t FULL_REQUEST_CACHING_HASH = ConstExprHashingUtils::HashString("FULL_REQUEST_CACHING");
        static constexpr uint32_t PER_RESOLVER_CACHING_HASH = ConstExprHashingUtils::HashString("PER_RESOLVER_CACHING");


        ApiCachingBehavior GetApiCachingBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_REQUEST_CACHING_HASH)
          {
            return ApiCachingBehavior::FULL_REQUEST_CACHING;
          }
          else if (hashCode == PER_RESOLVER_CACHING_HASH)
          {
            return ApiCachingBehavior::PER_RESOLVER_CACHING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiCachingBehavior>(hashCode);
          }

          return ApiCachingBehavior::NOT_SET;
        }

        Aws::String GetNameForApiCachingBehavior(ApiCachingBehavior enumValue)
        {
          switch(enumValue)
          {
          case ApiCachingBehavior::NOT_SET:
            return {};
          case ApiCachingBehavior::FULL_REQUEST_CACHING:
            return "FULL_REQUEST_CACHING";
          case ApiCachingBehavior::PER_RESOLVER_CACHING:
            return "PER_RESOLVER_CACHING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiCachingBehaviorMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
