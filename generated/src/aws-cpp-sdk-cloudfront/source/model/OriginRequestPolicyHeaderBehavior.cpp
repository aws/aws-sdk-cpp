/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginRequestPolicyHeaderBehavior.h>
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
      namespace OriginRequestPolicyHeaderBehaviorMapper
      {

        static constexpr uint32_t none_HASH = ConstExprHashingUtils::HashString("none");
        static constexpr uint32_t whitelist_HASH = ConstExprHashingUtils::HashString("whitelist");
        static constexpr uint32_t allViewer_HASH = ConstExprHashingUtils::HashString("allViewer");
        static constexpr uint32_t allViewerAndWhitelistCloudFront_HASH = ConstExprHashingUtils::HashString("allViewerAndWhitelistCloudFront");
        static constexpr uint32_t allExcept_HASH = ConstExprHashingUtils::HashString("allExcept");


        OriginRequestPolicyHeaderBehavior GetOriginRequestPolicyHeaderBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return OriginRequestPolicyHeaderBehavior::none;
          }
          else if (hashCode == whitelist_HASH)
          {
            return OriginRequestPolicyHeaderBehavior::whitelist;
          }
          else if (hashCode == allViewer_HASH)
          {
            return OriginRequestPolicyHeaderBehavior::allViewer;
          }
          else if (hashCode == allViewerAndWhitelistCloudFront_HASH)
          {
            return OriginRequestPolicyHeaderBehavior::allViewerAndWhitelistCloudFront;
          }
          else if (hashCode == allExcept_HASH)
          {
            return OriginRequestPolicyHeaderBehavior::allExcept;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginRequestPolicyHeaderBehavior>(hashCode);
          }

          return OriginRequestPolicyHeaderBehavior::NOT_SET;
        }

        Aws::String GetNameForOriginRequestPolicyHeaderBehavior(OriginRequestPolicyHeaderBehavior enumValue)
        {
          switch(enumValue)
          {
          case OriginRequestPolicyHeaderBehavior::NOT_SET:
            return {};
          case OriginRequestPolicyHeaderBehavior::none:
            return "none";
          case OriginRequestPolicyHeaderBehavior::whitelist:
            return "whitelist";
          case OriginRequestPolicyHeaderBehavior::allViewer:
            return "allViewer";
          case OriginRequestPolicyHeaderBehavior::allViewerAndWhitelistCloudFront:
            return "allViewerAndWhitelistCloudFront";
          case OriginRequestPolicyHeaderBehavior::allExcept:
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

      } // namespace OriginRequestPolicyHeaderBehaviorMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
