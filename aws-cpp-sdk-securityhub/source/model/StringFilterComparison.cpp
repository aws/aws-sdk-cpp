/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StringFilterComparison.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace StringFilterComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int PREFIX_HASH = HashingUtils::HashString("PREFIX");


        StringFilterComparison GetStringFilterComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return StringFilterComparison::EQUALS;
          }
          else if (hashCode == PREFIX_HASH)
          {
            return StringFilterComparison::PREFIX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StringFilterComparison>(hashCode);
          }

          return StringFilterComparison::NOT_SET;
        }

        Aws::String GetNameForStringFilterComparison(StringFilterComparison enumValue)
        {
          switch(enumValue)
          {
          case StringFilterComparison::EQUALS:
            return "EQUALS";
          case StringFilterComparison::PREFIX:
            return "PREFIX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StringFilterComparisonMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
