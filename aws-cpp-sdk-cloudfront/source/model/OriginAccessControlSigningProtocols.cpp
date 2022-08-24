/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginAccessControlSigningProtocols.h>
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
      namespace OriginAccessControlSigningProtocolsMapper
      {

        static const int sigv4_HASH = HashingUtils::HashString("sigv4");


        OriginAccessControlSigningProtocols GetOriginAccessControlSigningProtocolsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sigv4_HASH)
          {
            return OriginAccessControlSigningProtocols::sigv4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginAccessControlSigningProtocols>(hashCode);
          }

          return OriginAccessControlSigningProtocols::NOT_SET;
        }

        Aws::String GetNameForOriginAccessControlSigningProtocols(OriginAccessControlSigningProtocols enumValue)
        {
          switch(enumValue)
          {
          case OriginAccessControlSigningProtocols::sigv4:
            return "sigv4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginAccessControlSigningProtocolsMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
