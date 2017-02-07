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
#include <aws/clouddirectory/model/RangeMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace RangeModeMapper
      {

        static const int FIRST_HASH = HashingUtils::HashString("FIRST");
        static const int LAST_HASH = HashingUtils::HashString("LAST");
        static const int LAST_BEFORE_MISSING_VALUES_HASH = HashingUtils::HashString("LAST_BEFORE_MISSING_VALUES");
        static const int INCLUSIVE_HASH = HashingUtils::HashString("INCLUSIVE");
        static const int EXCLUSIVE_HASH = HashingUtils::HashString("EXCLUSIVE");


        RangeMode GetRangeModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIRST_HASH)
          {
            return RangeMode::FIRST;
          }
          else if (hashCode == LAST_HASH)
          {
            return RangeMode::LAST;
          }
          else if (hashCode == LAST_BEFORE_MISSING_VALUES_HASH)
          {
            return RangeMode::LAST_BEFORE_MISSING_VALUES;
          }
          else if (hashCode == INCLUSIVE_HASH)
          {
            return RangeMode::INCLUSIVE;
          }
          else if (hashCode == EXCLUSIVE_HASH)
          {
            return RangeMode::EXCLUSIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RangeMode>(hashCode);
          }

          return RangeMode::NOT_SET;
        }

        Aws::String GetNameForRangeMode(RangeMode enumValue)
        {
          switch(enumValue)
          {
          case RangeMode::FIRST:
            return "FIRST";
          case RangeMode::LAST:
            return "LAST";
          case RangeMode::LAST_BEFORE_MISSING_VALUES:
            return "LAST_BEFORE_MISSING_VALUES";
          case RangeMode::INCLUSIVE:
            return "INCLUSIVE";
          case RangeMode::EXCLUSIVE:
            return "EXCLUSIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RangeModeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
