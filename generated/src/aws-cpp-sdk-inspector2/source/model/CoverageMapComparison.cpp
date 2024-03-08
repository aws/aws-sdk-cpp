/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CoverageMapComparison.h>
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
      namespace CoverageMapComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");


        CoverageMapComparison GetCoverageMapComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return CoverageMapComparison::EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoverageMapComparison>(hashCode);
          }

          return CoverageMapComparison::NOT_SET;
        }

        Aws::String GetNameForCoverageMapComparison(CoverageMapComparison enumValue)
        {
          switch(enumValue)
          {
          case CoverageMapComparison::NOT_SET:
            return {};
          case CoverageMapComparison::EQUALS:
            return "EQUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CoverageMapComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
