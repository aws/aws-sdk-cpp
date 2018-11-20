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

#include <aws/devicefarm/model/DeviceFilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace DeviceFilterOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int LESS_THAN_OR_EQUALS_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUALS");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int GREATER_THAN_OR_EQUALS_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUALS");
        static const int IN_HASH = HashingUtils::HashString("IN");
        static const int NOT_IN_HASH = HashingUtils::HashString("NOT_IN");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");


        DeviceFilterOperator GetDeviceFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return DeviceFilterOperator::EQUALS;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return DeviceFilterOperator::LESS_THAN;
          }
          else if (hashCode == LESS_THAN_OR_EQUALS_HASH)
          {
            return DeviceFilterOperator::LESS_THAN_OR_EQUALS;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return DeviceFilterOperator::GREATER_THAN;
          }
          else if (hashCode == GREATER_THAN_OR_EQUALS_HASH)
          {
            return DeviceFilterOperator::GREATER_THAN_OR_EQUALS;
          }
          else if (hashCode == IN_HASH)
          {
            return DeviceFilterOperator::IN;
          }
          else if (hashCode == NOT_IN_HASH)
          {
            return DeviceFilterOperator::NOT_IN;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return DeviceFilterOperator::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceFilterOperator>(hashCode);
          }

          return DeviceFilterOperator::NOT_SET;
        }

        Aws::String GetNameForDeviceFilterOperator(DeviceFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case DeviceFilterOperator::EQUALS:
            return "EQUALS";
          case DeviceFilterOperator::LESS_THAN:
            return "LESS_THAN";
          case DeviceFilterOperator::LESS_THAN_OR_EQUALS:
            return "LESS_THAN_OR_EQUALS";
          case DeviceFilterOperator::GREATER_THAN:
            return "GREATER_THAN";
          case DeviceFilterOperator::GREATER_THAN_OR_EQUALS:
            return "GREATER_THAN_OR_EQUALS";
          case DeviceFilterOperator::IN:
            return "IN";
          case DeviceFilterOperator::NOT_IN:
            return "NOT_IN";
          case DeviceFilterOperator::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DeviceFilterOperatorMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
