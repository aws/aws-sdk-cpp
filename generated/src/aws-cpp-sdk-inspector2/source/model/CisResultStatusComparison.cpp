/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisResultStatusComparison.h>
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
      namespace CisResultStatusComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");


        CisResultStatusComparison GetCisResultStatusComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return CisResultStatusComparison::EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisResultStatusComparison>(hashCode);
          }

          return CisResultStatusComparison::NOT_SET;
        }

        Aws::String GetNameForCisResultStatusComparison(CisResultStatusComparison enumValue)
        {
          switch(enumValue)
          {
          case CisResultStatusComparison::NOT_SET:
            return {};
          case CisResultStatusComparison::EQUALS:
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

      } // namespace CisResultStatusComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
