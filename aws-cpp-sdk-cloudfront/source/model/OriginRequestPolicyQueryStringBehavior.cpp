/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginRequestPolicyQueryStringBehavior.h>
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
      namespace OriginRequestPolicyQueryStringBehaviorMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int whitelist_HASH = HashingUtils::HashString("whitelist");
        static const int all_HASH = HashingUtils::HashString("all");


        OriginRequestPolicyQueryStringBehavior GetOriginRequestPolicyQueryStringBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return OriginRequestPolicyQueryStringBehavior::none;
          }
          else if (hashCode == whitelist_HASH)
          {
            return OriginRequestPolicyQueryStringBehavior::whitelist;
          }
          else if (hashCode == all_HASH)
          {
            return OriginRequestPolicyQueryStringBehavior::all;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginRequestPolicyQueryStringBehavior>(hashCode);
          }

          return OriginRequestPolicyQueryStringBehavior::NOT_SET;
        }

        Aws::String GetNameForOriginRequestPolicyQueryStringBehavior(OriginRequestPolicyQueryStringBehavior enumValue)
        {
          switch(enumValue)
          {
          case OriginRequestPolicyQueryStringBehavior::none:
            return "none";
          case OriginRequestPolicyQueryStringBehavior::whitelist:
            return "whitelist";
          case OriginRequestPolicyQueryStringBehavior::all:
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

      } // namespace OriginRequestPolicyQueryStringBehaviorMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
