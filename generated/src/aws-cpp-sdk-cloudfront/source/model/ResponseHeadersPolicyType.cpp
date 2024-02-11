/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyType.h>
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
      namespace ResponseHeadersPolicyTypeMapper
      {

        static const int managed_HASH = HashingUtils::HashString("managed");
        static const int custom_HASH = HashingUtils::HashString("custom");


        ResponseHeadersPolicyType GetResponseHeadersPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == managed_HASH)
          {
            return ResponseHeadersPolicyType::managed;
          }
          else if (hashCode == custom_HASH)
          {
            return ResponseHeadersPolicyType::custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResponseHeadersPolicyType>(hashCode);
          }

          return ResponseHeadersPolicyType::NOT_SET;
        }

        Aws::String GetNameForResponseHeadersPolicyType(ResponseHeadersPolicyType enumValue)
        {
          switch(enumValue)
          {
          case ResponseHeadersPolicyType::NOT_SET:
            return {};
          case ResponseHeadersPolicyType::managed:
            return "managed";
          case ResponseHeadersPolicyType::custom:
            return "custom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResponseHeadersPolicyTypeMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
