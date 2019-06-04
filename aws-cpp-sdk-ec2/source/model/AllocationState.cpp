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

#include <aws/ec2/model/AllocationState.h>
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
      namespace AllocationStateMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int under_assessment_HASH = HashingUtils::HashString("under-assessment");
        static const int permanent_failure_HASH = HashingUtils::HashString("permanent-failure");
        static const int released_HASH = HashingUtils::HashString("released");
        static const int released_permanent_failure_HASH = HashingUtils::HashString("released-permanent-failure");
        static const int pending_HASH = HashingUtils::HashString("pending");


        AllocationState GetAllocationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return AllocationState::available;
          }
          else if (hashCode == under_assessment_HASH)
          {
            return AllocationState::under_assessment;
          }
          else if (hashCode == permanent_failure_HASH)
          {
            return AllocationState::permanent_failure;
          }
          else if (hashCode == released_HASH)
          {
            return AllocationState::released;
          }
          else if (hashCode == released_permanent_failure_HASH)
          {
            return AllocationState::released_permanent_failure;
          }
          else if (hashCode == pending_HASH)
          {
            return AllocationState::pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllocationState>(hashCode);
          }

          return AllocationState::NOT_SET;
        }

        Aws::String GetNameForAllocationState(AllocationState enumValue)
        {
          switch(enumValue)
          {
          case AllocationState::available:
            return "available";
          case AllocationState::under_assessment:
            return "under-assessment";
          case AllocationState::permanent_failure:
            return "permanent-failure";
          case AllocationState::released:
            return "released";
          case AllocationState::released_permanent_failure:
            return "released-permanent-failure";
          case AllocationState::pending:
            return "pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllocationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
