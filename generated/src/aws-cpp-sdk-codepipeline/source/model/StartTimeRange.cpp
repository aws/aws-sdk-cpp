/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StartTimeRange.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace StartTimeRangeMapper
      {

        static const int Latest_HASH = HashingUtils::HashString("Latest");
        static const int All_HASH = HashingUtils::HashString("All");


        StartTimeRange GetStartTimeRangeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Latest_HASH)
          {
            return StartTimeRange::Latest;
          }
          else if (hashCode == All_HASH)
          {
            return StartTimeRange::All;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StartTimeRange>(hashCode);
          }

          return StartTimeRange::NOT_SET;
        }

        Aws::String GetNameForStartTimeRange(StartTimeRange enumValue)
        {
          switch(enumValue)
          {
          case StartTimeRange::NOT_SET:
            return {};
          case StartTimeRange::Latest:
            return "Latest";
          case StartTimeRange::All:
            return "All";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StartTimeRangeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
