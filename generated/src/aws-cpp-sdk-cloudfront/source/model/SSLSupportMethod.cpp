/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int static_ip_HASH = HashingUtils::HashString("static-ip");


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
          else if (hashCode == static_ip_HASH)
          {
            return SSLSupportMethod::static_ip;
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
          case SSLSupportMethod::static_ip:
            return "static-ip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SSLSupportMethodMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
