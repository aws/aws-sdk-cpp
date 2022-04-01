/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/RxNormEntityCategory.h>
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
      namespace RxNormEntityCategoryMapper
      {

        static const int MEDICATION_HASH = HashingUtils::HashString("MEDICATION");


        RxNormEntityCategory GetRxNormEntityCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEDICATION_HASH)
          {
            return RxNormEntityCategory::MEDICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RxNormEntityCategory>(hashCode);
          }

          return RxNormEntityCategory::NOT_SET;
        }

        Aws::String GetNameForRxNormEntityCategory(RxNormEntityCategory enumValue)
        {
          switch(enumValue)
          {
          case RxNormEntityCategory::MEDICATION:
            return "MEDICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RxNormEntityCategoryMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
