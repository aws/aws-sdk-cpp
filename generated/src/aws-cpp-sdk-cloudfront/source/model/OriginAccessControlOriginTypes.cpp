﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginAccessControlOriginTypes.h>
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
      namespace OriginAccessControlOriginTypesMapper
      {

        static const int s3_HASH = HashingUtils::HashString("s3");
        static const int mediastore_HASH = HashingUtils::HashString("mediastore");


        OriginAccessControlOriginTypes GetOriginAccessControlOriginTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == s3_HASH)
          {
            return OriginAccessControlOriginTypes::s3;
          }
          else if (hashCode == mediastore_HASH)
          {
            return OriginAccessControlOriginTypes::mediastore;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginAccessControlOriginTypes>(hashCode);
          }

          return OriginAccessControlOriginTypes::NOT_SET;
        }

        Aws::String GetNameForOriginAccessControlOriginTypes(OriginAccessControlOriginTypes enumValue)
        {
          switch(enumValue)
          {
          case OriginAccessControlOriginTypes::NOT_SET:
            return {};
          case OriginAccessControlOriginTypes::s3:
            return "s3";
          case OriginAccessControlOriginTypes::mediastore:
            return "mediastore";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginAccessControlOriginTypesMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
