/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CachePolicyType.h>
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
      namespace CachePolicyTypeMapper
      {

        static const int managed_HASH = HashingUtils::HashString("managed");
        static const int custom_HASH = HashingUtils::HashString("custom");


        CachePolicyType GetCachePolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == managed_HASH)
          {
            return CachePolicyType::managed;
          }
          else if (hashCode == custom_HASH)
          {
            return CachePolicyType::custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CachePolicyType>(hashCode);
          }

          return CachePolicyType::NOT_SET;
        }

        Aws::String GetNameForCachePolicyType(CachePolicyType enumValue)
        {
          switch(enumValue)
          {
          case CachePolicyType::managed:
            return "managed";
          case CachePolicyType::custom:
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

      } // namespace CachePolicyTypeMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
