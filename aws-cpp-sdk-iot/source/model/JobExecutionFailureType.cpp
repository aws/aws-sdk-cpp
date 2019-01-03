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

#include <aws/iot/model/JobExecutionFailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace JobExecutionFailureTypeMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        JobExecutionFailureType GetJobExecutionFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return JobExecutionFailureType::FAILED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return JobExecutionFailureType::REJECTED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return JobExecutionFailureType::TIMED_OUT;
          }
          else if (hashCode == ALL_HASH)
          {
            return JobExecutionFailureType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobExecutionFailureType>(hashCode);
          }

          return JobExecutionFailureType::NOT_SET;
        }

        Aws::String GetNameForJobExecutionFailureType(JobExecutionFailureType enumValue)
        {
          switch(enumValue)
          {
          case JobExecutionFailureType::FAILED:
            return "FAILED";
          case JobExecutionFailureType::REJECTED:
            return "REJECTED";
          case JobExecutionFailureType::TIMED_OUT:
            return "TIMED_OUT";
          case JobExecutionFailureType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobExecutionFailureTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
