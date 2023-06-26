/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CachePolicyHeaderBehavior.h>
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
      namespace CachePolicyHeaderBehaviorMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int whitelist_HASH = HashingUtils::HashString("whitelist");


        CachePolicyHeaderBehavior GetCachePolicyHeaderBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return CachePolicyHeaderBehavior::none;
          }
          else if (hashCode == whitelist_HASH)
          {
            return CachePolicyHeaderBehavior::whitelist;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CachePolicyHeaderBehavior>(hashCode);
          }

          return CachePolicyHeaderBehavior::NOT_SET;
        }

        Aws::String GetNameForCachePolicyHeaderBehavior(CachePolicyHeaderBehavior enumValue)
        {
          switch(enumValue)
          {
          case CachePolicyHeaderBehavior::none:
            return "none";
          case CachePolicyHeaderBehavior::whitelist:
            return "whitelist";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CachePolicyHeaderBehaviorMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
