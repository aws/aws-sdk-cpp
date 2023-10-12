/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceStringComparison.h>
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
      namespace ResourceStringComparisonMapper
      {

        static constexpr uint32_t EQUALS_HASH = ConstExprHashingUtils::HashString("EQUALS");
        static constexpr uint32_t NOT_EQUALS_HASH = ConstExprHashingUtils::HashString("NOT_EQUALS");


        ResourceStringComparison GetResourceStringComparisonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return ResourceStringComparison::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return ResourceStringComparison::NOT_EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceStringComparison>(hashCode);
          }

          return ResourceStringComparison::NOT_SET;
        }

        Aws::String GetNameForResourceStringComparison(ResourceStringComparison enumValue)
        {
          switch(enumValue)
          {
          case ResourceStringComparison::NOT_SET:
            return {};
          case ResourceStringComparison::EQUALS:
            return "EQUALS";
          case ResourceStringComparison::NOT_EQUALS:
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

      } // namespace ResourceStringComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
