/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int FULL_REQUEST_CACHING_HASH = HashingUtils::HashString("FULL_REQUEST_CACHING");
        static const int PER_RESOLVER_CACHING_HASH = HashingUtils::HashString("PER_RESOLVER_CACHING");


        ApiCachingBehavior GetApiCachingBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
