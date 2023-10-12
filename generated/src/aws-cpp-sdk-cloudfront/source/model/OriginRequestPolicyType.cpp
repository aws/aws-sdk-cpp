/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginRequestPolicyType.h>
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
      namespace OriginRequestPolicyTypeMapper
      {

        static constexpr uint32_t managed_HASH = ConstExprHashingUtils::HashString("managed");
        static constexpr uint32_t custom_HASH = ConstExprHashingUtils::HashString("custom");


        OriginRequestPolicyType GetOriginRequestPolicyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == managed_HASH)
          {
            return OriginRequestPolicyType::managed;
          }
          else if (hashCode == custom_HASH)
          {
            return OriginRequestPolicyType::custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginRequestPolicyType>(hashCode);
          }

          return OriginRequestPolicyType::NOT_SET;
        }

        Aws::String GetNameForOriginRequestPolicyType(OriginRequestPolicyType enumValue)
        {
          switch(enumValue)
          {
          case OriginRequestPolicyType::NOT_SET:
            return {};
          case OriginRequestPolicyType::managed:
            return "managed";
          case OriginRequestPolicyType::custom:
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

      } // namespace OriginRequestPolicyTypeMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
