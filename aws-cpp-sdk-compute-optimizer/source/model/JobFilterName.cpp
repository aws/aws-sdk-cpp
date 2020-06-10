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

#include <aws/compute-optimizer/model/JobFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace JobFilterNameMapper
      {

        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
        static const int JobStatus_HASH = HashingUtils::HashString("JobStatus");


        JobFilterName GetJobFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceType_HASH)
          {
            return JobFilterName::ResourceType;
          }
          else if (hashCode == JobStatus_HASH)
          {
            return JobFilterName::JobStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobFilterName>(hashCode);
          }

          return JobFilterName::NOT_SET;
        }

        Aws::String GetNameForJobFilterName(JobFilterName enumValue)
        {
          switch(enumValue)
          {
          case JobFilterName::ResourceType:
            return "ResourceType";
          case JobFilterName::JobStatus:
            return "JobStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobFilterNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
