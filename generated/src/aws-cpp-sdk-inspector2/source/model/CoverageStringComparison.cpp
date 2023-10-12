/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CoverageStringComparison.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CoverageStringComparisonMapper
      {

        static constexpr uint32_t EQUALS_HASH = ConstExprHashingUtils::HashString("EQUALS");
        static constexpr uint32_t NOT_EQUALS_HASH = ConstExprHashingUtils::HashString("NOT_EQUALS");


        CoverageStringComparison GetCoverageStringComparisonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return CoverageStringComparison::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return CoverageStringComparison::NOT_EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoverageStringComparison>(hashCode);
          }

          return CoverageStringComparison::NOT_SET;
        }

        Aws::String GetNameForCoverageStringComparison(CoverageStringComparison enumValue)
        {
          switch(enumValue)
          {
          case CoverageStringComparison::NOT_SET:
            return {};
          case CoverageStringComparison::EQUALS:
            return "EQUALS";
          case CoverageStringComparison::NOT_EQUALS:
            return "NOT_EQUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CoverageStringComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
