/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CachePolicyQueryStringBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace CachePolicyQueryStringBehaviorMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int whitelist_HASH = HashingUtils::HashString("whitelist");
        static const int allExcept_HASH = HashingUtils::HashString("allExcept");
        static const int all_HASH = HashingUtils::HashString("all");


        CachePolicyQueryStringBehavior GetCachePolicyQueryStringBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return CachePolicyQueryStringBehavior::none;
          }
          else if (hashCode == whitelist_HASH)
          {
            return CachePolicyQueryStringBehavior::whitelist;
          }
          else if (hashCode == allExcept_HASH)
          {
            return CachePolicyQueryStringBehavior::allExcept;
          }
          else if (hashCode == all_HASH)
          {
            return CachePolicyQueryStringBehavior::all;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CachePolicyQueryStringBehavior>(hashCode);
          }

          return CachePolicyQueryStringBehavior::NOT_SET;
        }

        Aws::String GetNameForCachePolicyQueryStringBehavior(CachePolicyQueryStringBehavior enumValue)
        {
          switch(enumValue)
          {
          case CachePolicyQueryStringBehavior::none:
            return "none";
          case CachePolicyQueryStringBehavior::whitelist:
            return "whitelist";
          case CachePolicyQueryStringBehavior::allExcept:
            return "allExcept";
          case CachePolicyQueryStringBehavior::all:
            return "all";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CachePolicyQueryStringBehaviorMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
