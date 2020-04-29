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

#include <aws/iotsitewise/model/AggregateType.h>
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
      namespace AggregateTypeMapper
      {

        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int MAXIMUM_HASH = HashingUtils::HashString("MAXIMUM");
        static const int MINIMUM_HASH = HashingUtils::HashString("MINIMUM");
        static const int SUM_HASH = HashingUtils::HashString("SUM");


        AggregateType GetAggregateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVERAGE_HASH)
          {
            return AggregateType::AVERAGE;
          }
          else if (hashCode == COUNT_HASH)
          {
            return AggregateType::COUNT;
          }
          else if (hashCode == MAXIMUM_HASH)
          {
            return AggregateType::MAXIMUM;
          }
          else if (hashCode == MINIMUM_HASH)
          {
            return AggregateType::MINIMUM;
          }
          else if (hashCode == SUM_HASH)
          {
            return AggregateType::SUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregateType>(hashCode);
          }

          return AggregateType::NOT_SET;
        }

        Aws::String GetNameForAggregateType(AggregateType enumValue)
        {
          switch(enumValue)
          {
          case AggregateType::AVERAGE:
            return "AVERAGE";
          case AggregateType::COUNT:
            return "COUNT";
          case AggregateType::MAXIMUM:
            return "MAXIMUM";
          case AggregateType::MINIMUM:
            return "MINIMUM";
          case AggregateType::SUM:
            return "SUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregateTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
