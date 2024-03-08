/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceMapComparison.h>
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
      namespace ResourceMapComparisonMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");


        ResourceMapComparison GetResourceMapComparisonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return ResourceMapComparison::EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceMapComparison>(hashCode);
          }

          return ResourceMapComparison::NOT_SET;
        }

        Aws::String GetNameForResourceMapComparison(ResourceMapComparison enumValue)
        {
          switch(enumValue)
          {
          case ResourceMapComparison::NOT_SET:
            return {};
          case ResourceMapComparison::EQUALS:
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

      } // namespace ResourceMapComparisonMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
