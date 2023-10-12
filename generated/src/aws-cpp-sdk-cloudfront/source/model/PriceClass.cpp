/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/PriceClass.h>
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
      namespace PriceClassMapper
      {

        static constexpr uint32_t PriceClass_100_HASH = ConstExprHashingUtils::HashString("PriceClass_100");
        static constexpr uint32_t PriceClass_200_HASH = ConstExprHashingUtils::HashString("PriceClass_200");
        static constexpr uint32_t PriceClass_All_HASH = ConstExprHashingUtils::HashString("PriceClass_All");


        PriceClass GetPriceClassForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PriceClass_100_HASH)
          {
            return PriceClass::PriceClass_100;
          }
          else if (hashCode == PriceClass_200_HASH)
          {
            return PriceClass::PriceClass_200;
          }
          else if (hashCode == PriceClass_All_HASH)
          {
            return PriceClass::PriceClass_All;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PriceClass>(hashCode);
          }

          return PriceClass::NOT_SET;
        }

        Aws::String GetNameForPriceClass(PriceClass enumValue)
        {
          switch(enumValue)
          {
          case PriceClass::NOT_SET:
            return {};
          case PriceClass::PriceClass_100:
            return "PriceClass_100";
          case PriceClass::PriceClass_200:
            return "PriceClass_200";
          case PriceClass::PriceClass_All:
            return "PriceClass_All";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PriceClassMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
