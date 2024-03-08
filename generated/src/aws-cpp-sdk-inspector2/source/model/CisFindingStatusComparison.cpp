/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisFindingStatusComparison.h>
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
      namespace CisFindingStatusComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");


        CisFindingStatusComparison GetCisFindingStatusComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return CisFindingStatusComparison::EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisFindingStatusComparison>(hashCode);
          }

          return CisFindingStatusComparison::NOT_SET;
        }

        Aws::String GetNameForCisFindingStatusComparison(CisFindingStatusComparison enumValue)
        {
          switch(enumValue)
          {
          case CisFindingStatusComparison::NOT_SET:
            return {};
          case CisFindingStatusComparison::EQUALS:
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

      } // namespace CisFindingStatusComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
