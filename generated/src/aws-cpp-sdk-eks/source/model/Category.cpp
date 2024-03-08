/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Category.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace CategoryMapper
      {

        static const int UPGRADE_READINESS_HASH = HashingUtils::HashString("UPGRADE_READINESS");


        Category GetCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPGRADE_READINESS_HASH)
          {
            return Category::UPGRADE_READINESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Category>(hashCode);
          }

          return Category::NOT_SET;
        }

        Aws::String GetNameForCategory(Category enumValue)
        {
          switch(enumValue)
          {
          case Category::NOT_SET:
            return {};
          case Category::UPGRADE_READINESS:
            return "UPGRADE_READINESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CategoryMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
