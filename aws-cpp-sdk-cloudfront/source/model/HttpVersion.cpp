/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
