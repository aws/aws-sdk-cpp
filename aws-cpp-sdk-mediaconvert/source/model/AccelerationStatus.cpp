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

#include <aws/mediaconvert/model/AccelerationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace AccelerationStatusMapper
      {

        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int ACCELERATED_HASH = HashingUtils::HashString("ACCELERATED");
        static const int NOT_ACCELERATED_HASH = HashingUtils::HashString("NOT_ACCELERATED");


        AccelerationStatus GetAccelerationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_APPLICABLE_HASH)
          {
            return AccelerationStatus::NOT_APPLICABLE;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AccelerationStatus::IN_PROGRESS;
          }
          else if (hashCode == ACCELERATED_HASH)
          {
            return AccelerationStatus::ACCELERATED;
          }
          else if (hashCode == NOT_ACCELERATED_HASH)
          {
            return AccelerationStatus::NOT_ACCELERATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccelerationStatus>(hashCode);
          }

          return AccelerationStatus::NOT_SET;
        }

        Aws::String GetNameForAccelerationStatus(AccelerationStatus enumValue)
        {
          switch(enumValue)
          {
          case AccelerationStatus::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          case AccelerationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AccelerationStatus::ACCELERATED:
            return "ACCELERATED";
          case AccelerationStatus::NOT_ACCELERATED:
            return "NOT_ACCELERATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccelerationStatusMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
