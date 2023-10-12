/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ViewerProtocolPolicy.h>
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
      namespace ViewerProtocolPolicyMapper
      {

        static constexpr uint32_t allow_all_HASH = ConstExprHashingUtils::HashString("allow-all");
        static constexpr uint32_t https_only_HASH = ConstExprHashingUtils::HashString("https-only");
        static constexpr uint32_t redirect_to_https_HASH = ConstExprHashingUtils::HashString("redirect-to-https");


        ViewerProtocolPolicy GetViewerProtocolPolicyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == allow_all_HASH)
          {
            return ViewerProtocolPolicy::allow_all;
          }
          else if (hashCode == https_only_HASH)
          {
            return ViewerProtocolPolicy::https_only;
          }
          else if (hashCode == redirect_to_https_HASH)
          {
            return ViewerProtocolPolicy::redirect_to_https;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViewerProtocolPolicy>(hashCode);
          }

          return ViewerProtocolPolicy::NOT_SET;
        }

        Aws::String GetNameForViewerProtocolPolicy(ViewerProtocolPolicy enumValue)
        {
          switch(enumValue)
          {
          case ViewerProtocolPolicy::NOT_SET:
            return {};
          case ViewerProtocolPolicy::allow_all:
            return "allow-all";
          case ViewerProtocolPolicy::https_only:
            return "https-only";
          case ViewerProtocolPolicy::redirect_to_https:
            return "redirect-to-https";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViewerProtocolPolicyMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
