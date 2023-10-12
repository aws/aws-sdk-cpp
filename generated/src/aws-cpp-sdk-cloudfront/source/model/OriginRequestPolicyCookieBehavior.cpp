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

        static constexpr uint32_t none_HASH = ConstExprHashingUtils::HashString("none");
        static constexpr uint32_t whitelist_HASH = ConstExprHashingUtils::HashString("whitelist");
        static constexpr uint32_t all_HASH = ConstExprHashingUtils::HashString("all");
        static constexpr uint32_t allExcept_HASH = ConstExprHashingUtils::HashString("allExcept");


        OriginRequestPolicyCookieBehavior GetOriginRequestPolicyCookieBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == allExcept_HASH)
          {
            return OriginRequestPolicyCookieBehavior::allExcept;
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
          case OriginRequestPolicyCookieBehavior::NOT_SET:
            return {};
          case OriginRequestPolicyCookieBehavior::none:
            return "none";
          case OriginRequestPolicyCookieBehavior::whitelist:
            return "whitelist";
          case OriginRequestPolicyCookieBehavior::all:
            return "all";
          case OriginRequestPolicyCookieBehavior::allExcept:
            return "allExcept";
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
