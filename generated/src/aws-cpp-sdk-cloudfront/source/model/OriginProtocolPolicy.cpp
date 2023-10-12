/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginProtocolPolicy.h>
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
      namespace OriginProtocolPolicyMapper
      {

        static constexpr uint32_t http_only_HASH = ConstExprHashingUtils::HashString("http-only");
        static constexpr uint32_t match_viewer_HASH = ConstExprHashingUtils::HashString("match-viewer");
        static constexpr uint32_t https_only_HASH = ConstExprHashingUtils::HashString("https-only");


        OriginProtocolPolicy GetOriginProtocolPolicyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == http_only_HASH)
          {
            return OriginProtocolPolicy::http_only;
          }
          else if (hashCode == match_viewer_HASH)
          {
            return OriginProtocolPolicy::match_viewer;
          }
          else if (hashCode == https_only_HASH)
          {
            return OriginProtocolPolicy::https_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginProtocolPolicy>(hashCode);
          }

          return OriginProtocolPolicy::NOT_SET;
        }

        Aws::String GetNameForOriginProtocolPolicy(OriginProtocolPolicy enumValue)
        {
          switch(enumValue)
          {
          case OriginProtocolPolicy::NOT_SET:
            return {};
          case OriginProtocolPolicy::http_only:
            return "http-only";
          case OriginProtocolPolicy::match_viewer:
            return "match-viewer";
          case OriginProtocolPolicy::https_only:
            return "https-only";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginProtocolPolicyMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
