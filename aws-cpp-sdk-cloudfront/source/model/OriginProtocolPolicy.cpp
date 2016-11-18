/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

        static const int http_only_HASH = HashingUtils::HashString("http-only");
        static const int match_viewer_HASH = HashingUtils::HashString("match-viewer");
        static const int https_only_HASH = HashingUtils::HashString("https-only");


        OriginProtocolPolicy GetOriginProtocolPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace OriginProtocolPolicyMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
