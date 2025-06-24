/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/OfferType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace OfferTypeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");


        OfferType GetOfferTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return OfferType::ALL;
          }
          else if (hashCode == PUBLIC__HASH)
          {
            return OfferType::PUBLIC_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferType>(hashCode);
          }

          return OfferType::NOT_SET;
        }

        Aws::String GetNameForOfferType(OfferType enumValue)
        {
          switch(enumValue)
          {
          case OfferType::NOT_SET:
            return {};
          case OfferType::ALL:
            return "ALL";
          case OfferType::PUBLIC_:
            return "PUBLIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OfferTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
