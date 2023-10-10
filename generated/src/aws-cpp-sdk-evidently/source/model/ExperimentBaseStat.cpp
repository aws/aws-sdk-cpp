/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentBaseStat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace ExperimentBaseStatMapper
      {

        static const int Mean_HASH = HashingUtils::HashString("Mean");


        ExperimentBaseStat GetExperimentBaseStatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Mean_HASH)
          {
            return ExperimentBaseStat::Mean;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentBaseStat>(hashCode);
          }

          return ExperimentBaseStat::NOT_SET;
        }

        Aws::String GetNameForExperimentBaseStat(ExperimentBaseStat enumValue)
        {
          switch(enumValue)
          {
          case ExperimentBaseStat::NOT_SET:
            return {};
          case ExperimentBaseStat::Mean:
            return "Mean";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExperimentBaseStatMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
