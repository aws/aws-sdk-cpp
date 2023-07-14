/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/HttpVersion.h>
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
      namespace HttpVersionMapper
      {

        static const int http1_1_HASH = HashingUtils::HashString("http1.1");
        static const int http2_HASH = HashingUtils::HashString("http2");


        HttpVersion GetHttpVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == http1_1_HASH)
          {
            return HttpVersion::http1_1;
          }
          else if (hashCode == http2_HASH)
          {
            return HttpVersion::http2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpVersion>(hashCode);
          }

          return HttpVersion::NOT_SET;
        }

        Aws::String GetNameForHttpVersion(HttpVersion enumValue)
        {
          switch(enumValue)
          {
          case HttpVersion::http1_1:
            return "http1.1";
          case HttpVersion::http2:
            return "http2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HttpVersionMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
