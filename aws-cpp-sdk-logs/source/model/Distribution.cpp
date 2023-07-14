/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/Distribution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace DistributionMapper
      {

        static const int Random_HASH = HashingUtils::HashString("Random");
        static const int ByLogStream_HASH = HashingUtils::HashString("ByLogStream");


        Distribution GetDistributionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Random_HASH)
          {
            return Distribution::Random;
          }
          else if (hashCode == ByLogStream_HASH)
          {
            return Distribution::ByLogStream;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Distribution>(hashCode);
          }

          return Distribution::NOT_SET;
        }

        Aws::String GetNameForDistribution(Distribution enumValue)
        {
          switch(enumValue)
          {
          case Distribution::Random:
            return "Random";
          case Distribution::ByLogStream:
            return "ByLogStream";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DistributionMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
