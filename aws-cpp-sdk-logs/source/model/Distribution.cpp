/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace DistributionMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
