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
#include <aws/application-autoscaling/model/AdjustmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace AdjustmentTypeMapper
      {

        static const int ChangeInCapacity_HASH = HashingUtils::HashString("ChangeInCapacity");
        static const int PercentChangeInCapacity_HASH = HashingUtils::HashString("PercentChangeInCapacity");
        static const int ExactCapacity_HASH = HashingUtils::HashString("ExactCapacity");


        AdjustmentType GetAdjustmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ChangeInCapacity_HASH)
          {
            return AdjustmentType::ChangeInCapacity;
          }
          else if (hashCode == PercentChangeInCapacity_HASH)
          {
            return AdjustmentType::PercentChangeInCapacity;
          }
          else if (hashCode == ExactCapacity_HASH)
          {
            return AdjustmentType::ExactCapacity;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdjustmentType>(hashCode);
          }

          return AdjustmentType::NOT_SET;
        }

        Aws::String GetNameForAdjustmentType(AdjustmentType enumValue)
        {
          switch(enumValue)
          {
          case AdjustmentType::ChangeInCapacity:
            return "ChangeInCapacity";
          case AdjustmentType::PercentChangeInCapacity:
            return "PercentChangeInCapacity";
          case AdjustmentType::ExactCapacity:
            return "ExactCapacity";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AdjustmentTypeMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
