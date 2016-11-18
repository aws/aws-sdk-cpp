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

        static const int allow_all_HASH = HashingUtils::HashString("allow-all");
        static const int https_only_HASH = HashingUtils::HashString("https-only");
        static const int redirect_to_https_HASH = HashingUtils::HashString("redirect-to-https");


        ViewerProtocolPolicy GetViewerProtocolPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace ViewerProtocolPolicyMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
