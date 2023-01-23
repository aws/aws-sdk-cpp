/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/FindingCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace FindingCategoryMapper
      {

        static const int CLASSIFICATION_HASH = HashingUtils::HashString("CLASSIFICATION");
        static const int POLICY_HASH = HashingUtils::HashString("POLICY");


        FindingCategory GetFindingCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLASSIFICATION_HASH)
          {
            return FindingCategory::CLASSIFICATION;
          }
          else if (hashCode == POLICY_HASH)
          {
            return FindingCategory::POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingCategory>(hashCode);
          }

          return FindingCategory::NOT_SET;
        }

        Aws::String GetNameForFindingCategory(FindingCategory enumValue)
        {
          switch(enumValue)
          {
          case FindingCategory::CLASSIFICATION:
            return "CLASSIFICATION";
          case FindingCategory::POLICY:
            return "POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingCategoryMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
