/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BarsArrangement.h>
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
      namespace BarsArrangementMapper
      {

        static const int CLUSTERED_HASH = HashingUtils::HashString("CLUSTERED");
        static const int STACKED_HASH = HashingUtils::HashString("STACKED");
        static const int STACKED_PERCENT_HASH = HashingUtils::HashString("STACKED_PERCENT");


        BarsArrangement GetBarsArrangementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLUSTERED_HASH)
          {
            return BarsArrangement::CLUSTERED;
          }
          else if (hashCode == STACKED_HASH)
          {
            return BarsArrangement::STACKED;
          }
          else if (hashCode == STACKED_PERCENT_HASH)
          {
            return BarsArrangement::STACKED_PERCENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BarsArrangement>(hashCode);
          }

          return BarsArrangement::NOT_SET;
        }

        Aws::String GetNameForBarsArrangement(BarsArrangement enumValue)
        {
          switch(enumValue)
          {
          case BarsArrangement::CLUSTERED:
            return "CLUSTERED";
          case BarsArrangement::STACKED:
            return "STACKED";
          case BarsArrangement::STACKED_PERCENT:
            return "STACKED_PERCENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BarsArrangementMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
