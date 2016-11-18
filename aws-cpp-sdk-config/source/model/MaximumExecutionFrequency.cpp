/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/model/MaximumExecutionFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace MaximumExecutionFrequencyMapper
      {

        static const int One_Hour_HASH = HashingUtils::HashString("One_Hour");
        static const int Three_Hours_HASH = HashingUtils::HashString("Three_Hours");
        static const int Six_Hours_HASH = HashingUtils::HashString("Six_Hours");
        static const int Twelve_Hours_HASH = HashingUtils::HashString("Twelve_Hours");
        static const int TwentyFour_Hours_HASH = HashingUtils::HashString("TwentyFour_Hours");


        MaximumExecutionFrequency GetMaximumExecutionFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == One_Hour_HASH)
          {
            return MaximumExecutionFrequency::One_Hour;
          }
          else if (hashCode == Three_Hours_HASH)
          {
            return MaximumExecutionFrequency::Three_Hours;
          }
          else if (hashCode == Six_Hours_HASH)
          {
            return MaximumExecutionFrequency::Six_Hours;
          }
          else if (hashCode == Twelve_Hours_HASH)
          {
            return MaximumExecutionFrequency::Twelve_Hours;
          }
          else if (hashCode == TwentyFour_Hours_HASH)
          {
            return MaximumExecutionFrequency::TwentyFour_Hours;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaximumExecutionFrequency>(hashCode);
          }

          return MaximumExecutionFrequency::NOT_SET;
        }

        Aws::String GetNameForMaximumExecutionFrequency(MaximumExecutionFrequency enumValue)
        {
          switch(enumValue)
          {
          case MaximumExecutionFrequency::One_Hour:
            return "One_Hour";
          case MaximumExecutionFrequency::Three_Hours:
            return "Three_Hours";
          case MaximumExecutionFrequency::Six_Hours:
            return "Six_Hours";
          case MaximumExecutionFrequency::Twelve_Hours:
            return "Twelve_Hours";
          case MaximumExecutionFrequency::TwentyFour_Hours:
            return "TwentyFour_Hours";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MaximumExecutionFrequencyMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
