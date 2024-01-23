/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisStringComparison.h>
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
      namespace CisStringComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int PREFIX_HASH = HashingUtils::HashString("PREFIX");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");


        CisStringComparison GetCisStringComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return CisStringComparison::EQUALS;
          }
          else if (hashCode == PREFIX_HASH)
          {
            return CisStringComparison::PREFIX;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return CisStringComparison::NOT_EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisStringComparison>(hashCode);
          }

          return CisStringComparison::NOT_SET;
        }

        Aws::String GetNameForCisStringComparison(CisStringComparison enumValue)
        {
          switch(enumValue)
          {
          case CisStringComparison::NOT_SET:
            return {};
          case CisStringComparison::EQUALS:
            return "EQUALS";
          case CisStringComparison::PREFIX:
            return "PREFIX";
          case CisStringComparison::NOT_EQUALS:
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

      } // namespace CisStringComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
