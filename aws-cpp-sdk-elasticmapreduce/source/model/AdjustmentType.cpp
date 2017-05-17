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

#include <aws/elasticmapreduce/model/AdjustmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace AdjustmentTypeMapper
      {

        static const int CHANGE_IN_CAPACITY_HASH = HashingUtils::HashString("CHANGE_IN_CAPACITY");
        static const int PERCENT_CHANGE_IN_CAPACITY_HASH = HashingUtils::HashString("PERCENT_CHANGE_IN_CAPACITY");
        static const int EXACT_CAPACITY_HASH = HashingUtils::HashString("EXACT_CAPACITY");


        AdjustmentType GetAdjustmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHANGE_IN_CAPACITY_HASH)
          {
            return AdjustmentType::CHANGE_IN_CAPACITY;
          }
          else if (hashCode == PERCENT_CHANGE_IN_CAPACITY_HASH)
          {
            return AdjustmentType::PERCENT_CHANGE_IN_CAPACITY;
          }
          else if (hashCode == EXACT_CAPACITY_HASH)
          {
            return AdjustmentType::EXACT_CAPACITY;
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
          case AdjustmentType::CHANGE_IN_CAPACITY:
            return "CHANGE_IN_CAPACITY";
          case AdjustmentType::PERCENT_CHANGE_IN_CAPACITY:
            return "PERCENT_CHANGE_IN_CAPACITY";
          case AdjustmentType::EXACT_CAPACITY:
            return "EXACT_CAPACITY";
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
  } // namespace EMR
} // namespace Aws
