/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TargetVisualOptions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace TargetVisualOptionsMapper
      {

        static const int ALL_VISUALS_HASH = HashingUtils::HashString("ALL_VISUALS");


        TargetVisualOptions GetTargetVisualOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_VISUALS_HASH)
          {
            return TargetVisualOptions::ALL_VISUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetVisualOptions>(hashCode);
          }

          return TargetVisualOptions::NOT_SET;
        }

        Aws::String GetNameForTargetVisualOptions(TargetVisualOptions enumValue)
        {
          switch(enumValue)
          {
          case TargetVisualOptions::ALL_VISUALS:
            return "ALL_VISUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetVisualOptionsMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
