/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StringComparison.h>
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
      namespace StringComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int PREFIX_HASH = HashingUtils::HashString("PREFIX");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");


        StringComparison GetStringComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return StringComparison::EQUALS;
          }
          else if (hashCode == PREFIX_HASH)
          {
            return StringComparison::PREFIX;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return StringComparison::NOT_EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StringComparison>(hashCode);
          }

          return StringComparison::NOT_SET;
        }

        Aws::String GetNameForStringComparison(StringComparison enumValue)
        {
          switch(enumValue)
          {
          case StringComparison::NOT_SET:
            return {};
          case StringComparison::EQUALS:
            return "EQUALS";
          case StringComparison::PREFIX:
            return "PREFIX";
          case StringComparison::NOT_EQUALS:
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

      } // namespace StringComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
