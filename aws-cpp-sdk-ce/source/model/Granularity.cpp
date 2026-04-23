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

#include <aws/ce/model/Granularity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace GranularityMapper
      {

        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");


        Granularity GetGranularityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAILY_HASH)
          {
            return Granularity::DAILY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return Granularity::MONTHLY;
          }
          else if (hashCode == HOURLY_HASH)
          {
            return Granularity::HOURLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Granularity>(hashCode);
          }

          return Granularity::NOT_SET;
        }

        Aws::String GetNameForGranularity(Granularity enumValue)
        {
          switch(enumValue)
          {
          case Granularity::DAILY:
            return "DAILY";
          case Granularity::MONTHLY:
            return "MONTHLY";
          case Granularity::HOURLY:
            return "HOURLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GranularityMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
