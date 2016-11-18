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
#include <aws/ec2/model/RecurringChargeFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace RecurringChargeFrequencyMapper
      {

        static const int Hourly_HASH = HashingUtils::HashString("Hourly");


        RecurringChargeFrequency GetRecurringChargeFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Hourly_HASH)
          {
            return RecurringChargeFrequency::Hourly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecurringChargeFrequency>(hashCode);
          }

          return RecurringChargeFrequency::NOT_SET;
        }

        Aws::String GetNameForRecurringChargeFrequency(RecurringChargeFrequency enumValue)
        {
          switch(enumValue)
          {
          case RecurringChargeFrequency::Hourly:
            return "Hourly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RecurringChargeFrequencyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
