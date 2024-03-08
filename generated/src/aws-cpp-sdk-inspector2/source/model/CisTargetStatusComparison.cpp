/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisTargetStatusComparison.h>
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
      namespace CisTargetStatusComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");


        CisTargetStatusComparison GetCisTargetStatusComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return CisTargetStatusComparison::EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisTargetStatusComparison>(hashCode);
          }

          return CisTargetStatusComparison::NOT_SET;
        }

        Aws::String GetNameForCisTargetStatusComparison(CisTargetStatusComparison enumValue)
        {
          switch(enumValue)
          {
          case CisTargetStatusComparison::NOT_SET:
            return {};
          case CisTargetStatusComparison::EQUALS:
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

      } // namespace CisTargetStatusComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
