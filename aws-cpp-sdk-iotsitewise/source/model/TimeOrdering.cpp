/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/TimeOrdering.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace TimeOrderingMapper
      {

        static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");
        static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");


        TimeOrdering GetTimeOrderingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASCENDING_HASH)
          {
            return TimeOrdering::ASCENDING;
          }
          else if (hashCode == DESCENDING_HASH)
          {
            return TimeOrdering::DESCENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeOrdering>(hashCode);
          }

          return TimeOrdering::NOT_SET;
        }

        Aws::String GetNameForTimeOrdering(TimeOrdering enumValue)
        {
          switch(enumValue)
          {
          case TimeOrdering::ASCENDING:
            return "ASCENDING";
          case TimeOrdering::DESCENDING:
            return "DESCENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeOrderingMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
