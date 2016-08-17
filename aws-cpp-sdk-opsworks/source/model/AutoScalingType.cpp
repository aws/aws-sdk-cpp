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
#include <aws/opsworks/model/AutoScalingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace AutoScalingTypeMapper
      {

        static const int load_HASH = HashingUtils::HashString("load");
        static const int timer_HASH = HashingUtils::HashString("timer");


        AutoScalingType GetAutoScalingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == load_HASH)
          {
            return AutoScalingType::load;
          }
          else if (hashCode == timer_HASH)
          {
            return AutoScalingType::timer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoScalingType>(hashCode);
          }

          return AutoScalingType::NOT_SET;
        }

        Aws::String GetNameForAutoScalingType(AutoScalingType enumValue)
        {
          switch(enumValue)
          {
          case AutoScalingType::load:
            return "load";
          case AutoScalingType::timer:
            return "timer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AutoScalingTypeMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
