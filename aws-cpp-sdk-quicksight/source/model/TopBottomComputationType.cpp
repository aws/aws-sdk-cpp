/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopBottomComputationType.h>
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
      namespace TopBottomComputationTypeMapper
      {

        static const int TOP_HASH = HashingUtils::HashString("TOP");
        static const int BOTTOM_HASH = HashingUtils::HashString("BOTTOM");


        TopBottomComputationType GetTopBottomComputationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOP_HASH)
          {
            return TopBottomComputationType::TOP;
          }
          else if (hashCode == BOTTOM_HASH)
          {
            return TopBottomComputationType::BOTTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopBottomComputationType>(hashCode);
          }

          return TopBottomComputationType::NOT_SET;
        }

        Aws::String GetNameForTopBottomComputationType(TopBottomComputationType enumValue)
        {
          switch(enumValue)
          {
          case TopBottomComputationType::TOP:
            return "TOP";
          case TopBottomComputationType::BOTTOM:
            return "BOTTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopBottomComputationTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
