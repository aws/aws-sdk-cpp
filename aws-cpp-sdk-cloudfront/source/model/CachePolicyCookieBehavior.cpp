/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CachePolicyCookieBehavior.h>
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
      namespace CachePolicyCookieBehaviorMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int whitelist_HASH = HashingUtils::HashString("whitelist");
        static const int allExcept_HASH = HashingUtils::HashString("allExcept");
        static const int all_HASH = HashingUtils::HashString("all");


        CachePolicyCookieBehavior GetCachePolicyCookieBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return CachePolicyCookieBehavior::none;
          }
          else if (hashCode == whitelist_HASH)
          {
            return CachePolicyCookieBehavior::whitelist;
          }
          else if (hashCode == allExcept_HASH)
          {
            return CachePolicyCookieBehavior::allExcept;
          }
          else if (hashCode == all_HASH)
          {
            return CachePolicyCookieBehavior::all;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CachePolicyCookieBehavior>(hashCode);
          }

          return CachePolicyCookieBehavior::NOT_SET;
        }

        Aws::String GetNameForCachePolicyCookieBehavior(CachePolicyCookieBehavior enumValue)
        {
          switch(enumValue)
          {
          case CachePolicyCookieBehavior::none:
            return "none";
          case CachePolicyCookieBehavior::whitelist:
            return "whitelist";
          case CachePolicyCookieBehavior::allExcept:
            return "allExcept";
          case CachePolicyCookieBehavior::all:
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

      } // namespace CachePolicyCookieBehaviorMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
