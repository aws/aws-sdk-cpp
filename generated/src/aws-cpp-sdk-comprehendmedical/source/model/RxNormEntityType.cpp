/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/RxNormEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace RxNormEntityTypeMapper
      {

        static const int BRAND_NAME_HASH = HashingUtils::HashString("BRAND_NAME");
        static const int GENERIC_NAME_HASH = HashingUtils::HashString("GENERIC_NAME");


        RxNormEntityType GetRxNormEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BRAND_NAME_HASH)
          {
            return RxNormEntityType::BRAND_NAME;
          }
          else if (hashCode == GENERIC_NAME_HASH)
          {
            return RxNormEntityType::GENERIC_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RxNormEntityType>(hashCode);
          }

          return RxNormEntityType::NOT_SET;
        }

        Aws::String GetNameForRxNormEntityType(RxNormEntityType enumValue)
        {
          switch(enumValue)
          {
          case RxNormEntityType::BRAND_NAME:
            return "BRAND_NAME";
          case RxNormEntityType::GENERIC_NAME:
            return "GENERIC_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RxNormEntityTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
