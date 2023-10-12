/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ReferrerPolicyList.h>
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
      namespace ReferrerPolicyListMapper
      {

        static constexpr uint32_t no_referrer_HASH = ConstExprHashingUtils::HashString("no-referrer");
        static constexpr uint32_t no_referrer_when_downgrade_HASH = ConstExprHashingUtils::HashString("no-referrer-when-downgrade");
        static constexpr uint32_t origin_HASH = ConstExprHashingUtils::HashString("origin");
        static constexpr uint32_t origin_when_cross_origin_HASH = ConstExprHashingUtils::HashString("origin-when-cross-origin");
        static constexpr uint32_t same_origin_HASH = ConstExprHashingUtils::HashString("same-origin");
        static constexpr uint32_t strict_origin_HASH = ConstExprHashingUtils::HashString("strict-origin");
        static constexpr uint32_t strict_origin_when_cross_origin_HASH = ConstExprHashingUtils::HashString("strict-origin-when-cross-origin");
        static constexpr uint32_t unsafe_url_HASH = ConstExprHashingUtils::HashString("unsafe-url");


        ReferrerPolicyList GetReferrerPolicyListForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == no_referrer_HASH)
          {
            return ReferrerPolicyList::no_referrer;
          }
          else if (hashCode == no_referrer_when_downgrade_HASH)
          {
            return ReferrerPolicyList::no_referrer_when_downgrade;
          }
          else if (hashCode == origin_HASH)
          {
            return ReferrerPolicyList::origin;
          }
          else if (hashCode == origin_when_cross_origin_HASH)
          {
            return ReferrerPolicyList::origin_when_cross_origin;
          }
          else if (hashCode == same_origin_HASH)
          {
            return ReferrerPolicyList::same_origin;
          }
          else if (hashCode == strict_origin_HASH)
          {
            return ReferrerPolicyList::strict_origin;
          }
          else if (hashCode == strict_origin_when_cross_origin_HASH)
          {
            return ReferrerPolicyList::strict_origin_when_cross_origin;
          }
          else if (hashCode == unsafe_url_HASH)
          {
            return ReferrerPolicyList::unsafe_url;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferrerPolicyList>(hashCode);
          }

          return ReferrerPolicyList::NOT_SET;
        }

        Aws::String GetNameForReferrerPolicyList(ReferrerPolicyList enumValue)
        {
          switch(enumValue)
          {
          case ReferrerPolicyList::NOT_SET:
            return {};
          case ReferrerPolicyList::no_referrer:
            return "no-referrer";
          case ReferrerPolicyList::no_referrer_when_downgrade:
            return "no-referrer-when-downgrade";
          case ReferrerPolicyList::origin:
            return "origin";
          case ReferrerPolicyList::origin_when_cross_origin:
            return "origin-when-cross-origin";
          case ReferrerPolicyList::same_origin:
            return "same-origin";
          case ReferrerPolicyList::strict_origin:
            return "strict-origin";
          case ReferrerPolicyList::strict_origin_when_cross_origin:
            return "strict-origin-when-cross-origin";
          case ReferrerPolicyList::unsafe_url:
            return "unsafe-url";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferrerPolicyListMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
