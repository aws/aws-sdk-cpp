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
#include <aws/cloudfront/model/SSLSupportMethod.h>
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
      namespace SSLSupportMethodMapper
      {

        static const int sni_only_HASH = HashingUtils::HashString("sni-only");
        static const int vip_HASH = HashingUtils::HashString("vip");


        SSLSupportMethod GetSSLSupportMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sni_only_HASH)
          {
            return SSLSupportMethod::sni_only;
          }
          else if (hashCode == vip_HASH)
          {
            return SSLSupportMethod::vip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SSLSupportMethod>(hashCode);
          }

          return SSLSupportMethod::NOT_SET;
        }

        Aws::String GetNameForSSLSupportMethod(SSLSupportMethod enumValue)
        {
          switch(enumValue)
          {
          case SSLSupportMethod::sni_only:
            return "sni-only";
          case SSLSupportMethod::vip:
            return "vip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SSLSupportMethodMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
