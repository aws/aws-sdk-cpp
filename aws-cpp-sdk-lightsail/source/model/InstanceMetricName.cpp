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

#include <aws/lightsail/model/InstanceMetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace InstanceMetricNameMapper
      {

        static const int CPUUtilization_HASH = HashingUtils::HashString("CPUUtilization");
        static const int NetworkIn_HASH = HashingUtils::HashString("NetworkIn");
        static const int NetworkOut_HASH = HashingUtils::HashString("NetworkOut");
        static const int StatusCheckFailed_HASH = HashingUtils::HashString("StatusCheckFailed");
        static const int StatusCheckFailed_Instance_HASH = HashingUtils::HashString("StatusCheckFailed_Instance");
        static const int StatusCheckFailed_System_HASH = HashingUtils::HashString("StatusCheckFailed_System");


        InstanceMetricName GetInstanceMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPUUtilization_HASH)
          {
            return InstanceMetricName::CPUUtilization;
          }
          else if (hashCode == NetworkIn_HASH)
          {
            return InstanceMetricName::NetworkIn;
          }
          else if (hashCode == NetworkOut_HASH)
          {
            return InstanceMetricName::NetworkOut;
          }
          else if (hashCode == StatusCheckFailed_HASH)
          {
            return InstanceMetricName::StatusCheckFailed;
          }
          else if (hashCode == StatusCheckFailed_Instance_HASH)
          {
            return InstanceMetricName::StatusCheckFailed_Instance;
          }
          else if (hashCode == StatusCheckFailed_System_HASH)
          {
            return InstanceMetricName::StatusCheckFailed_System;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceMetricName>(hashCode);
          }

          return InstanceMetricName::NOT_SET;
        }

        Aws::String GetNameForInstanceMetricName(InstanceMetricName enumValue)
        {
          switch(enumValue)
          {
          case InstanceMetricName::CPUUtilization:
            return "CPUUtilization";
          case InstanceMetricName::NetworkIn:
            return "NetworkIn";
          case InstanceMetricName::NetworkOut:
            return "NetworkOut";
          case InstanceMetricName::StatusCheckFailed:
            return "StatusCheckFailed";
          case InstanceMetricName::StatusCheckFailed_Instance:
            return "StatusCheckFailed_Instance";
          case InstanceMetricName::StatusCheckFailed_System:
            return "StatusCheckFailed_System";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InstanceMetricNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
