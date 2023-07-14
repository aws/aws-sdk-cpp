/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginRequestPolicyCookieBehavior.h>
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
      namespace OriginRequestPolicyCookieBehaviorMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int whitelist_HASH = HashingUtils::HashString("whitelist");
        static const int all_HASH = HashingUtils::HashString("all");


        OriginRequestPolicyCookieBehavior GetOriginRequestPolicyCookieBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return OriginRequestPolicyCookieBehavior::none;
          }
          else if (hashCode == whitelist_HASH)
          {
            return OriginRequestPolicyCookieBehavior::whitelist;
          }
          else if (hashCode == all_HASH)
          {
            return OriginRequestPolicyCookieBehavior::all;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginRequestPolicyCookieBehavior>(hashCode);
          }

          return OriginRequestPolicyCookieBehavior::NOT_SET;
        }

        Aws::String GetNameForOriginRequestPolicyCookieBehavior(OriginRequestPolicyCookieBehavior enumValue)
        {
          switch(enumValue)
          {
          case OriginRequestPolicyCookieBehavior::none:
            return "none";
          case OriginRequestPolicyCookieBehavior::whitelist:
            return "whitelist";
          case OriginRequestPolicyCookieBehavior::all:
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

      } // namespace OriginRequestPolicyCookieBehaviorMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
